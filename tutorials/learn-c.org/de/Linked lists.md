Tutorial
--------

### Einführung

Gelinkte Listen sind das beste und einfachste Beispiel für eine dynamische Datenstruktur, die Zeiger für ihre Implementation benutzt.
Das Konzept von Zeigern verstanden zu haben, ist allerdings entscheidend dafür gelinkte Listen zu verstehen, solltest du dieses Kapitel also übersprungen haben, ist jetzt ein guter Zeitpunkt zurück zu gehen. Dir sollten außerdem dynamische Speicherbelegung und Datenstrukturen bekannt sein.

Prinzipiell sind funktionieren gelinkte Listen wie Arrays, die bei Bedarf wachsen und schrumpfen können..

Gelinkte Listen haben ein paar Vorteile gegenüber Arrays:

1. Elemente können überall in der Liste hinzugefügt und entfernt werden
2. Es muss keine Größe bei der Erstellung angegeben werden

Allerdings haben sie auch ein paar Nachteile:

1. Es gibt keinen "zufälligen" Zugriff. Um an das nte Element zu kommen, muss man zuvor über alle davor liegenden Elemente iterieren.
2. Dynamische Speicher Belegung und Zeiger sind nötig, was den Code komplizierter und fehleranfälliger macht
3. Gelinkte Listen haben einen größeren Overhead als Arrays, da die Elemente der Liste dynamisch belegt werden (was weniger effizient ist) und jedes Element zusätzlich Speicherplatz für einen Zeiger braucht

### Was ist eine gelinkte Liste?

Eine gelinkte Liste ist eine Menge dynamisch allozierter Knoten, die so angelegt sind, dass jeder Knoten einen Wert und einen Zeiger auf das nächste Element enthält. Ist dieser Zeiger NULL, dann ist dieses Element das letzte in der Liste.

Eine gelinkte Liste wird durch eine lokale Zeigervariable repräsentiert, die zum ersten Element der Liste zeigt.
Ist dieser Zeiger NULL, dann ist die Liste leer.

        -------------------------------              -------------------------------
        |               |             |            \ |               |             |
        |     DATEN     |     NEXT    |--------------|     DATEN     |     NEXT    |
        |               |             |            / |               |             |
        -------------------------------              -------------------------------

Definieren wir einen Knoten einer gelinkten Liste:

    typedef struct node {
        int val;
        struct node * next;
    } node_t;

Beachte, dass wir das Strukt rekursiv definieren. Das ist möglich in C. Nennen wir unseren Knotentyp `node_t`.

Jetzt können wir den Knoten benutzen. Erstellen wir eine lokale Variable, die zum ersten Element der Liste zeigt. Nennen wir sie `head`.

    node_t * head = NULL;
    head = malloc(sizeof(node_t));
    if (head == NULL) {
        return 1;
    }

    head->val = 1;
    head->next = NULL;

Wir haben gerade die erste Variable in der Liste erstellt. Wir müssen den Wert des Elements setzen und das nächste Element leer lassen, wenn wir fertig sind die Liste zu füllen.
Beachte, dass wir immer überprüfen sollten, ob `malloc` einen NULL Wert zurückgegeben hat oder nicht.

Um eine Variable an das Ende der Liste anzufügen, können wir einfach dem next Zeiger folgen:

    node_t * head = NULL;
    head = malloc(sizeof(node_t));
    head->val = 1;
    head->next = malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;

Das kann ewig so weiter gehen, was wir aber eigentlich machen sollten ist der Liste folgen, bis der next Zeiger NULL ist.

### Über eine Liste iterieren

Lass uns eine Funktion erstellen, die alle Elemente einer Liste ausgibt. Um das zu tun, müssen wir einen `current` Zeiger benutzen, der auf das momentane Element zeigt.
Nachdem wir das aktuelle Element ausgegeben haben, ersetzen wir den `current` Zeiger mit dem `next` Zeiger des momentanen Elements und gehen so in der Liste ein Element weiter.
Solange, bis der `next` Zeiger des aktuellen Elements NULL ist und wir damit am Ende der Liste angekommen sind.

    void print_list(node_t * head) {
        node_t * current = head;

        while (current != NULL) {
            printf("%d\n", current->val);
            current = current->next;
        }
    }

### Ein Element an das Ende der Liste hinzufügen


Um über alle Elemente einer gelinkten Liste iterieren zu können, benutzen wir den Zeiger `current`. Wir setzen ihn an den Anfang der Liste
und mit jedem Schritt gehen wir ein Element weiter, bis wir am Ende angekommen sind.

    void push(node_t * head, int val) {
        node_t * current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        /* jetzt koennen wir eine neue Variable hinzufuegen */
        current->next = malloc(sizeof(node_t));
        current->next->val = val;
        current->next->next = NULL;
    }

Am besten geeignet sind gelinkte Listen für Stacks und Queue, die wir nun implementieren werden:

### Ein Element an den Anfang einer Liste hinzufügen (Push)

Um etwas an den Anfang einer Liste zu setzen, müssen wir folgendes tun:

1. Erstelle ein neues Element und setze seinen Wert
2. Setze den `next` Zeiger des Elements so, dass es auf den momentanen Anfang der Liste zeigt
3. Setze unser Element als den neuen Anfang unserer Liste

Das erstellt ein neues Startelement der Liste mit einem neuen Wert und der Rest der Liste ist damit verknüpft.

Da wir Funktionen für diese Operation benutzen, müssen wir dir Variable verändern können, die unseren Listenanfang speichert.
Dafür müssen wir eine Zeigervariable (einen Doppelzeiger) übergeben, damit wir den Zeiger selbst verändern können und nicht nur sein Ziel.


    void push(node_t ** head, int val) {
        node_t * new_node;
        new_node = malloc(sizeof(node_t));

        new_node->val = val;
        new_node->next = *head;
        *head = new_node;
    }


### Das erste Element entfernen (Pop)

Um eine Variable zu entfernen, müssen wir die selben Schritte rückwärts gehen:

1. Nimm das Element, auf das das erste Element unserer Liste zeigt und speicher es
2. Lösche das Anfangselement mit `free`
3. Setze unser zwischengespeichertes Element als neues Anfangselement

Hier ist der Code:

    int pop(node_t ** head) {
        int retval = -1;
        node_t * next_node = NULL;

        if (*head == NULL) {
            return -1;
        }

        next_node = (*head)->next;
        retval = (*head)->val;
        free(*head);
        *head = next_node;

        return retval;
    }


### Das letzte Element einer Liste entfernen

Ein Element vom Ende der Liste zu entfernen funktioniert ähnlich wie das Hinzufügen eines Elements.
Es gibt aber eine Ausnahme: Da wir das vorletze Element auch verändern müssen, müssen wir nun 2 Elemente vorausschauen
und überprüfen, ob das nächste Element das letzte ist.


    int remove_last(node_t * head) {
        int retval = 0;
        /* wenn nur ein Element in der Liste ist, entferne es */
        if (head->next == NULL) {
            head->val
            free(head);
            head = NULL;
            return retval;
        }

        node_t * current = head;

        while (current->next->next != NULL) {
            current = current->next;
        }
    }


### Ein bestimmtes Element entfernen

Um ein bestimmtes Element aus unserer Liste, entweder nach Index, oder nach seinem Wert zu entfernen, müssen wir 
über alle Elemente iterieren und immer nach vorne schauen, um zu sehen ob wir das Element vor dem das wir entfernen 
wollen erreicht haben. Das tun wir aus dem Grund, dass wir das Element was davor kommt auch verändern müssen.

Hier ist der Algorithmus:

1. Iteriere zu dem Element vor dem, das wir entfernen wollen.
2. Speichere das Element, dass wir entfernen wollen in einer anderen Variable zwischen
3. Setze den `next` Zeiger des Elements vor dem Aktuellen auf das Element nach dem Aktuellen
4. Lösche das Element mit Hilfe des zwischen gespeicherten Zeigers

There are a few edge cases we need to take care of, so make sure you understand the code.

    int remove_by_index(node_t ** head, int n) {
        int i = 0;
        int retval = -1;
        node_t * current = *head;
        node_t * temp_node = NULL;


        if (n == 0) {
            return pop(head);
        }

        for (i = 0; i < n-1; i++) {
            if (current->next == NULL) {
                return -1;
            }
            current = current->next;
        }

        temp_node = current->next;
        retval = temp_node->val;
        current->next = temp_node->next;
        free(temp_node);

        return retval;

    }


Übung
-----

Implementiere die Funktion `remove_by_value`, welche einen Doppelzeiger zum Anfang der Liste erhält und das erste
Element der Liste mit dem Wert `val` entfernt.

Tutorial Code
-------------

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct node {
        int val;
        struct node * next;
    } node_t;

    void print_list(node_t * head) {
        node_t * current = head;

        while (current != NULL) {
            printf("%d\n", current->val);
            current = current->next;
        }
    }

    int pop(node_t ** head) {
        int retval = -1;
        node_t * next_node = NULL;

        if (*head == NULL) {
            return -1;
        }

        next_node = (*head)->next;
        retval = (*head)->val;
        free(*head);
        *head = next_node;

        return retval;
    }

    int remove_by_value(node_t ** head, int val) {
        /* TODO: schreibe deinen Code hier */
    }

    int main() {

        node_t * test_list = malloc(sizeof(node_t));
        test_list->val = 1;
        test_list->next = malloc(sizeof(node_t));
        test_list->next->val = 2;
        test_list->next->next = malloc(sizeof(node_t));
        test_list->next->next->val = 3;
        test_list->next->next->next = malloc(sizeof(node_t));
        test_list->next->next->next->val = 4;
        test_list->next->next->next->next = NULL;

        remove_by_value(&test_list, 3);

        print_list(test_list);
    }

Erwartete Ausgabe
-----------------

    1
    2
    4

Lösung
------

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct node {
        int val;
        struct node * next;
    } node_t;

    void print_list(node_t * head) {
        node_t * current = head;

        while (current != NULL) {
            printf("%d\n", current->val);
            current = current->next;
        }
    }

    int pop(node_t ** head) {
        int retval = -1;
        node_t * next_node = NULL;

        if (*head == NULL) {
            return -1;
        }

        next_node = (*head)->next;
        retval = (*head)->val;
        free(*head);
        *head = next_node;

        return retval;
    }

    int remove_by_value(node_t ** head, int val) {
        int i = 0;
        int retval = -1;
        node_t * current = *head;
        node_t * temp_node = NULL;


        if ((*head)->val == val) {
            return pop(head);
        }

        while (current->next->val != val) {
            if (current->next == NULL) {
                return -1;
            }
            current = current->next;
        }

        temp_node = current->next;
        retval = temp_node->val;
        current->next = temp_node->next;
        free(temp_node);

        return retval;

    }

    int main() {

        node_t * test_list = malloc(sizeof(node_t));
        test_list->val = 1;
        test_list->next = malloc(sizeof(node_t));
        test_list->next->val = 2;
        test_list->next->next = malloc(sizeof(node_t));
        test_list->next->next->val = 3;
        test_list->next->next->next = malloc(sizeof(node_t));
        test_list->next->next->next->val = 4;
        test_list->next->next->next->next = NULL;

        remove_by_value(&test_list, 3);

        print_list(test_list);
    }
