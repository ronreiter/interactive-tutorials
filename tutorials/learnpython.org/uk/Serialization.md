Python надає вбудовані бібліотеки для роботи з JSON для кодування та декодування JSON.

У Python 2.5 використовується модуль simplejson, тоді як у Python 2.7 використовується модуль json. Оскільки цей інтерпретатор використовує Python 2.7, ми будемо використовувати модуль json.

Для того, щоб використовувати модуль json, його спочатку потрібно імпортувати:

    import json

Існує два основні формати для даних у JSON. Або у вигляді рядка, або як об'єктна структура даних. Об'єктна структура даних у Python складається зі списків і словників, вкладених один в одного. Об'єктна структура даних дозволяє використовувати методи Python (для списків і словників) для додавання, переліку, пошуку та видалення елементів зі структури даних. Рядковий формат в основному використовують для передачі даних в іншу програму або завантаження в структуру даних.

Щоб завантажити JSON назад в структуру даних, використовуйте метод "loads". Цей метод бере рядок і перетворює його назад у об'єктну структуру JSON:

    import json 
    print(json.loads(json_string))

Для кодування структури даних у JSON використовуйте метод "dumps". Цей метод бере об'єкт і повертає рядок:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python підтримує власний метод серіалізації даних під назвою pickle (та швидшу альтернативу під назвою cPickle).

Ви можете використовувати його точно так само.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Мета цієї вправи полягає в тому, щоб вивести рядок JSON із доданою парою ключ-значення "Me" : 800.