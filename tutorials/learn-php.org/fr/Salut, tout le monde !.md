Tutorial
--------

PHP est le langage de programmation le plus couramment utilisé pour le
Web aujourd'hui. PHP est très courant parcequ'il a une architecture
relativement simple comparé à d'autres frameworks Web basé MVC
(Python, Ruby, node.js, etc).

À la différence d'autres frameworks Web standards, un fichier PHP est
en fait un fichier HTML "amélioréé, qui est aussi capable d'exécuter
du code au sein d'un document. Ainsi, vous pouvez commencer par
exemple avec une simple page HTML qui ressemble à ceci :

    <html>
    <head></head>
    <body>
    Salut !
    <?php ?>
    </body>
    </html>

Ensuite, vous ajoutez une section PHP qui exécute du code PHP, et
écrit le résultat sous forme d'HTML. Remarquez que la ligne PHP
disparaît quand on l'exécute, puisque le code PHP est remplacé par son
résultat.

Essayons d'ajouter le nom de l'utilisateur.

    <?php $user = "Jean"; ?>
    <html>
    <head></head>
    <body>
    Salut <?php echo $user; ?> !
    </body>
    </html>

Par contre, dans ce tutoriel, nous nous concentrerons sur
l'apprentissage de PHP comme langage de programmation et non sur le
développement Web. Ainsi, nous n'utiliserons pas du tout HTML, et nous
concentrons sur l'écriture de code plutôt que le rendu de pages Web.

Dans nos tutoriels, nous ouvrirons et fermerons toujours une balise
PHP (commençant par `<?php` et se terminant par `?>`) au début et à la
fin de notre code.

Pour tester notre code, nous pouvons afficher des messages sur notre
console en utilisant la commande `echo`.

Exercise
--------

Afficher "Salut, tout le monde !" sur la console.

Tutorial Code
-------------

<?php
echo "Au-revoir, tout le monde !";
?>

Expected Output
---------------

Salut, tout le monde !

Solution
--------

<?php
echo "Salut, tout le monde !";
?>
