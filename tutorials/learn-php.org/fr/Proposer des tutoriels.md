Proposer des tutoriels
----------------------

Pour proposer vos tutoriels, fourchez simplement le référentiel
ci-dessous :

[[https://github.com/ronreiter/interactive-tutorials]]

Vous pourriez ajouter ou modifier des tutoriels, et m'envoyer un
requête pull.

Pour écrire un tutoriel, créez simplement une page Markdown sous le
répertoire adéquat dans le répertoire `tutorials`, et liez-le depuis
l'écran d'accueil dans la section qui convient. Après l'avoir ajouté,
vérifiez qu'il est correctement lié en exécutant le serveur Web Flask.

Pour faire un lien vers le tutoriel que vous avez créé, créez un lien
depuis la page dans laquelle vous voudriez que le lien apparaisse
(d'habitude la page `Welcome.md`) en utilisant des crochets doubles.

Chaque tutoriel consiste en une explication brève du sujet, et un
exercice court qui va évaluer l'utilisateur. Une fois que
l'utilisateur a fini de modifier le code selon les instructions, il
devrait l'exécuter pour afficher la sortie attendue que vous aurez fournie.

Chaque tutoriel doit avoir la structure suivante :

### Nom de fichier.md

    Tutorial
    --------
    Ici, vous pouvez écrire le texte qui explique certaines fonctionnalités.

    Exercise
    --------
    Icin vous devrez écrire l'objectif de l'exercice. Pour pouvoir finir l'exercice
    correctement il faudra utiliser la nouvelle fonctionnalité que
    vous expliquez.

    Tutorial Code
    -------------
    Écrivez un bloc de code qui apparaîtra dans la fenêtre de
    l'interpréteur. Par exemple, vous pourriez écrire une fonction
    vide, que l'utilisateur devrait terminer pour pouvoir terminer l'exercice.

    Expected Output
    ---------------
    Écrivez un bloc ce code qui décrira la sortie exacte attendue du
    code modifié, à condition qu'il ait été modifié correctement.

    Solution
    --------
    Écrivez le code de la solution au problème.

