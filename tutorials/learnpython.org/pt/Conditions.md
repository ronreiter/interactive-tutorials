Python usa lógica booleana para avaliar condições. Os valores booleanos True e False são retornados quando uma expressão é comparada ou avaliada. Por exemplo:

x = 2
print(x == 2) # imprime True
print(x == 3) # imprime False
print(x < 3) # imprime True

Note que a atribuição de variáveis é feita usando um único operador de igual "=", enquanto a comparação entre duas variáveis é feita usando o operador de igual duplo "==". O operador "diferente de" é marcado como "!=".

### Operadores Booleanos

Os operadores booleanos "and" e "or" permitem a construção de expressões booleanas complexas, por exemplo:

name = "John"
age = 23
if name == "John" and age == 23:
    print("Seu nome é John, e você também tem 23 anos.")

if name == "John" or name == "Rick":
    print("Seu nome é John ou Rick.")

### O operador "in"

O operador "in" pode ser usado para verificar se um objeto especificado existe dentro de um contêiner de objetos iteráveis, como uma lista:

name = "John"
if name in ["John", "Rick"]:
    print("Seu nome é John ou Rick.")

Python usa indentação para definir blocos de código, em vez de chaves. A indentação padrão do Python é de 4 espaços, embora tabulações e qualquer outro tamanho de espaço funcionem, desde que sejam consistentes. Note que os blocos de código não precisam de nenhuma terminação.

Aqui está um exemplo de uso da instrução "if" do Python usando blocos de código:

statement = False
another_statement = True
if statement is True:
    # faça algo
    pass
elif another_statement is True: # else if
    # faça outra coisa
    pass
else:
    # faça outra coisa
    pass

Por exemplo:

x = 2
if x == 2:
    print("x é igual a dois!")
else:
    print("x não é igual a dois.")

Uma afirmação é avaliada como verdadeira se uma das seguintes for correta:
1. A variável booleana "True" for dada, ou calculada usando uma expressão, como uma comparação aritmética.
2. Um objeto que não é considerado "vazio" é passado.

Aqui estão alguns exemplos de objetos considerados vazios:
1. Uma string vazia: ""
2. Uma lista vazia: []
3. O número zero: 0
4. A variável booleana falsa: False

### O operador 'is'

Diferente do operador de igual duplo "==", o operador "is" não compara os valores das variáveis, mas as instâncias em si. Por exemplo:

x = [1,2,3]
y = [1,2,3]
print(x == y) # Imprime True
print(x is y) # Imprime False

### O operador "not"

Usar "not" antes de uma expressão booleana a inverte:

print(not False) # Imprime True
print((not False) == (False)) # Imprime False

Exercício
--------

Altere as variáveis na primeira seção, de modo que cada instrução if se resolva como True.