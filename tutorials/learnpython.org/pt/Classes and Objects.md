Objetos são uma encapsulação de variáveis e funções em uma única entidade. Objetos obtêm suas variáveis e funções a partir de classes. Classes são essencialmente um modelo para criar seus objetos.

Uma classe muito básica se pareceria com isto:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Explicaremos por que você deve incluir "self" como um parâmetro um pouco mais adiante. Primeiro, para atribuir a classe acima (modelo) a um objeto, você faria o seguinte:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Agora a variável "myobjectx" contém um objeto da classe "MyClass" que possui a variável e a função definidas dentro da classe chamada "MyClass".

### Acessando Variáveis do Objeto

Para acessar a variável dentro do objeto recém-criado "myobjectx", você faria o seguinte:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Por exemplo, o código abaixo exibiria a string "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Você pode criar múltiplos objetos diferentes que são da mesma classe (têm as mesmas variáveis e funções definidas). No entanto, cada objeto contém cópias independentes das variáveis definidas na classe. Por exemplo, se fôssemos definir outro objeto com a classe "MyClass" e depois mudar a string na variável acima:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Então imprime ambas as variáveis
    print(myobjectx.variable)
    print(myobjecty.variable)

### Acessando Funções do Objeto

Para acessar uma função dentro de um objeto você usa uma notação similar a de acessar uma variável:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

O código acima imprimiria a mensagem, "This is a message inside the class."

### __init__()

A função `__init__()`, é uma função especial que é chamada quando a classe está sendo iniciada. É usada para atribuir valores em uma classe.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Imprime '7'
    
Exercício
--------

Temos uma classe definida para veículos. Crie dois novos veículos chamados car1 e car2. Defina car1 para ser um conversível vermelho no valor de $60,000.00 com o nome de Fer, e car2 para ser uma van azul chamada Jump no valor de $10,000.00.