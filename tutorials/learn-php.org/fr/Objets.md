Tutorial
--------

PHP est un langage orienté objets, bien qu'il n'ait pas besoin d'être
utilisé en tant que tel, puisque la plupart des fonctions PHP ne sont
pas orientées objets.

Dans la programmation orientée objets, une `class`e est une définition
d'un objet, alors qu'un `object` est une instance d'un objet, ce qui
signifie qu'à partir d'une classe vous pouvez créer de nombreux objets.

Par exemple, définissions une classe pour un étudiant.

    class Student {
        // constructeur
        public function __construct($first_name, $last_name) {
            $this->first_name = $first_name;
            $this->last_name = $last_name;
        }

        public function say_name() {
            echo "Mon nom est " . $this->first_name . " " . $this->last_name . ".\n";
        }
    }

    $alex = new Student("Alex", "Jones");
    $alex->say_name();

Analysons le code. Remarquez que la classe `Student` a une fonction
constructeur, qui est exécutée quand l'objet est créé. Le constructeur
reçoit des arguments qui sont fournis plus tard quand on construit
l'objet avec le mot-clé `new`.

Après que nous ayons construit l'objet dans ka variable `$alex` nous
pouvons maintenant utiliser les méthodes de l'objet.

Nous avons implémenté une méthode d'objet `say_name`, qui affiche le
nom de l'étudiant. Remarquez que la fonction
`say_name` ne reçoit pas d'arguments, mais elle a accès aux nom et
prénom de l'étudiant, parce qu'ils ont été précédamment définis dans
le constructeur.

Voici quelques définitions importantes liées aux objets :

* **Classes** définissent comment les objets se comportent. Les
  classes ne contiennent pas de données.
* **Objets** sont des instances des classes, qui contiennent les données.
* **Membres** sont des variables qui appartiennent à un objet.
* **Méthodes** sont les fonctions qui appartiennent à un objet, et ont
  accès à ses membres.
* **Constructeur** est une méthode spéciale qui est exécutée quand un
  objet est créé.

### Héritage

La fonctionnalité la plus importante de la programmation orientée
objets est l'héritage. Cette fonctionnalité nous permet de réutiliser
le code que nous avons écrit et de l'étendre. Par exemple, disons que
nos souhaitons définir un étudiant en maths, qui sait également
comment additionner deux nombres.

    class Student {
        // constructeur
        public function __construct($first_name, $last_name) {
            $this->first_name = $first_name;
            $this->last_name = $last_name;
        }

        public function say_name() {
            echo "Mon nom est " . $this->first_name . " " . $this->last_name . ".\n";
        }
    }

    $alex = new Student("Alex", "Jones");
    $alex->say_name();

    class MathStudent extends Student {
        function sum_numbers($first_number, $second_number) {
            $sum = $first_number + $second_number;
            echo $this->first_name . " dit que " . $first_number . " + " . $second_number . " est " . $sum;
        }
    }

    $eric = new MathStudent("Éric", "Chang");
    $eric->say_name();
    $eric->sum_numbers(3, 5);

Remarques que l'objet d'Éric dispose aussi du même constructeur et de
la fonction `say_name`, en plus de la nouvelle méthode appelée
`sum_numbers`, qui permet à Éric de calculer la somme de deux
nombres. Remarques aussi que la nouvelle fonction a accès aux mêmes
membres que nous avons déjà définis dans la classe Student (`first_name`, `last_name`).

### Fonctions publiques et privées

Nous pouvons utiliser les modifieurs `public` et `private`
respectivement pour définir des fonctions auxquelles on peut accéder
depuis l'extérieur de l'objet ou non, pour des besoins
d'encapsulation. Ceci permet de mieux définir comment les objets
devraient être utilisés, pour distinguer entre les fonctions qui sont
utilisées pour des besoins internes, ou a l'inverse pour une interface externe.

    class Student {
        // le constructeur devrait être public
        public function __construct($first_name, $last_name) {
            $this->first_name = $first_name;
            $this->last_name = $last_name;
        }

        // pour utilisation externe
        public function say_name() {
            echo "Mon nom est " . $this->full_name() . "\n";
        }

        // pour utilisation interne
        private function full_name() {
            return $this->first_name . " " . $this->last_name;
        }
    }

    $alex = new Student("Alex", "Jones");

    $alex->say_name();

    // ceci ne marchera pas
    // echo $alex->full_name();

Exercise
--------

Créez une classe appelée Car (voiture) avec un constructeur qui reçoit la marque
et l'année de fabrication de la voiture, et une fonction appelée
`print_details` qui affiche les détails de la voiture.

Par exemple, pour une voiture Toyota de 2006, la ligne suivante serait
affichée :

`Cette voiture est une Toyota de 2006.`

Tutorial Code
-------------

<?php
// TODO: Implémentez la classe Car ici

$car = new Car("Toyota", 2006);
$car->print_details();

Expected Output
---------------

Cette voiture est une Toyota de 2006.

Solution
--------

<?php
class Car {
    public function __construct($brand, $year) {
        $this->brand = $brand;
        $this->year = $year;
    }

    public function print_details() {
        echo "Cette voiture est une " . $this->brand . " de " . $this->year . ".\n";
    }
}

$car = new Car("Toyota", 2006);
$car->print_details();
