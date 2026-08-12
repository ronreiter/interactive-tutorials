Tutorial
--------
As promessas (`promises`) são essenciais à programação assíncrona com JavaScript, portanto aqueles que desejarem ingressar numa carreira de "Front-end" precisam estudá-las com o máximo de afinco.

### E o que que é "Programação Assíncrona"?

A programação assíncrona é um "setor" da programação que permite que diferentes partes do código sejam executadas em períodos diferentes de tempo, em vez de ser tudo imediato, como é o padrão.

Isso costuma ser necessário quando queremos obter uma informação de algum servidor remoto e integrar a resposta desse servidor à nossa própria aplicação:

    function pegaStatusDoServidor() {
        const resultado = fetch("/server/status");

        // ISTO NÃO FUNCIONARÁ!
        console.log("O status do servidor é ", resultado.ok);
    }

Em várias linguagens de programação, como o Python, essa abordagem funcionaria, já que suas funções são síncronas por padrão.

Mas no JavaScript, várias APIs exigirão que uma função espere para poder fazer algo a fim de evitar sobrecarga dos recursos físicos, o que faz delas **assíncronas** por padrão. Resumindo, esse código não vai fazer o que a gente espera, pois já que a função "`fetch`" é assíncrona, ela retornará '**algo**' que não é exatamente a resposta final, mas que *eventualmente* o será.
>Pense numa API como a "porta de entrada" para contatar uma aplicação X e obter dados dela: elas têm documentação independente (além de, às vezes, exigirem autenticação por "token" e/ou pagamento a fim de fazer manutenções de infraestrutura para serem usadas).

Esse "algo" retornado da função "`fetch`" é o que se chama de "**Promise**" no JavaScript.

Para que o código mais acima funcionasse, devemos refatorar a função da seguinte forma:

    function pegaStatusDoServidor() {
        const resultado = fetch("/server/status");

        resultado.then(function(status) {
            console.log("O status do servidor é ", status.ok);
        });
    }

Perceba que, desta vez, usamos a função "`then`", que é um dos métodos característicos de um objeto do tipo "`Promise`".

### O Objeto "Promise"

Promise é um objeto nativo do JavaScript dotado de duas características:

1. Ele recebe apenas um argumento, que é uma função. Essa função precisa ter dois parâmetros: uma função "`resolve`" e uma função "`reject`". O código escrito dentro do corpo da promessa precisa usar ao menos uma dessas duas funções.
    
    - Para fins didáticos, referir-me-ei ao "fim" de uma promessa como "conclusão", mas quando uma promessa conclui, seu fim pode ser tanto positivo quanto negativo, como veremos adiante.

2. Ela pode ser aguardada usando o método "`then`" (ou similares) ou a palavra reservada "**`await`**".
>Para as palavras reservadas "*async*" e "*await*", fizemos um guia em particular.

Em suma, chamamos de função assíncrona toda aquela cujo retorno, em vez de ser o valor que se espera no primeiro momento, será um objeto `Promise` que eventualmente se tornará esse exato valor.

Suponhamos que queremos calcular a soma de dois números, mas escrevendo uma função que retornará uma `Promise` em vez dessa soma.

    .exec
    function somaAssincrona(x, y) {
        const p = new Promise((resolve, reject) => {
            
            // isto conclui a promessa que recém-criamos retornando x + y
            resolve(x + y);                        
        });

        // já isto retorna a própria promessa em vez do valor esperado
        return p;
    }

    // agora, abriremos a promessa (como uma caixa de presentes)
    somaAssincrona(5, 7).then((resultado) => {
        console.log(`O resultado da soma é ${resultado}.`);
    });

"Pra que isso serve"? É para quando o cálculo precisa acontecer indiretamente, como após esperar algum tempo ou após obter dados de um servidor remoto com a função "`fetch`".

Modifiquemos o exemplo para que a solução seja entregue após meio segundo:

    .exec
    function somaAssincrona(x, y) {
        console.log("1. A função 'somaAssincrona' é executada.");

        const p = new Promise((resolve, reject) => {
        
            // isto rodará apenas daqui a 500 ms
            setTimeout(() => {
                console.log("4. Concluindo a promessa 'p' da função 'somaAssincrona' com o resultado após 500 ms de espera.");

                resolve(x + y);

            }, 500); 

            // retornos são desnecessários
            console.log("2. A promessa 'p' da função 'somaAssincrona' é inicializada.");
        });

        console.log("3. A função 'somaAssincrona' prepara-se para retornar a promessa 'p' sem saber que fim ela vai ter.");
        return p;
    }

    // agora, abriremos a promessa
    somaAssincrona(5, 7).then((resultado) => {
        console.log(`5. O resultado da adição é ${resultado}.`);
    });
>exibe, além das outras linhas, "5. O resultado da adição é 12."

### Rejeitando Promessas

Em um fluxo síncrono, se quisermos informar ao usuário que algo deu errado e disparar um erro a ser exibido, podemos ativar uma exceção por meio da função "`throw`". Mas no contexto assíncrono das promessas, a gente tem que ativar a função "`reject`".

Digamos que precisamos reescrever a função acima, mas com a promessa guardando uma rejeição formal em caso de recebimento de valor negativo. Teríamos isto:
    
    .exec
    function somaAssincrona(x, y) {
        return new Promise((resolve, reject) => {
            // rode isto daqui a 500 ms
            setTimeout(() => {
                if (x < 0 || y < 0) {
                    reject("Erro: valores negativos não são permitidos.");
                } else {
                    resolve(x + y);
                }
            }, 500); 

            // sem retornos aqui
        });
    }

    somaAssincrona(-5, 7).then((resultado) => {
        console.log(`O resultado da adição é ${resultado}.`);
    }).catch((erro) => {
        console.log(`Erro: ${erro}`);
    });
>exibe "O resultado da adição é 12."

Exercise
--------
Escreva uma função que receba uma string como parâmetro e retorne um objeto do tipo Promise.

A promessa deve dar "`resolve`" retornando a versão da string toda em letras maiúsculas, mas dar "`reject`" no caso de a string ser nula.

Tutorial Code
-------------
    function upperCaseAsync(s) {
        // write your code here
    }
    
    upperCaseAsync("steve").then(console.log);
    upperCaseAsync(null).catch((x) => {
        console.log("No string received!");
    });

Expected Output
---------------
    STEVE
    No string received!

Solution
--------
    function upperCaseAsync(s) {
        return new Promise((resolve, reject) => {
            if (s === null) {
                reject();
            } else {
                resolve(s.toUpperCase());
            }
        });
    }
    
    upperCaseAsync("steve").then(console.log);
    upperCaseAsync(null).catch((x) => {
        console.log("No string received!");
    });