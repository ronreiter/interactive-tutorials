Tutorial
--------

Estas duas palavras reservadas do JavaScript, "`async`" e "`await`", facilitam um bocado a programação assíncrona, por serem a porta de entrada das chamadas **corrotinas**.

Uma corrotina é uma função que pode pausar sua execução e passar o controle ao fluxo principal até que algum evento ocorra. É uma abordagem alternativa ao uso de funções callback que deixa o código mais fácil de escrever, ler e manter.

### A Palavra Reservada "`await`"

A palavra reservada "`await`" é um comando especial que diz ao JavaScript em que ponto da função atual deve parar até que o objeto de tipo Promise seja concluído, para só então retornar o valor dessa promessa. Pode-se pensar em um laço infinito que verifica se a promessa concluiu, retornando o valor obtido assim que possível.

A palavra reservada "`await`" só funciona dentro de funções declaradas com "`async`" (que são corrotinas, como já explicado).

O desafio das funções com "`async`" é que elas sempre retornam promessas em vez de valores. Quer dizer que sempre que formos executar uma função com "`async`", precisamos usar o "`await`" se quisermos fazer operações com o valor retornado.

Revisitemos o exemplo da função `somaAssincrona` do tutorial de promessas, mas definindo a função `dormir` em vez de usando a "`setTimeout`", para que possamos implementar a função `somaAssincrona` usando o "`await`" depois.

A função `dormir` retornará um objeto do tipo `Promise` que concluirá após `ms` milissegundos e usará setTimeout para tal.

    .exec
    function dormir(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    function somaAssincrona(x, y) {
        return new Promise((resolve, reject) => {
            dormir(500).then(() => {
                resolve(x + y);
            });
        });
    }

    // agora, abriremos a promessa
    somaAssincrona(5, 7).then((resultado) => {
        console.log(`O resultado da adição é ${resultado}.`);
    });

Podemos deixar o código da função `somaAssincrona` bem melhor simplesmente por usar o "`await`" na função `dormir` e retornando o resultado.

    .exec
    function dormir(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    async function somaAssincrona(x, y) {
        // a função pausa por 500 milissegundos
        await dormir(500);
        
        // terminou. calculemos e retornemos o valor
        return x+y;
    }

    // somaAssincrona é uma função assíncrona, quer dizer que retorna uma promessa.
    somaAssincrona(5, 7).then((resultado) => {
        console.log(`O resultado da adição é ${resultado}.`);
    });

Já que `somaAssincrona` é uma função declarada com "`async`", ela retorna **implicitamente** um objeto do tipo `Promise`, tal qual o exemplo mais acima, que retorna **explicitamente** uma promessa.

Ambas as funções `somaAssincrona` têm funcionalidade idêntica, mas essa última, criada com o "`async`", ficou bem mais fácil de entender!

Exercise
--------

Escreva uma função assíncrona via `"async"` e `"await"` que receba uma string como parâmetro e espere 500 milissegundos para retornar essa string toda em letras maiúsculas. Use a função "`sleep`" já disponibilizada.

Tutorial Code
-------------
    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    async function uppercaseString(s) {
        // your code goes here
    }

    uppercaseString("edward").then(console.log);

Expected Output
---------------
EDWARD

Solution
--------
    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    async function uppercaseString(s) {
        await sleep(500);
        return s.toUpperCase();
    }

    uppercaseString("edward").then(console.log);