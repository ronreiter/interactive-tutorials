Tutorial
--------

### Empezando

Los arrays Numpy son una excelente alternativa a las listas de Python. Algunas de las ventajas clave de los arrays Numpy es que son rápidos, faciles de trabajar con ellos, y ofrece a los usuarios la oportunidad de realizar cálculos a través de arrays completos.

En el siguiente ejemplo, primero crearás dos listas Python. Luego, importarás el paquete numpy y crearás un array numpy de cada lista recien creada.

	# Crear dos nuevas listas, height and weight
	height = [1.87,  1.87, 1.82, 1.91, 1.90, 1.85]
	weight = [81.65, 97.52, 95.25, 92.98, 86.18, 88.45]

	# Importar el paquete numpy como np
	import numpy as np

	# Crear 2 array numpy desde height y weight
	np_height = np.array(height)
	np_weight = np.array(weight)

# Imprimir el tipo de np_altura
print(type(np_altura))

### Cálculos de elementos

Ahora podemos hacer cálculos de elementos en height y weight. Por ejemplo, podrías coger las seis observaciones de altura y peso anteriores, y calcular el BMI para cada observación con una única ecuación. Estás operaciones son muy rápidas y computacionalmente eficientes. Son particularmente útiles cuando tienes 1000s de observaciones en tus datos.

<div data-datacamp-exercise data-height="225" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBDYWxjdWxhdGUgYm1pXG5ibWkgPSBucF93ZWlnaHQgLyBucF9oZWlnaHQgKiogMlxuXG4jIFByaW50IHRoZSByZXN1bHRcbnByaW50KGJtaSkiLCJzb2x1dGlvbiI6IiMgQ2FsY3VsYXRlIGJtaVxuYm1pID0gbnBfd2VpZ2h0IC8gbnBfaGVpZ2h0ICoqIDJcblxuIyBQcmludCB0aGUgcmVzdWx0XG5wcmludChibWkpIiwic2N0Ijoic3VjY2Vzc19tc2coXCJHcmVhdCBqb2IhXCIpIn0=
</div>

### Subconjunto

Otra gran característica de los arrays Numby es la habilidad de crear subconjuntos. Por ejemplo, si quieres saber que observaciones de nuestro array BMI están por encima de 23, podemos hacer un subconjunto rapidamente para buscarlos.

<div data-datacamp-exercise data-height="225" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBGb3IgYSBib29sZWFuIHJlc3BvbnNlXG5ibWkgPiAyM1xuXG4jIFByaW50IG9ubHkgdGhvc2Ugb2JzZXJ2YXRpb25zIGFib3ZlIDIzXG5ibWlbYm1pID4gMjNdIiwic29sdXRpb24iOiIjIEZvciBhIGJvb2xlYW4gcmVzcG9uc2VcbmJtaSA+IDIzXG5cbiMgUHJpbnQgb25seSB0aG9zZSBvYnNlcnZhdGlvbnMgYWJvdmUgMjNcbmJtaVtibWkgPiAyM10iLCJzY3QiOiJzdWNjZXNzX21zZyhcIkdyZWF0IGpvYiFcIikifQ==
</div>

Exercise
--------

Primero, convierte la lista de pesos de una lista a un array Numpy. Luego, convierte todos los pesos de kilogramos a libras. Usa la conversión escalar de 2.2 libras por kilogramo para hacer la conversión. Finalmente, imprime el array resultante de pesos en libras.

<div data-datacamp-exercise data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoid2VpZ2h0X2tnID0gWzgxLjY1LCA5Ny41MiwgOTUuMjUsIDkyLjk4LCA4Ni4xOCwgODguNDVdXG5cbmltcG9ydCBudW1weSBhcyBucFxuXG4jIENyZWF0ZSBhIG51bXB5IGFycmF5IG5wX3dlaWdodF9rZyBmcm9tIHdlaWdodF9rZ1xuICAgIFxuXG4jIENyZWF0ZSBucF93ZWlnaHRfbGJzIGZyb20gbnBfd2VpZ2h0X2tnXG5cbiMgUHJpbnQgb3V0IG5wX3dlaWdodF9sYnMiLCJzb2x1dGlvbiI6IndlaWdodF9rZyA9IFs4MS42NSwgOTcuNTIsIDk1LjI1LCA5Mi45OCwgODYuMTgsIDg4LjQ1XVxuXG5pbXBvcnQgbnVtcHkgYXMgbnBcblxuIyBDcmVhdGUgYSBudW1weSBhcnJheSBucF93ZWlnaHRfa2cgZnJvbSB3ZWlnaHRfa2dcbm5wX3dlaWdodF9rZyA9IG5wLmFycmF5KHdlaWdodF9rZylcblxuIyBDcmVhdGUgbnBfd2VpZ2h0X2xicyBmcm9tIG5wX3dlaWdodF9rZ1xubnBfd2VpZ2h0X2xicyA9IG5wX3dlaWdodF9rZyAqIDIuMlxuXG4jIFByaW50IG91dCBucF93ZWlnaHRfbGJzXG5wcmludChucF93ZWlnaHRfbGJzKSIsInNjdCI6InN1Y2Nlc3NfbXNnKFwiR3JlYXQgam9iIVwiKSJ9
</div>

Tutorial Code
-------------

Expected Output
---------------

Solution
--------
