Um Closure é um objeto de função que lembra dos valores nos escopos envolventes, mesmo que eles não estejam presentes na memória. Vamos entender isso passo a passo.

Primeiramente, uma **Função Aninhada** é uma função definida dentro de outra função. É muito importante notar que as funções aninhadas podem acessar as variáveis do escopo que as envolve. No entanto, pelo menos em Python, elas são apenas de leitura. No entanto, pode-se usar explicitamente a palavra-chave "nonlocal" com essas variáveis para modificá-las.

Por exemplo:

    def transmitir_para_o_espaco(mensagem):
        "Esta é a função do escopo envolvente"
        def transmissor_dados():
            "A função aninhada"
            print(mensagem)
    
        transmissor_dados()
    
    print(transmitir_para_o_espaco("Mensagem de teste"))

Isso funciona bem, pois a função 'transmissor_dados' pode acessar a 'mensagem'. Para demonstrar o uso da palavra-chave "nonlocal", considere isto:

    def imprimir_msg(numero):
        def impressora():
            "Aqui estamos usando a palavra-chave nonlocal"
            nonlocal numero
            numero = 3
            print(numero)
        impressora()
        print(numero)
    
    imprimir_msg(9)

Sem a palavra-chave nonlocal, a saída seria "3 9", no entanto, com seu uso, obtemos "3 3", ou seja, o valor da variável "numero" é modificado.

Agora, que tal retornarmos o objeto da função em vez de chamar a função aninhada internamente? (Lembre-se que até mesmo funções são objetos. (É Python.))

    def transmitir_para_o_espaco(mensagem):
        "Esta é a função do escopo envolvente"
        def transmissor_dados():
            "A função aninhada"
            print(mensagem)
        return transmissor_dados

E chamamos a função da seguinte forma:

    def transmitir_para_o_espaco(mensagem):
        "Esta é a função do escopo envolvente"
        def transmissor_dados():
            "A função aninhada"
            print(mensagem)
        return transmissor_dados
        
  	  fun2 = transmitir_para_o_espaco("Queime o Sol!")
  	  fun2()

Embora a execução do "transmitir_para_o_espaco()" tenha sido concluída, a mensagem foi preservada. Essa técnica pela qual os dados são anexados a algum código mesmo após o término de outras funções originais é chamada de closures em Python.

VANTAGEM: Closures podem evitar o uso de variáveis globais e proporcionam uma forma de ocultação de dados. (Exemplo: Quando há poucos métodos em uma classe, use closures em vez disso).

Além disso, Decoradores em Python fazem uso extensivo de closures.

Exercício
--------

Faça um loop aninhado e um closure Python para criar funções que consigam várias funções de multiplicação usando closures. Isto é, usando closures, você pode criar funções como multiplica_por_5() ou multiplica_por_4() utilizando closures.