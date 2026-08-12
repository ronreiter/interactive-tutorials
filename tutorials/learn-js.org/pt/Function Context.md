Tutorial
--------

No JavaScript, as funções rodam em um determinado contexto o qual pode ser acessado pela palavra reservada "`this`". 

Todas as funções padrão do navegador rodam sob o contexto "`Window`". As funções definidas sob um objeto ou uma classe (que é outra função) usarão o contexto do objeto em que foram criadas. No entanto, também podemos mudar o contexto de uma função a qualquer momento antes, durante ou depois da sua execução.

### Atrelando um Método a um Objeto

Para atrelar uma função a um objeto e fazer dela um método dele, podemos usar a função "`bind`". Aqui vai um exemplo simples:

    var pessoa = {
        nome : "Derek"
    };

    function mostraNome() {
        console.log(this.nome);
    }

Tá na cara que a gente não vai conseguir chamar a função `mostraNome()` sem associar ela ao objeto `pessoa`, e para fazer isso, nós precisamos criar outra função que, por transitividade, associe a função ao objeto da seguinte forma:

    var mostraNomeAssociado = mostraNome.bind(pessoa);
    mostraNomeAssociado();
>exibe "Derek"

### Chamando uma Função de um Contexto Diferente

Podemos usar as funções "`call`" e "`apply`" para chamar uma função como se estivesse atrelada a um objeto. A diferença entre ambas é apenas a ordem dos argumentos: a função `call` recebe o parâmetro `this` primeiro e depois a função a ser atrelada, enquanto a função "`apply`" recebe como primeiro parâmetro o `this` e um vetor de parâmetros para passar à função como o segundo.

Por exemplo, chamemos `mostraNome` sob o contexto `pessoa` usando a função "`call`":

    mostraNome.call(pessoa);
>retorna "Derek"

### "`Call`" e "`Apply`" vs. "`Bind`"

A diferença entre "`call`", "`apply`" e "`bind`" é que o "`bind`" retorna uma nova função idêntica à antiga, com a diferença de que o valor de "`this`" da nova função corresponde ao objeto que lhe foi atrelado. Já "`call`" e "`apply`" chamam a função com o "`this`" já sendo o objeto atrelado, mas sem o retorno de uma nova função ou mudanças na original, apenas a chamam com um valor diferente para o "`this`".

For example:

    var mostraNomeAssociado = mostraNome.call(pessoa);    // mostraNomeAssociado pega o valor retornado pela função mostraNome (null)
    mostraNomeAssociado();                               // não funciona porque não é uma função, é um Null
    
    mostraNome.bind(pessoa);                         // retorna uma função, mas já que nada a está usando, é inútil
    mostraNome();                                    // dá um erro porque "this.nome" não foi definido no contexto puro de mostraNome 
    
Pense no "`call`" como a execução do valor **retornado** pelo "`bind`".

Por exemplo:

    mostraNome.call(pessoa);     // é o mesmo que
    mostraNome.bind(pessoa)();   // executa a função retornada pelo bind

Ou pense no "`bind`" como um atalho para o "`call`".

Por exemplo:

    var mostraNomeAssociado = mostraNome.bind(pessoa); // é o mesmo que

    var mostraNomeAssociado = function() {
        mostraNome.call(pessoa);
    }


Exercise
--------

Crie cópias das funções "`printFullName`" e "`printDetails`" atreladas ao objeto "`person`", chamando-as "`boundPrintFullName`" e `"boundPrintDetails"`.

Tutorial Code
-------------

var person = {
    firstName : "John",
    lastName : "Smith",
    age : 23
};

function printFullName() {
    console.log(this.firstName + " " + this.lastName);
}

function printDetails() {
    console.log(this.firstName + " is " + this.age + " years old");
}

// TODO: create bound copies of printFullName and printDetails.
var boundPrintFullName;
var boundPrintDetails;

boundPrintFullName();
boundPrintDetails();

Expected Output
---------------

John Smith
John is 23 years old

Solution
--------

var person = {
    firstName : "John",
    lastName : "Smith",
    age : 23
};

function printFullName() {
    console.log(this.firstName + " " + this.lastName);
}

function printDetails() {
    console.log(this.firstName + " is " + this.age + " years old");
}

// TODO: create bound copies of printFullName and printDetails.
var boundPrintFullName = printFullName.bind(person);
var boundPrintDetails = printDetails.bind(person);

boundPrintFullName();
boundPrintDetails();