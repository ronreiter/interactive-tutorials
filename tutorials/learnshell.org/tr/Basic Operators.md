Tutorial
--------
# Aritmetik İşlemler

Basit aritmetik işlemler şu şekilde yapılabilirler: $((expression))

    A=3
    B=$((100 * $A + 5)) # 305

Temel işlemler şunlardır:

**a + b**  toplama (a artı b)

**a - b**  çıkarma (a eksi b)

**a * b**  çarpma (a çarpı b)

**a / b**  bölme (tam sayıları) (a bölü b)

**a % b**  modülo (a'nın b ile bölümünden kalan)

**a** ****** **b** üs alma (a üssü b)

Exercise
--------
Bu ödevde, bir meyve sepetinin toplam ücretini hesaplamalı ve TOPLAM adlı değişkene atamalısınız. Bu emyve tabağı bir ananas, iki muz ve üç karpuz içermektedir. Tabağın maliyetini unutmayınız!

Tutorial Code
-------------
#!/bin/bash
ananasUcreti=50
muzUcreti=4
karpuzUcreti=23
tabakUcreti=1
TOPLAM=
echo "Bir meyve tabağının toplam ücreti $TOPLAM"

Expected Output
---------------
Bir meyve tabağının toplam ücreti 128

Solution
--------
#!/bin/bash
ananasUcreti=50
muzUcreti=4
karpuzUcreti=23
tabakUcreti=1
TOPLAM=$(($COST_PINEAPPLE + $COST_BANANA + $COST_WATERMELON + $COST_BASKET))
echo "Bir meyve tabağının toplam ücreti $TOTAL"
