Tutorial
--------

Introspecção de código é a habilidade de examinar classes, funções e palavras-chave para saber o que elas são, o que elas fazem e o que elas precisam saber.

A linguagem Python fornece várias funções e utilidades para introspecção de código.

    help()
    dir()
    hasattr()
    id()
    type()
    repr()
    callable()
    issubclass()
    isinstance()
    __doc__
    __name__

Código de Tutorial
-------------

##Definir a classe Veículo
class Veículo:
    nome = ""
    tipo = "carro"
    cor = ""
    valor = 100.00
    def descrição(self):
        desc_str = "%s é um %s %s que vale $%.2f." % (self.nome, self.tipo, self.cor, self.value)
        return desc_str

print dir(Veículo)

Saída esperada
---------------

['__doc__', '__module__', 'cor', 'descrição', 'tipo', 'nome', 'valor']

Solução
-------
