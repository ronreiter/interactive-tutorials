Tutorial
-----------------
 
Objetos são uma encapsulação de variáveis em uma única entidade. Os objetos conseguem suas variáveis e funções de classes. Classes são, essencialmente um modelo para criar seus projetos.

Uma classe bem básica é mais ou menos assim:
    class MinhaClasse:
        variável = "blá"

        def função(self):
            print "Isso é uma mensagem dentro da classe."

Nós vamos explicar pra que você precisa incluir aquele "self" como parâmetro depois. Primeiro, para atribuir a classe(modelo) acima a um objeto Você faria o seguinte:

    meuobjetox = MinhaClasse()

Agora a variável "meuobjetox" segura um objeto da classe "MinhaClasse"que contém a variável e a função definida na classe "MinhaClasse".

### Acessando Variáveis de Objeto

Para acessar a variável dentro do novo objeto "MeuObjeto" Você faria o seguinte:

    meuobjetox.variável

Então o exemplo abaixo mostraria "blá":

    print meuobjetox.variável

Você pode criar múltiplos diferentes objetos que são da mesma classe(possuem as mesmas variáveis e funções definidas). No entanto, cada objeto contém cópias independented das variáveis definidas na classe. Por exemplo, se formos definir outro objeto com a classe "MinhaClasse" e mudar a string na variável acima:

    meuobjetoy = MinhaClasse()
    meuobjetoy.variável = "eca"

E então mostrar ambos valores:

    print meuobjetox.variável   # Isso mostaria "blá".
    print meuobjetoy.variável   # Isso mostraria "eca".

### Acessando Funções de Objeto

Para acessar a função dentro de um objeto Você usa uma notação similar à acessar uma variável:

    meuobjetox.função()

O exemplo acima mostraria a mensagem: "Isso é uma mensagem dentro da classe."


Exercício
---------

Nós possuímos uma classe definida para veículos. Crie dois novos veículos chamados carro1 e carro2.
Configure carro1 para um conversível vermelho que custa $60,000 com o nome Fer,
e carro2 para uma van azul que custa $10,000 chamada Jump.

Código do Tutorial
------------------

# definir a classe veículo
class Veículo:
    nome = ""
    tipo = "carro"
    cor = ""
    valor = 100.00
    def descrição(self):
        desc_str = "%s é um(a) %s %s que vale $%.2f." % (self.nome, self.tipo, self.cor, self.valor)
        return desc_str
# seu código vai aqui

# código teste
print carro1.descrição()
print carro2.descrição()

Saída esperada
--------------
Fer é um conversível vermelho que vale $60000.00.
Jump é uma van azul que vale $10000.00.

Solução
-------

# definindo a classe veículo
class Veículo:
    nome = ""
    tipo = "carro"
    cor = ""
    valor = 100.00
    def descrição(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.nome, self.tipo, self.cor, self.valor)
        return desc_str

# seu código vai aqui
carro1 = Veículo()
carro1.nome = "Fer"
carro1.cor = "vermelho"
carro1.tipo = "conversível"
carro1.valor = 60000.00

carro2 = Veículo()
carro2.nome = "Jump"
carro2.cor = "azul"
carro2.tipo = "van"
carro2.valor = 10000.00

# test code
print carro1.descrição()
print carro2.descrição()
