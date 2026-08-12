Tutorial
--------

Funções seta são uma funcionalidade do ES6, elas se comportam como uma função comum. Trata-se de funções anônimas com sintaxe especial, elas não têm "`this`", argumentos ou "`super`". Também não podem ser usadas como construtores.

Funções seta são comumente usadas como callbacks de funções nativas do JavaScript, como "`map`", "`filter`" ou "`sort`". Elas têm esse nome por causa do `=>` presente na inicialização.

Para declarar uma função seta, usamos a estrutura `() => {}` conforme o exemplo:

    const cumprimentar = (nome) => {
        return `Fala, ${nome}!`;
    }

    console.log(cumprimentar("Olegário"));
>retorna "Fala, Olegário"!

Nessa função, o parâmetro `nome` da função `cumprimentar` é usado no corpo dela própria para construir uma string que será retornada usando a palavra reservada "`return`". O argumento passado é a string `Olegário`, por isso o retorno acima.

No caso de a função receber apenas um argumento, os parênteses tornam-se facultativos:

    const cumprimentar = nome => {
        return `Fala, ${nome}!`;
    }

    console.log(cumprimentar("Olegário"));
>retorna "Fala, Olegário"!

E mais: no caso de querermos um retorno explícito e apenas uma linha for necessária no corpo da função, o uso da palavra reservada "`return`" e das chaves também vira facultativo:

    const cumprimentar = nome => `Fala, ${nome}!`;

    console.log(cumprimentar("Olegário"));
>retorna "Fala, Olegário"!

Comparando o uso de uma função seta como callback ao de uma função padrão:

    let numeros = [2, 3, 5, 8, 9];

    // Função tradicional
    function multiplicarPorDois(numero){
        return numero * 2;
    }

    let numerosMultiplicados = numeros.map(multiplicarPorDois);

    console.log(numerosMultiplicados);
>retorna [4, 6, 10, 16, 18]

    let numeros = [2, 3, 5, 8, 9];

    // Função seta
    const multiplicarPorDois = numero => numero * 2;

    let numerosMultiplicados = numeros.map(multiplicarPorDois);

    console.log(numerosMultiplicados);
>retorna [4, 6, 10, 16, 18]

Exercise
--------

Defina a função seta `divideByTwo`, que recebe um número como parâmetro e retorna a metade desse número.

Tutorial Code
-------------

// TODO: define the function divideByTwo here

console.log(divideByTwo(4));
console.log(divideByTwo(8));
console.log(divideByTwo(12));
console.log(divideByTwo(6));

Expected Output
---------------

2
4
6
3

Solution
--------

// TODO: define the function divideByTwo here
const divideByTwo = number => number / 2;
console.log(divideByTwo(4));
console.log(divideByTwo(8));
console.log(divideByTwo(12));
console.log(divideByTwo(6));
