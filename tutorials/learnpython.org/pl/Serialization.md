Python udostępnia wbudowane biblioteki JSON do kodowania i dekodowania JSON.

W Pythonie 2.5 używany jest moduł simplejson, natomiast w Pythonie 2.7 używany jest moduł json. Ponieważ ten interpreter używa Pythona 2.7, będziemy używać json.

Aby użyć modułu json, należy go najpierw zaimportować:

    import json

Istnieją dwa podstawowe formaty danych JSON. Albo w formie ciągu, albo struktury danych obiektowych. Struktura danych obiektowych w Pythonie składa się z list i słowników zagnieżdżonych w sobie nawzajem. Struktura danych obiektowych pozwala na korzystanie z metod Pythona (dla list i słowników) do dodawania, wyliczania, wyszukiwania i usuwania elementów ze struktury danych. Format String jest głównie używany do przekazywania danych do innego programu lub ładowania do struktury danych.

Aby załadować JSON z powrotem do struktury danych, użyj metody "loads". Ta metoda przyjmuje ciąg i zamienia go z powrotem na strukturę danych obiektowych JSON:

    import json 
    print(json.loads(json_string))

Aby zakodować strukturę danych do JSON, użyj metody "dumps". Ta metoda przyjmuje obiekt i zwraca ciąg:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python obsługuje własnościową metodę serializacji danych Pythona o nazwie pickle (oraz szybszą alternatywę zwaną cPickle).

Możesz go używać dokładnie w ten sam sposób.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Celem tego ćwiczenia jest wydrukowanie ciągu JSON z dodaną parą klucz-wartość "Me" : 800.