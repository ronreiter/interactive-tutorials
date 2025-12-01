Tutorial
--------

O JavaScript incorpora heranças com base em protótipos. Cada objeto tem seu próprio "`prototype`", e quando um método de um objeto é chamado, o JavaScript tenta encontrar o método correto a se executar do objeto prototype.

### O Atributo "`Prototype`"

Sem usar o objeto "`prototype`", podemos definir a classe `Pessoa` desta forma:

    function Pessoa(nome, idade) {
        this.nome = nome;
        this.idade = idade;

        function descrever() {
            return this.nome + ", de " + this.idade + " anos.";
        }
    }

Ao criar instâncias da classe `Pessoa`, criamos cópias de todos os atributos e métodos presentes nela para os objetos instanciados. Isso significa que cada instância da classe possuirá seus próprios atributos `nome` e `idade`, bem como sua própria função `descrever`.

No entanto, se usarmos o objeto "`Pessoa.prototype`" e manipulá-lo, funcionará da mesma forma.

    function Pessoa(nome, idade) {
        this.nome = nome;
        this.idade = idade;
    }

    Pessoa.prototype.descrever = function() {
        return this.nome + ", de " + this.idade + " anos.";
    }

Ao criar instâncias da classe `Pessoa`, elas não carregarão consigo uma cópia do método `descrever`. No entanto, quando esse método lhes for chamado, o JavaScript tentará, num primeiro momento, ativar a função `descrever` delas próprias, e só então vasculhar o seu objeto "`prototype`".

### Herança

Suponhamos que queiramos criar um objeto `Pessoa` e outro objeto, `Estudante`, que seja derivado dele.

    var Pessoa = function() {};
 
    Pessoa.prototype.inicializar = function(nome, idade) {
        this.nome = nome;
        this.idade = idade;
    }

    Pessoa.prototype.descrever = function() {
        return this.nome + ", " + this.idade + " years old.";
    }

    var Estudante = function() {};
    Estudante.prototype = new Pessoa();

    Estudante.prototype.aprender = function(subject) {
        console.log(this.nome + " acabou de aprender " + subject + ".");
    }

    var literalmenteEu = new Estudante();

    literalmenteEu.inicializar("John", 25);
    literalmenteEu.aprender("Inheritance");

Como podemos ver no exemplo, já que o método `inicializar` pertence à classe `Pessoa` e o `aprender` à `Estudante`, ambos são parte do objeto `literalmenteEu` por transitividade, pois um estudante é, via de regra, uma pessoa.

Não esqueça de que há várias maneiras de se trabalhar com herança no JavaScript, elucidamos apenas uma delas.

Exercise
--------

Crie uma classe chamada "`Teacher`" que seja herdeiro da classe "`Person`" e implemente nele o método `teach`, que receberá a string `subject` como parâmetro e exibirá a seguinte string formatada:

    `${this.name} is now teaching ${subject}.`

Tutorial Code
-------------

var Person = function() {};

Person.prototype.initialize = function(name, age) {
    this.name = name;
    this.age = age;
}

// TODO: create the class Teacher and a method teach

var him = new Teacher();

him.initialize("Adam", 45);
him.teach("Inheritance");

Expected Output
---------------

Adam is now teaching Inheritance.

Solution
--------

var Person = function() {};

Person.prototype.initialize = function(name, age) {
    this.name = name;
    this.age = age;
}

// TODO: create the class Teacher and a method teach
var Teacher = function() {
    this.teach = function(subject){
        console.log(this.name + " is now teaching " + subject + ".");
    }
}

Teacher.prototype = new Person();
var him = new Teacher();

him.initialize("Adam", 45);
him.teach("Inheritance");