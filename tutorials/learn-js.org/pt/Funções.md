Tutorial
--------

Funções são blocos de código reutilizáveis que podem receber argumentos para diversificar retornos.

Pense no seguinte: está precisando copiar trechos iguais? Então esses trechos de código podem ser "componentizados" com funções. Além disso, elas têm seu próprio escopo e são uma parte muito importante de um projeto de software, ainda mais considerando o fato de que podem acessar variáveis locais de funções em níveis superiores (processo esse chamado "closure"). 

Há duas formas de se declarar funções em JavaScript: funções nomeadas e anônimas.

Para declarar uma função nomeada, usamos a palavra reservada "`function`" desta forma:

    function cumprimentar(nome) {
        return `Fala, ${nome}!`;
    }

    console.log(cumprimentar("Nathan"));
>retorna "Fala, Nathan!"

Nessa função, o parâmetro `nome` da função `cumprimentar` é usado no corpo dela própria para construir uma string que será retornada usando a palavra reservada "`return`". O argumento passado é a string `Nathan`, por isso o retorno acima.

Exato: na perspectiva da função e no interior dela, a variável chama-se "parâmetro", mas na perspectiva do chamamento, a variável chama-se "argumento".

Para definir uma função anônima, podemos usar esta sintaxe:

    var cumprimentar = function(nome) {
        return `Fala, ${name}!`;
    }

    console.log(cumprimentar("Nathan"));
>retorna "Fala, Nathan!"

Há uma facilidade proporcionada pelo ES6 chamada "funções seta", mas vamos abordar esse assunto no próximo artigo.

>No contexto de objetos, as funções recebem o nome alternativo de "métodos", enquanto as variáveis, de "atributos". Esses assuntos serão devidamente abordados em lições futuras.

Exercise
--------

Defina uma função chamada `multiplyFive` que receba uma variável do tipo Number e a retorne multiplicada por 5.

Tutorial Code
-------------

// TODO: define the function multiplyFive here

console.log(multiplyFive(3));
console.log(multiplyFive(4));
console.log(multiplyFive(5));
console.log(multiplyFive(6));

Expected Output
---------------

15
20
25
30

Solution
--------

// TODO: define the function multiplyFive here
var multiplyFive = function (number) {
    return number * 5;
}
console.log(multiplyFive(3));
console.log(multiplyFive(4));
console.log(multiplyFive(5));
console.log(multiplyFive(6));
