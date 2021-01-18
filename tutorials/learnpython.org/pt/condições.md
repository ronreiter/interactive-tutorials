Tutorial
--------

Python usa variáveis booleanas para avaliar condições. Os valores booleanos True e False são retornados quando uma expressão é comparada ou avaliada. Por exemplo:

     x = 2
     print(x == 2) # imprime True
     print(x == 3) # imprime False
     print(x <3) # imprime True

Observe que a atribuição de variável é feita usando um único operador igual a "=", enquanto a comparação entre duas variáveis é feita usando o operador duplo igual "==". O operador "não é igual a" é marcado como "! =".

### Operadores booleanos

Os operadores booleanos "and" e "or" permitem a criação de expressões booleanas complexas, por exemplo:

    nome = "John"
    idade = 23
    if nome == "John" and idade == 23:
        print("Seu nome é John e você também tem 23 anos.")

    if nome == "John" or nome == "Rick":
        print("Seu nome é John ou Rick.")

### O operador "in"

O operador "in" pode ser usado para verificar se existe um objeto especificado em um contêiner iterável, como uma lista:

     nome = "John"
     if nome in ["John", "Rick"]:
         print ("Seu nome é John ou Rick.")

Python usa indentação para definir blocos de código, em vez de colchetes. O recuo padrão do Python é de 4 espaços, embora tabulações e qualquer outro tamanho de espaço funcionem, desde que sejam consistentes. Observe que os blocos de código não precisam de terminação.

Aqui está um exemplo para usar a instrução "if" do Python usando blocos de código:

    declaração = False
    outra_declaração = True
    if declaração is True:
        # faça alguma coisa
        pass
    elif outra_declaração is True: # else if
        # faça alguma coisa
        pass
    else:
        # faça alguma coisa
        pass

Por exemplo:

    x = 2
    if x == 2:
        print("x é igual a dois!")
    else:
        print("x não é igual a dois.")

Uma declaração é avaliada como verdadeira se uma das seguintes opções estiver correta:
1. A variável booleana "True" é fornecida ou calculada usando uma expressão, como uma comparação aritmética.
2. Um objeto que não é considerado "vazio" é passado.

Aqui estão alguns exemplos de objetos considerados vazios:
1. Uma sequência vazia: ""
2. Uma lista vazia: []
3. O número zero: 0
4. A variável booleana falsa: False

### O operador 'is'

Ao contrário do operador double equals "==", o operador "is" não corresponde aos valores das variáveis, mas às próprias instâncias. Por exemplo:

     x = [1,2,3]
     y = [1,2,3]
     print(x == y) # Imprime True
     print(x is y) # Imprime False

### O operador "not"

O uso de "not" antes de uma expressão booleana a inverte:

     print (not False) # Imprime True
     print ((not False) == (False)) # Imprime False

Exercício
--------

Altere as variáveis na primeira seção, para que cada instrução if seja resolvida como True.

Tutorial Code
-------------

# change this code
number = 10
second_number = 10
first_array = []
second_array = [1,2,3]

if number > 15:
    print("1")

if first_array:
    print("2")

if len(second_array) == 2:
    print("3")

if len(first_array) + len(second_array) == 5:
    print("4")

if first_array and first_array[0] == 1:
    print("5")

if not second_number:
    print("6")

Expected Output
---------------

test_output_contains("1", no_output_msg= "Did you print out 1 if `number` is greater than 15?")
test_output_contains("2", no_output_msg= "Did you print out 2 if there exists a list `first_array`?")
test_output_contains("3", no_output_msg= "Did you print out 3 if the length of `second_array` is 2?")
test_output_contains("4", no_output_msg= "Did you print out 4 if len(first_array) + len(second_array) == 5?")
test_output_contains("5", no_output_msg= "Did you print out 5 if first_array and first_array[0] == 1?")
test_output_contains("6", no_output_msg= "Did you print out 6 if not second_number?")
success_msg("Great Work!")

Solution
--------

# change this code
number = 16
second_number = 0
first_array = [1,2,3]
second_array = [1,2]

if number > 15:
    print("1")

if first_array:
    print("2")

if len(second_array) == 2:
    print("3")

if len(first_array) + len(second_array) == 5:
    print("4")

if first_array and first_array[0] == 1:
    print("5")

if not second_number:
    print("6")
