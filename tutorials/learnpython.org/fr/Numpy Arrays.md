Tutorial
--------

### Démarrage

Les tableaux Numpy sont d'excellentes alternatives aux listes Python. Certains des principaux avantages des tableaux Numpy sont qu'ils sont rapides, faciles à utiliser et donnent aux utilisateurs l'opportunité d'effectuer des calculs sur l'ensemble des tableaux.

Dans l'exemple suivant, vous allez d'abord créer deux listes Python. Ensuite, vous allez importer le package numpy et créer des tableaux numpy à partir des listes fraîchement créées.

	# Création de 2 nouvelles listes height et weight
	height = [1.87,  1.87, 1.82, 1.91, 1.90, 1.85]
	weight = [81.65, 97.52, 95.25, 92.98, 86.18, 88.45]

	# Importation du package numpy sous le nom np
	import numpy as np

	# Création de 2 tableaux numpy à partir de height et weight
	np_height = np.array(height)
	np_weight = np.array(weight)

# Affichage du type de np_height

    print(type(np_height))

### Calculs élément par élément

Nous pouvons maintenant effectuer des calculs élément par élément sur height et weight. Par exemple, vous pouvez prendre les 6 observations de height et weight ci-dessus et calculer l'IMC pour chaque observation avec une seule équation. Ces opérations sont très rapides et efficaces en termes de calcul. Elles sont particulièrement utiles lorsque vous avez des milliers d'observations dans vos données.

<div data-datacamp-exercise data-height="225" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBDYWxjdWxhdGUgYm1pXG5ibWkgPSBucF93ZWlnaHQgLyBucF9oZWlnaHQgKiogMlxuXG4jIFByaW50IHRoZSByZXN1bHRcbnByaW50KGJtaSkiLCJzb2x1dGlvbiI6IiMgQ2FsY3VsYXRlIGJtaVxuYm1pID0gbnBfd2VpZ2h0IC8gbnBfaGVpZ2h0ICoqIDJcblxuIyBQcmludCB0aGUgcmVzdWx0XG5wcmludChibWkpIiwic2N0Ijoic3VjY2Vzc19tc2coXCJHcmVhdCBqb2IhXCIpIn0=
</div>

### Sous-ensemble

Une autre grande fonctionnalité des tableaux Numpy est la capacité à créer des sous-ensembles. Par exemple, si vous voulez savoir quelles observations de notre tableau BMI sont supérieures à 23, nous pourrions rapidement en créer un sous-ensemble pour le découvrir.

<div data-datacamp-exercise data-height="225" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBGb3IgYSBib29sZWFuIHJlc3BvbnNlXG5ibWkgPiAyM1xuXG4jIFByaW50IG9ubHkgdGhvc2Ugb2JzZXJ2YXRpb25zIGFib3ZlIDIzXG5ibWlbYm1pID4gMjNdIiwic29sdXRpb24iOiIjIEZvciBhIGJvb2xlYW4gcmVzcG9uc2VcbmJtaSA+IDIzXG5cbiMgUHJpbnQgb25seSB0aG9zZSBvYnNlcnZhdGlvbnMgYWJvdmUgMjNcbmJtaVtibWkgPiAyM10iLCJzY3QiOiJzdWNjZXNzX21zZyhcIkdyZWF0IGpvYiFcIikifQ==
</div>

Exercise
--------

Tout d'abord, convertissez la liste de poids d'une liste en un tableau Numpy. Ensuite, convertissez tous les poids de kilogrammes en livres. Utilisez la conversion scalaire de 2,2 livres par kilogramme pour effectuer votre conversion. Enfin, affichez le tableau résultant des poids en livres.

<div data-datacamp-exercise data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoid2VpZ2h0X2tnID0gWzgxLjY1LCA5Ny41MiwgOTUuMjUsIDkyLjk4LCA4Ni4xOCwgODguNDVdXG5cbmltcG9ydCBudW1weSBhcyBucFxuXG4jIENyZWF0ZSBhIG51bXB5IGFycmF5IG5wX3dlaWdodF9rZyBmcm9tIHdlaWdodF9rZ1xuICAgIFxuXG4jIENyZWF0ZSBucF93ZWlnaHRfbGJzIGZyb20gbnBfd2VpZ2h0X2tnXG5cbiMgUHJpbnQgb3V0IG5wX3dlaWdodF9sYnMiLCJzb2x1dGlvbiI6IndlaWdodF9rZyA9IFs4MS42NSwgOTcuNTIsIDk1LjI1LCA5Mi45OCwgODYuMTgsIDg4LjQ1XVxuXG5pbXBvcnQgbnVtcHkgYXMgbnBcblxuIyBDcmVhdGUgYSBudW1weSBhcnJheSBucF93ZWlnaHRfa2cgZnJvbSB3ZWlnaHRfa2dcbm5wX3dlaWdodF9rZyA9IG5wLmFycmF5KHdlaWdodF9rZylcblxuIyBDcmVhdGUgbnBfd2VpZ2h0X2xicyBmcm9tIG5wX3dlaWdodF9rZ1xubnBfd2VpZ2h0X2xicyA9IG5wX3dlaWdodF9rZyAqIDIuMlxuXG4jIFByaW50IG91dCBucF93ZWlnaHRfbGJzXG5wcmludChucF93ZWlnaHRfbGJzKSIsInNjdCI6InN1Y2Nlc3NfbXNnKFwiR3JlYXQgam9iIVwiKSJ9
</div>

Tutorial Code
-------------

Expected Output
---------------

Solution
--------