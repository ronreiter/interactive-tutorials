Contributing Tutorials
----------------------

Para contribuir con los tutoriales simplemente haz un fork del siguiente repositorio:

[[https://github.com/ronreiter/interactive-tutorials]]

Después puedes agregar o editar tutoriales, y enviármelos haciendo un pull request.

Para crear un tutorial, simplemente crea una página Markdown bajo el directorio relevante en el directorio `tutorials`, y enlázalo en la página principal en su sección relevante. Después de agregarlo, por favor asegúrate de que está enlazado correctamente corriendo el servidor web Flask.

Para enlazar el tutorial que has creado, haz un enlace desde la página en la que lo quieres enlazar (normalmente la página es `Welcome.md`) usando los corchetes.

Cada tutorial consiste en un breve explicación del tema, y un pequeño ejercicio que permitirá al usuario comprobarlo. Una vez que el usuario ha acabado de modificar el código acorde al ejercicio, esté deberá ser ejecutado para imprimir la salida esperada que le proveas.

Cada tutorial debe tener la siguiente estructura:

### Archivo nombre.md

    Tutorial
    --------
    Aquí debes escribir el texto que explique una determinada característica.

    Exercise
    --------
    Aquí necesitarás escribir el propósito del ejercicio. Para completar el ejercicio correctamente debes usar la nueva función que estás explicando.

    Tutorial Code
    -------------
    Escribe un bloque de código que deberá aparecer en la ventana del interpretador. Por ejemplo, puedes escribir una función vacía que el usuario deba completar para finalizar el ejercicio.

    Expected Output
    ---------------
    Escribe un bloque de código que describirá exactamente la salida esperada del código modificado, si se ha modificado correctamente.

    Solution
    --------
    Escribe el código de la solución al problema.
