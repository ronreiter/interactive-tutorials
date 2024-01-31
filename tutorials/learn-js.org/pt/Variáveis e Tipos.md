Tutorial
--------

Isto é uma variável: uma referência a um valor guardado em um endereço na memória.

E como em (quase) toda linguagem dinamicamente tipada, o JavaScript é uma linguagem "duck-typed", logo toda variável é definida pela palavra reservada "`var`" e pode guardar qualquer tipo primitivo a qualquer momento.

> O TypeScript é um subconjunto do JavaScript que permite a tipagem estática, por isso ele é mais recomendado que o seu irmão amarelo quando se fala na criação de lógica para servidores: torna-se menos provável comportamentos inesperados por mudanças repentinas de tipagem.
<br>Imagina um número de telefone deixando de ser "String" e virando "Number" do nada, passando a ocupar um valor de trilhões na memória?

Temos um grande acervo de tipos primitivos para usar nas variáveis dos nossos códigos:

    const meuNumber = 3;                   // um valor numérico
    const minhaString = "Olá, Mundo!"        // um valor alfanumérico
    const meuBoolean = true;               // um valor booleano

Algumas observações sobre os tipos das variáveis em JavaScript:

* No JavaScript, o tipo Number pode apontar tanto para números decimais quanto para inteiros. 
* As variáveis do tipo Boolean só podem apontar para um destes valores: "`true`" ou "`false`".

Há dois tipos mais avançados em JavaScript: Vetores e Objetos. Estudaremos ambos em tutoriais futuros.

    const meuArray = [];                    // um vetor
    const meuObject = {};                  // um objeto

Fora isso, há dois tipos especiais: o Undefined e o Null.

Quando uma variável é requisitada sem antes receber um valor para guardar, ela guarda "`undefined`". Por exemplo:

    const novaVariavel;
    console.log(novaVariavel);
>retorna `undefined`

No entanto, um valor "`null`" é diferente, seu objetivo é explicitar que uma variável deve permanecer vazia. O valor "`undefined`" também pode ser usado nesse contexto, mas atrapalha a legibilidade por não seguir a convenção.

    const variavelVazia = null;
    console.log(variavelVazia);


>retorna `null`

Exercise
--------

Você deve definir as seguintes variáveis:

1. Um Number chamado "myNumber" que guarde o valor `4`;
2. Uma String chamada "myString" que guarde a frase `Variables are great.`;
3. Um Boolean chamado "myBoolean" que guarde o valor `false`;

Tutorial Code
-------------

console.log("myNumber is equal to " + myNumber);
console.log("myString is equal to " + myString);
console.log("myBoolean is equal to " + myBoolean);

Expected Output
---------------

myNumber is equal to 4
myString is equal to Variables are great.
myBoolean is equal to false

Solution
--------
const myNumber=4;
const myString="Variables are great.";
const myBoolean=false;
console.log("myNumber is equal to " + myNumber);
console.log("myString is equal to " + myString);
console.log("myBoolean is equal to " + myBoolean);
