Tutorial
--------

O JavaScript é uma linguagem funcional, mas pode atuar no mundo da programação orientada a objetos por meio de classes que instanciem objetos com base em modelos ou objetos que independam de classes, com suas próprias propriedades e métodos. Pense num objeto como uma "gaveta" que guarde variáveis em ordem, pois eles podem ser acessados a qualquer momento para recuperá-las. Eles também costumam ser usados como estruturas de dados, tal qual um "dicionário" no Python ou um "mapa" no Java. Nesta lição, aprenderemos a usar um objeto como estrutura de dados, um conhecimento vital para todas as trilhas que se pode fazer numa carreira de desenvolvimento de software, afinal toda a internet se baseia em requisições HTTP assíncronas e nos objetos recuperados (ou não) por elas num determinado momento.
Nos tutoriais avançados, abordaremos melhor o JavaScript assíncrono e orientado a objetos.

Para declarar um objeto, usa-se chaves:

    var objetoVazio = {};
    var objetoPessoa = {
        primeiroNome: "Antônio",
        sobrenome: "Gabriel"
    }

### Acessando Propriedades

Pode-se acessar as propriedades dos objetos por meio dos colchetes (`[]`), tal qual se faria com vetores, mas como em muitas outras linguagens orientadas a objetos, o operador ponto final (`.`) também pode ser usado. Eles são bem parecidos, com a ressalva de os colchetes só poderem acessar uma propriedade passando uma string como argumento, contrastando com o ponto, que apenas exige uma palavra (desde que não contenha espaços ou comece com um número).

Por exemplo, podemos povoar o objeto "objetoPessoa" com mais propriedades:

    var objetoPessoa = {
        primeiroNome: "Antônio",
        sobrenome: "Gabriel"
    }
    objetoPessoa.idade = 23;
    objetoPessoa["salario"] = 50000;
>as duas últimas linhas fazem, essencialmente, a mesma coisa.

### Iteração

Iterar pelas propriedades de um objeto não é uma tarefa fácil, já que fazer isso também pode afetar propriedades que sequer pertençam a ele. Portanto, devemos usar o método "`hasOwnProperty`" para verificar se a propriedade de fato está contida no objeto.

    for (var propriedade in objetoPessoa) {
        if (objetoPessoa.hasOwnProperty(propriedade)) {
            console.log(`A propriedade "${propriedade}" do objeto "pessoa" guarda "${objetoPessoa[propriedade]}".`)
        }
    }
<center>
E o retorno dessa brincadeira será este:

    A propriedade "primeiroNome" do objetoPessoa guarda "Antônio".
    A propriedade "sobrenome" do objetoPessoa guarda "Gabriel".
    A propriedade "idade" do objetoPessoa guarda "23".
    A propriedade "salario" do objetoPessoa guarda "50000".
</center>

Perceba que as propriedades dos objetos em JavaScript têm uma ordem fixa, tal qual os vetores, até porque vetores são um objeto de tipo especial.

Exercise
--------

Neste exercício, você precisará definir um objeto "`person`" com as seguintes propriedades:

1. A propriedade `firstName` da pessoa será "Jack"
2. A propriedade `lastName` da pessoa será "Smith"
3. A propriedade `age` da pessoa será 19
4. A propriedade `employed` da pessoa será `true`

Tutorial Code
-------------

// TODO: change this code
var person;

console.log(person.firstName);
console.log(person.lastName);
console.log(person.age);
console.log(person.employed);

Expected Output
---------------

Jack
Smith
19
true

Solution
--------

// TODO: change this code
var person = {
    firstName : "Jack",
    lastName : "Smith",
    age : 19,
    employed : true
}

console.log(person.firstName);
console.log(person.lastName);
console.log(person.age);
console.log(person.employed);
