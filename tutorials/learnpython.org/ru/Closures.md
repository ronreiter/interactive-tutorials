A Closure - это объект функции, который запоминает значения в окружающих областях действия, даже если они отсутствуют в памяти. Давайте разберемся в этом шаг за шагом.

Во-первых, **Вложенная функция** - это функция, определенная внутри другой функции. Очень важно отметить, что вложенные функции могут получать доступ к переменным окружающей области. Однако, по крайней мере в Python, доступ к этим переменным только для чтения. Однако можно использовать ключевое слово "nonlocal", чтобы явно изменить их.

Например:

    def transmit_to_space(message):
        "Это окружающая функция"
        def data_transmitter():
            "Вложенная функция"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Тестовое сообщение"))

Это работает так как функция 'data_transmitter' может получить доступ к 'message'. Чтобы продемонстрировать использование ключевого слова "nonlocal", рассмотрим следующее

    def print_msg(number):
        def printer():
            "Здесь мы используем ключевое слово nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Без ключевого слова nonlocal вывод был бы "3 9", однако, с его использованием, мы получаем "3 3", то есть значение переменной "number" изменяется.

Теперь, как насчет того, чтобы вернуть объект функции, а не вызывать вложенную функцию внутри. (Помните, что даже функции являются объектами. (Это Python.))

    def transmit_to_space(message):
        "Это окружающая функция"
        def data_transmitter():
            "Вложенная функция"
            print(message)
        return data_transmitter

И вызываем функцию следующим образом:

      def transmit_to_space(message):
        "Это окружающая функция"
        def data_transmitter():
            "Вложенная функция"
            print(message)
        return data_transmitter
        
      fun2 = transmit_to_space("Сожги Солнце!")
      fun2()

Несмотря на завершение выполнения функции "transmit_to_space()", сообщение сохранилось. Этот метод, при котором данные прикрепляются к коду даже после завершения выполнения других исходных функций, называется замыканием (closure) в Python.

ПРЕИМУЩЕСТВО: Замыкания могут избежать использования глобальных переменных и предоставляют некоторую форму скрытия данных. (Например, когда в классе всего несколько методов, используйте замыкания вместо этого).

Также декораторы в Python широко используют замыкания.

Exercise
--------

Сделайте вложенный цикл и замыкание в Python, чтобы создать функции для получения нескольких функций умножения, используя замыкания. То есть, используя замыкания, можно создать функции, создающие функции multiply_with_5() или multiply_with_4() с помощью замыканий.