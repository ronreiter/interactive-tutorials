### ¿Qué es un CSV?

CSV significa 'Valores Separados por Comas'. El formato CSV es el formato de importación y exportación más común para bases de datos y hojas de cálculo. Un archivo CSV es un archivo de texto simple que contiene una lista de datos. Generalmente, utilizan el carácter coma (,) para delimitar los datos, pero a veces utilizan otros caracteres, como punto y coma o tabulaciones.

Ejemplo de datos CSV:

...
nombre de la columna 1, nombre de la columna 2, nombre de la columna 3
datos de la primera fila 1, datos de la primera fila 2, datos de la primera fila 3
datos de la segunda fila 1, datos de la segunda fila 2, datos de la segunda fila 3
...

### Módulo CSV en Python

Aunque Python tiene la función incorporada open() para trabajar con archivos CSV o cualquier otro archivo de texto plano, existe un módulo csv dedicado que implementa clases para leer y escribir datos en formato csv, lo que facilita mucho más trabajar con archivos CSV.

### Funciones importantes del módulo CSV

    csv.field_size_limit – devuelve el tamaño máximo de campo
    csv.get_dialect – obtiene el dialecto asociado con el nombre
    csv.list_dialects – muestra todos los dialectos registrados
    csv.reader – lee datos de un archivo csv
    csv.register_dialect - asocia el dialecto con el nombre
    csv.writer – escribe datos en un archivo csv
    csv.unregister_dialect - elimina el dialecto asociado con el nombre del registro de dialectos
    csv.QUOTE_ALL - Cita todo, independientemente del tipo.
    csv.QUOTE_MINIMAL - Cita campos con caracteres especiales
    csv.QUOTE_NONNUMERIC - Cita todos los campos que no son valores numéricos
    csv.QUOTE_NONE – No cita nada en la salida

### ¿Cómo usar el módulo csv?

primero importa el módulo csv en tu programa de python.

    import csv

Las funciones de escritura y lectura te permiten editar, modificar y transformar los datos en un archivo CSV.

Cómo leer un archivo CSV:

Para leer datos de archivos CSV, usamos la función reader para generar un objeto reader.

Por ejemplo:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Aquí, primero abrimos el archivo CSV en modo de LECTURA y nombramos el objeto del archivo como csvfile. Usamos el administrador de contexto para abrir el archivo de modo que no tengamos que preocuparnos por cerrar el archivo. La función csv.reader toma el objeto de archivo como entrada y devuelve un objeto iterable. Guardamos el objeto iterable como csvreader.

Como sabemos, csvreader es un objeto iterable y, por tanto, podemos iterar usando un bucle for:

ejemplo 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

El código anterior imprimirá todas las filas que leamos del archivo csv. Por favor, note que abrimos el archivo con el modo 'r' cuando ya existe.

¿Qué sigue?

cvreader es un objeto iterable. Por lo tanto, el método .next() devuelve la fila actual y avanza el iterador a la siguiente fila.

ejemplo 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

En el ejemplo 1, verías todas las filas impresas en la consola junto con el encabezado. En el ejemplo 2, el método .next() lee el encabezado en el objeto fields y avanza el iterador a la siguiente fila y, por lo tanto, todas las filas se imprimen excepto el encabezado.

Cómo escribir en un archivo CSV:

Para escribir en un archivo CSV, el módulo csv proporciona la función csv.writer. Para escribir datos, primero abrimos el archivo CSV en modo de ESCRITURA ('w'). El objeto del archivo se denomina csvfile. Guardamos el objeto csv.writer como csvwriter.

Ejemplo:
    #declarar encabezado
    fields = ['column1','column2', 'column3']

    #declarar filas
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

En el ejemplo anterior, la función writerow() escribirá una sola fila que es el objeto fields, mientras que el método writerows() escribirá toda la lista de filas definidas anteriormente en el archivo csv.

Ahora vamos un paso más allá. Lee el contenido de un archivo csv y escribe en otro archivo csv.

Ejemplo:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # almacena los encabezados y avanza el puntero del lector
            csvwriter.writerow(header) #escribe el encabezado en el nuevo archivo
            for row in reader:
                csvwriter.writerow(row)

Aquí, estamos abriendo 'newfilename.csv' en modo 'W' como f2 y abriendo 'mycsvfile.csv' en modo 'r' como f1. Estamos haciendo uso de las funciones .next(), .reader(), .writer(), .writerow() del módulo csv. Usando .next(), avanzamos el puntero del lector y usando csvwriter.writerow() escribimos cada fila que llega una a la vez.

### Clases DictReader y DictWriter en Python

A continuación se encuentran dos clases importantes en Python para leer y escribir archivos csv.

Clase csv.Dictwriter
Clase csv.DictReader

Los DictReader y DictWriter son clases disponibles en Python para leer y escribir en CSV. Aunque son similares a las funciones de lectura y escritura, estas clases usan objetos de diccionario para leer y escribir en archivos csv.

DictReader:

Crea un objeto que mapea la información leída en un diccionario cuyas claves son dadas por el parámetro fieldnames. Este parámetro es opcional, pero cuando no se especifica en el archivo, los datos de la primera fila se convierten en las claves del diccionario.

Ejemplo csv(info.csv)

.....
nombre, apellido
foo, bar
foo1, bar1
.....

Ejemplo:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

La clase csv.DictWriter opera como un escritor normal pero mapea diccionarios de Python en filas CSV. El parámetro fieldnames es una secuencia de claves que identifica el orden en el que los valores en el diccionario pasados al método writerow() se escriben en el archivo CSV. La clase se define como csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Ejemplo:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Ejercicio
--------

En este ejercicio, trabajarás con datos CSV. Tu tarea es crear un programa en Python que lea datos de un archivo CSV y los escriba en otro archivo CSV, asegurándote de que solo se incluyan en el archivo de salida las filas donde el valor en la primera columna es mayor a 50.