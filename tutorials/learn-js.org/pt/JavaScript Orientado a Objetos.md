Tutorial
--------

Para facilitar a compreensão da associação entre classes e objetos, pense em uma montadora de carros: a montadora "apenas" recebe os insumos (metais, borrachas etc.) e, após submetê-los a uma extensa linha de produção estritamente pensada, verificada e validada, gerando por fim os carros montados, todos sob o mesmo padrão e com as mesmas características.

Classes são como a montadora, os parâmetros da classe são como os insumos, o método construtor é como a linha de montagem e os carros são como os objetos.

O JavaScript usa funções como classes para criar objetos por meio das palavras reservadas "`new`" e "`this`". Veja um exemplo:

    function Pessoa(primeiroNome, sobrenome) {
        // construa o objeto com base nos parâmetros
        this.primeiroNome = primeiroNome;
        this.sobrenome = sobrenome;

        // um método que retorne o nome completo
        this.nomeCompleto = function() {
            return `${this.primeiroNome} ${this.sobrenome}`;
        }
    }

    var umaPessoa = new Pessoa("Thales", "Silva");
    console.log(umaPessoa.nomeCompleto());
>retorna "Thales Silva"

Criar um objeto por meio da palavra reservada "`new`" equivale a executar o seguinte código:

    var umaPessoa = {
        primeiroNome: "Thales",
        sobrenome: "Silva",
        nomeCompleto: function() {
            return `${this.primeiroNome} ${this.sobrenome}`;
        }
    }

A diferença entre ambas as formas de criar objetos é que a primeira usa uma classe cujo instanciamento se dá pela palavra reservada "`new`" para fins de padronização em larga escala, já a segunda cria uma só instância de objeto imediatamente.

Exercise
--------

Crie uma classe chamada "`Person`" que aceite o nome da pessoa como string pelo parâmetro "`name`" e sua idade como número pelo parâmetro "`age`". 

A classe "`Person`" deve possuir o método "`describe`", que retornará uma string formatada sob a seguinte constituição: "`name`, `age` years old". Isto é, se Jack tiver 25 anos e a função "`describe`" de seu objeto for executada, será exibido o texto "`Jack, 25 years old`".

Tutorial Code
-------------

// TODO: create the Person class using a function

var jack = new Person("Jack", 25);
var jill = new Person("Jill", 24);

console.log(jack.describe());
console.log(jill.describe());

Expected Output
---------------

Jack, 25 years old
Jill, 24 years old

Solution
--------

// TODO: create the Person class using a function
var Person = function(name, age){
    this.name=name;
    this.age=age;
    this.describe = function(){
        return this.name + ", " + this.age + " years old";
    }
}

var jack = new Person("Jack", 25);
var jill = new Person("Jill", 24);

console.log(jack.describe());
console.log(jill.describe());