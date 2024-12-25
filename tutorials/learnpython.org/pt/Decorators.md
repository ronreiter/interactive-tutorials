Conteúdos dos Decoradores permitem que você faça modificações simples em objetos invocáveis como [funções](http://www.learnpython.org/en/Functions ""), [métodos ou classes](http://www.learnpython.org/en/Classes%20and%20Objects ""). Vamos lidar com funções neste tutorial. A sintaxe

    @decorator
    def functions(arg):
        return "value"

É equivalente a:

    def function(arg):
        return "value"
    function = decorator(function) # isto passa a função para o decorador e a atribui novamente à função

Como você pode ter visto, um decorador é apenas outra função que recebe uma funções e retorna uma. Por exemplo, você poderia fazer o seguinte:

    def repeater(old_function):
        def new_function(*args, **kwds): # Veja learnpython.org/en/Multiple%20Function%20Arguments para saber como *args e **kwds funcionam
            old_function(*args, **kwds) # executamos a função antiga
            old_function(*args, **kwds) # fazemos isso duas vezes
        return new_function # precisamos retornar a new_function, ou não a reassociaria ao valor

Isso faria uma função repetir duas vezes.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Você também pode fazer com que ela altere a saída

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modifica o valor de retorno
        return new_function

alterar a entrada

    def double_Ii(old_function):
        def new_function(arg): # só funciona se a função antiga tiver um argumento
            return old_function(arg * 2) # modifica o argumento passado
        return new_function

e fazer verificações.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Isto causa um erro, o que é melhor do que fazer algo errado
            old_function(arg)
        return new_function

Digamos que você queira multiplicar a saída por uma quantidade variável. Você poderia definir o decorador e usá-lo da seguinte forma:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # ele retorna o novo gerador

    # Uso
    @multiply(3) # multiply não é um gerador, mas multiply(3) é
    def return_num(num):
        return num
        
    # Agora return_num é decorado e reatribuído nele mesmo
    return_num(5) # deve retornar 15

Você pode fazer qualquer coisa que quiser com a antiga função, até mesmo ignorá-la completamente! Decoradores avançados também podem manipular a string de documentação e o número de argumentos.
Para alguns decoradores interessantes, visite <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercício
--------
Faça uma fábrica de decoradores que retorne um decorador que decore funções com um argumento. A fábrica deve receber um argumento, um tipo, e depois retorna um decorador que faz a função verificar se a entrada é do tipo correto. Se estiver errada, ela deve imprimir("Tipo Incorreto") (Na realidade, deveria levantar um erro, mas levantamento de erros não está neste tutorial). Olhe o código do tutorial e a saída esperada para ver o que é se estiver confuso (Eu também ficaria). Usar isinstance(object, type_of_object) ou type(object) pode ajudar.