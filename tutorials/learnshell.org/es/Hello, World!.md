Tutorial
--------
El tutorial trata sobre la programación de shell en general, centrándose en **Bash** ("Bourne Again Shell") shell como intérprete de shell principal. También se hará referencia a la programación de shell usando otros shells comunes como sh, csh, tcsh, como ellos a veces difieren de bash.

La programación de shell se puede lograr ejecutando directamente los comandos de shell en el prompt de shell o almacenándolos en el orden de ejecución, en un archivo de texto, llamado script de shell, y luego ejecutando el script de shell. Para ejecutar, simplemente escriba el nombre del archivo del script de shell, una vez que el archivo tenga permiso de ejecución (chmod +x nombredelarchivo).

La primera línea del archivo de script de shell comienza con un "sha-bang" (#!) que no se lee como comentario, seguido de la ruta completa donde se encuentra el intérprete de shell. Esta ruta le dice al sistema operativo que este archivo es un conjunto de comandos para ser ejecutado por intérprete indicado. Tenga en cuenta que si la ruta dada en el "sha-bang" es incorrecta, entonces un mensaje de error, por ejemplo, "Comando no encontrado.", puede ser el resultado de la ejecución del script. Es común nombrar el script de shell con la extensión ".sh". La primera línea puede verse así:

**#!/bin/bash**

Agregar comentarios: cualquier texto que sigue al "#" se considera un comentario

Para averiguar cuál es el shell actualmente activo y cuál es su ruta, escriba el comando resaltado en el prompt del shell (a continuación se muestran ejemplos de respuestas):

**ps | grep $$**

987 tty1      00:00:00 bash

Esta respuesta muestra que el shell que está utilizando es del tipo 'bash'. a continuación, descubra la ruta completa del intérprete de shell

**which bash**

/bin/bash

Esta respuesta muestra la ruta de ejecución completa del intérprete de shell. Asegúrese de que la línea "sha-bang" al comienzo de su secuencia de comandos coincida con esta misma ruta de ejecución.

Exercise
-------------
Use el comando "echo" para imprimir la línea "¡Hello, world!".

Tutorial Code
-------------
    #!/bin/bash
    # Text to the right of a '#' is treated as a comment - below is the shell command
    echo 'Goodbye, World!'

Expected Output
---------------
    Hello, World!

Solution
--------
    #!/bin/bash
    # Text to the right of a '#' is treated as a comment - below is the shell command
    echo 'Hello, World!'
