Tutorial
--------
Diziler, birden fazla değer tutabilen değişkenlerdir. Herhangi bir değişken, dizi olarak kullanılabilir. Dizilerin alabileceği maksimum değer sayısı veya almaları gereken minimum değer sayısı yoktur. Dizilerin ilk elemanları sıfırıncı elemanıdır.

	# Basit şekilde yapıları:
	# dizi=(deger1 deger2 ... degerN)
	dizi=(23 45 34 1 2 3)
	# Belirli bir değeri çekmek için (örneğin üçüncü değer):
	echo ${dizi[2]}

	# Dizideki tüm değerleri çekmek için:
	echo ${dizi[@]}

	# Dizideki eleman sayısını çekmek için:
	echo ${#dizi[@]}

Ödev
--------
Bu ödevde, üç farklı dizideki elemanları kıyaslamalı ve bu üç dizideki ortak elemanı yazdırmalısınız. Not: Soruyu çözebilmek için [[Karar Verme]] ve [[Döngüler]] sayfalarını okumanız gerekmektedir.

`a=(3 5 8 10 6)`,`b=(6 5 4 12)`,`c=(14 7 5 7)`
Bu üç dizideki ortak eleman 5.

Tutorial Code
-------------
	#!/bin/bash
	# Dizileri karşılaştıracağınız kodunuzu buraya giriniz:


Expected Output
---------------
	5

Solution
--------
	#!/bin/bash
	# enter your array comparison code here
  
	# Dizi tanımlaması
  a=(3 5 8 10 6)
  b=(6 5 4 12)
  c=(14 7 5 7)

  # Dizilerin karşılaştırılması
  for index in ${a[@]}; do
  	for jindex in ${b[@]}; do
  		for kindex in ${c[@]}; do
  			if [ $index -eq $jindex ]; then
  				if [ $index -eq $kindex ]; then
  					echo $index;
  				fi
  			fi
  		done
  	done
  done
