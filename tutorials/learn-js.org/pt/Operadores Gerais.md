Tutorial
--------

Toda variável em JavaScript é programada para que, sempre que um operador seja usado entre duas variáveis, algum tipo de resultado seja devolvido.

### Operador de Adição

O operador `+` (adição) é usado tanto para somar números quanto para concatenar strings.

Por exemplo, somar duas variáveis é fácil:

    var a = 1;
    var b = 2;
    var c = a + b;     // c recebeu 3

O operador de adição é usado para concatenar strings e números entre si:

    var nome = "Gabriel";
    console.log("Olá, " + nome + "!");

    console.log("O sentido da vida é " + 42);
    console.log(42 + " é o sentido da vida");

O operador de adição tem comportamentos diferentes quando se soma operandos de tipos primitivos diferentes. Como o tipo primitivo "padrão" é o String, quando se tenta somá-lo a um Number, a própria linguagem converte o Number para String antes do processo.

    console.log(1 + "1");
>retorna "11"

### Operador de Atribuição

O operador de atribuição padrão é o "=", deve-se lê-lo como "recebe", não como "igual". Ele atribui valores e, por consequência, tipos às variáveis. Já o estamos usando há muito tempo, então sem maiores exemplos.

### Operadores Matemáticos

Para subtrair, multiplicar ou dividir dois números, usa-se os sinais de menos (`-`), asterisco (`*`) e barra (`/`), respectivamente.

    console.log(3 - 5);     // retorna -2
    console.log(3 * 5);     // retorna 15
    console.log(3 / 5);     // retorna 0.6

O JavaScript também oferece o operador de módulo (`%`), que retorna o **resto** de uma operação de divisão. É muito usado para determinar, por exemplo, se um número é par.

    console.log(5 % 3);
>retorna 2

O JavaScript também suporta a fusão entre o operador de atribuição e os aritméticos, para que uma variável receba o valor de si própria após uma operação com outra. Isto é, em vez de digitar `meuNumber = meuNumber / 2`, dá para digitar `meuNumber /= 2`. Veja a lista dos operadores combinados:

* `+=`
* `-=`
* `*=`
* `/=`
* `%=`

### Funções Matemáticas Avançadas

Finalizando, o JavaScript também possui o módulo "`Math`", que contém um monte de operações mais complexas, dentre elas podemos citar:

* `Math.abs` calcula o valor absoluto de um número.
* `Math.exp` calcula __e__ elevado a um número.
* `Math.pow(x,y)` calcula o resultado de __x__ elevado à __y__ ª potência.
* `Math.floor` remove a parte fracionária de um número.
* `Math.random()` retornará um número aleatório `x`, considerando 0<=x<1.

Exercise
--------

Neste exercício, você fará o seguinte:

1. Conecte a string `firstName` à `lastName` para criar a variável `fullName`, mas ponha um espaço (`" "`) entre ambas.
2. Multiplique a variável `myNumber` por 2 e atribua esse resultado à `meaningOfLife`.

Tutorial Code
-------------

var firstName = "John";
var lastName = "Smith";
var myNumber = 21;

// TODO: change the following code
var fullName = null;
var meaningOfLife = null;

console.log("The name is " + fullName);
console.log("The meaning of life is " + meaningOfLife);

Expected Output
---------------

The name is John Smith
The meaning of life is 42

Solution
--------

var firstName = "John";
var lastName = "Smith";
var myNumber = 21;

// TODO: change the following code
var fullName = firstName + " " + lastName;
var meaningOfLife = myNumber * 2;

console.log("The name is " + fullName);
console.log("The meaning of life is " + meaningOfLife);