Tutorial
--------

Listas são bem parecidas com "arrays". Elas podem conter qualquer tipo de variáveis, e quantas você quiser. Listas também podem ser iteradas de um modo simples. Aqui está um exemplo de como criar uma lista.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

Acessar um index que não existe em uma lista irá gerar uma exceção(um erro).

    mylist = [1,2,3]
    print(mylist[10])

Exercício
--------

Neste exercício você terá que adicionar números e "strings" nas listas corretas utilizando o método "append" da lista. Você deve adicionar os número 1, 2 e 3 na lista "numbers", e as palavras 'hello' e 'world' na lista "strings".

Você também terá que preencher a variável second_name com o segundo nome contido na lista "names", usando o operador `[]`. Note que o index é iniciado em zero, por exemplo, se quiser acessar o segundo item da lista, terá que usar o index 1.

Tutorial Code
-------------
numbers = []  
strings = []  
names = ["John", "Eric", "Jessica"]  

# Escreva seu código aqui
second_name = None  


# Esse código deve printar as arrays preenchidas e o segundo nome da lista names (Eric).
print(numbers)  
print(strings)  
print("O segundo nome na lista names é %s" % second_name)  

Expected Output
---------------

test_output_contains("[1,2,3]", no_output_msg= "Make sure that you have printed the `numbers` list.")  
test_output_contains("['hello', 'world']", no_output_msg= "Make sure that you have printed the `strings` list.")  
test_output_contains("The second name on the names list is Eric", no_output_msg= "Did you fill in the variable `second_name` with the second name in the names list?")  
success_msg("Great Job!")  

Solution
--------

numbers = []  
strings = []  
names = ["John", "Eric", "Jessica"]  

numbers.append(1)  
numbers.append(2)  
numbers.append(3)  

strings.append("hello")  
strings.append("world")  

second_name = names[1]  
