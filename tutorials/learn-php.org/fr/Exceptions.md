Tutorial
--------
PHP a un modèle d'exceptions similaire à celui d'autres langages de programmation.
Une exception peut être déclenchée (*throw*), et interceptée (*catch* / "attrapée") dans PHP.
Le code peut être entouré par un bloc try ("essayer"), pour faciliter l'interception d'exceptions éventuelles.
Chaque try doit avoir au moins un block catch ou finally (finalement).

    try {
      echo 2 / 0;
    } catch (Exception $e) {
      echo "Exception interceptée: Division by zéro!";
    }

on peut utiliser plusieurs blocs catch to intercepter des classes d'exceptions différentes.
L'exécution normale (lorsqu'aucune exception n'est déclenchée à l'intérieur du bloc try) continuera après
ce dernier bloc catch défini dans cette série. Les exceptions peuvent être déclenchées (ou re-déclenchées) à l'intérieur d'un bloc catch.

    if (4/2 == 2) {
      echo "Juste !";
    } else {
      throw new Exception("Réponse fausse !");
    }

Quand une exception est déclenchée, le code qui suit l'instruction ne sera pas exécuté,
et PHP essaiera de trouver le premier bloc catch qui corresponde. Si une exception n'est pas interceptée,
une erreur *Fatal Error* PHP surviendra avec un message "Uncaught Exception ..." (exception non attrapée),
à moins qu'un gestionnaire n'ai été défini avec set_exception_handler().

## Blocks finally

À partir de PHP 5.5, un block finally peut aussi être défini après ou à la place des blocs catch.
Le code à l'intérieur du bloc finally sera **toujours exécuté** après les blocs try et catch,
indépendamment du fait qu'une exception ait été déclenchée, et avant que l'exécution normale ne reprenne.

    try {
      echo 4/0;
    } catch (Exception $e) {
      echo "Division par zéro !";
    } finally {
      echo "Ceci sera affiché même quand l'exception survient !";
    }


Exercise
--------
Utilisez un bloc try-catch-finally pour tout d'abord intercepter l'exception, et afficher `Exception attrapée !` et enfin afficher `Terminé !`.
Votre affichage final devrait ressembler à :
```
Exception attrapée !
Terminé !
```

Tutorial Code
-------------

<?php
# Cette fonction déclenchera une exception !
function throw_exception() {
  throw new Exception("Exception !");
}

# Encadrez cette instruction par un bloc try-catch-finally !
throw_exception();
?>


Expected Output
---------------
Exception attrapée !
Terminé !

Solution
--------
<?php
# Cette fonction déclenchera une exception !
function throw_exception() {
  throw new Exception("Exception !");
}

# Encadrez cette instruction par un bloc try-catch-finally !
try {
  throw_exception();
} catch (Exception $e) {
  echo "Exception attrapée !\n";
} finally {
  echo "Terminé !";
}
?>
