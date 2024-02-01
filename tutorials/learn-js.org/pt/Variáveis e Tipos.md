Tutorial
--------

"Variável" é uma referência a um valor guardado em um endereço na memória que pode ser acessada por um nome qualquer.

Esses nomes quaisquer podem ser regidos pelas lógicas "camelCase" (como em nomes de variáveis do Java), "snake_case" (como em nomes de variáveis do Python), "CapitalCamelCase" (como em nomes de classes do Java), flatcase (como em nomes de pacotes do Java), UPPER_CASE (como em constantes do C) e kebab-case. O padrão vai depender dos padrões da companhia ou do projeto em que você está trabalhando, a recomendação é apenas não se desviar dele assim que escolhido.

Uma restrição para a nomenclatura das variáveis é que elas não podem assumir palavras reservadas da linguagem. E já que estamos no Brasil, **lembrem-se**, espaços e acentos, em computação, só se usa dentro de variáveis que guardem texto, ou a chance de erros é tremenda!

E como em (quase) toda linguagem dinamicamente tipada, o JavaScript é uma linguagem "duck-typed", logo toda variável pode guardar qualquer tipo primitivo a qualquer momento. Outra observação: o JavaScript não exige ponto e vírgula a cada fim de linha, apenas estou seguindo o padrão que o criador do repositório determinou em suas lições.

Variáveis podem ser declaradas pelas palavras reservadas "`const`", "`let`" e "`var`". "`const`" cria uma variável constante, o que significa que o valor (e, por consequência, o tipo) daquela variável não mudará de forma alguma, `let` cria uma variável local (visível pelo escopo da função) e `var` cria uma variável global (visível pelo código todo).

Temos um grande acervo de tipos primitivos para usar com as variáveis dos nossos códigos:

    const meuNumber = 3;                   // Number: um valor numérico
    const minhaString = "Olá, Mundo!"        // String: um valor alfanumérico
    const meuBoolean = true;               // Boolean: um valor booleano

Algumas observações sobre os tipos das variáveis em JavaScript:

* O tipo Number pode apontar tanto para números decimais quanto para inteiros. 
* As variáveis do tipo Boolean só podem apontar para um destes valores: "`true`" ou "`false`".
* O tipo String pode ser constituído de números ou valores puramente textuais. No entanto, o tipo Number não pode guardar valores textuais de forma alguma e, claro, se uma string guardar um número, esse número não poderá ser usado em operações aritméticas.

Há dois tipos primitivos mais avançados em JavaScript: Function e Object. Estudaremos ambos em tutoriais futuros.

    function minhaFuncao() {}              // uma função vazia
    const meuObject = {};                  // um objeto vazio

    const meuArray = [];                   // um vetor, que é apenas um objeto especial, vazio

Fora isso, há dois tipos especiais: o Undefined e o Null.

Quando uma variável é requisitada sem antes receber um valor para guardar, ela guarda "`undefined`". Por exemplo:

    const novaVariavel;
    console.log(novaVariavel);
>retorna `undefined`

No entanto, um valor "`null`" é diferente, seu objetivo é explicitar que uma variável deve permanecer vazia. O valor "`undefined`" também pode ser usado nesse contexto, mas atrapalha a legibilidade por não seguir a convenção.

    const variavelVazia = null;
    console.log(variavelVazia);


>retorna `null`

Finalizando o tópico, o ES6 trouxe-nos um uso muito interessante das strings com o "template literals", ele entra em jogo quando se está trabalhando com strings de várias linhas ou que mostrem várias outras variáveis e se queira evitar a concatenação excessiva com "+", aspas e espaços.
Para aplicá-lo, deve-se declarar a string com acentos graves ```| `` |``` em vez de aspas simples ou duplas. Dentro da string, sempre que se for chamar a outra variável, usa-se cifrão e chaves da seguinte forma:

    var nome = "Nathan";
    var periodo = "tarde";
    var saudacao = `Boa ${periodo}, ${nome}!`;

    // em vez de
    // var saudacao = "Boa "+periodo+", "+nome+"!";

    console.log(saudacao)
>ambos retornam "Boa tarde, Nathan!", mas perceba a complexidade desnecessária da segunda alternativa.

<br>

> Adendo: O TypeScript é um subconjunto do JavaScript que permite a tipagem estática, por isso ele é mais recomendado que o seu irmão amarelo quando se fala na criação de lógica para servidores: torna-se menos provável comportamentos inesperados por mudanças repentinas de tipagem.
<br>Imagina só um número de telefone deixando de ser "String" e virando "Number" do nada, passando a ocupar um valor trilionário na memória?

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
