Tutorial
--------

### A Estrutura `If`

A estrutura "`if`" permite que verifiquemos se uma expressão lógica equivale a "`true`" ou "`false`" e executemos diferentes blocos de código a depender da conclusão obtida.

Se quisermos perguntar se o nome do usuário é "Davi", podemos usar o retorno da função `confirmar`.

    if (confirmar("Você é o Davi?")) {
        console.log("Olá, Davi! Como anda você?");
    } else {
        console.log("Então, qual o seu nome?");
    }

Também podemos suprimir a palavra reservada "`else`" se *apenas* quisermos executar um bloco de código no caso afirmativo de uma expressão lógica.

### Operadores de Igualdade e Inequidade

Para avaliar a igualdade entre duas variáveis, o operador `==` entra em jogo. Há, também, outro operador de igualdade no JavaScript: o `===`, que faz uma comparação rigorosa. Ele apenas retorna "`true`" no caso de as duas variáveis comparadas não diferirem nem em valor nem em tipo primitivo.

    console.log("1" == 1); // verdadeiro
    console.log("1" === 1); // falso

Aplicando:

    var meuNumber = 42;
    if (meuNumber == 42) {
        console.log("O número está correto.");
    }

Operadores de inequidade também podem ser usados para avaliar expressões. Por exemplo:

    var fulano = 1;
    var sicrano = 2;

    if (fulano < sicrano) {
        console.log("Fulano é menor que sicrano.");
    } else {
        console.log("Fulano é maior que sicrano.");
    }

Duas ou mais expressões lógicas podem ser avaliadas juntas usando operadores lógicos para verificar se ambas (ou ao menos uma das, ou nenhuma das) expressões equivalem a "`true`" ao mesmo tempo.

Para verificar **se duas operações retornam "`true`" simultaneamente**, use o operador "AND", determinado por "`&&`".

Para verificar **se ao menos uma delas retorna "`true`"**, use o operador "OR", determinado por "`||`".

    var fulano = 1;
    var sicrano = 2;
    var beltrano = 3;

    if (fulano < sicrano && beltrano > sicrano) {
        console.log("Fulano é menor que sicrano E beltrano é maior que sicrano.");
    }

    if (fulano < sicrano || beltrano > sicrano) {
        console.log("Fulano é menor que sicrano OU beltrano é maior que sicrano.");
    }

O operador de negação, chamado "NOT", determinado por "`!`", pode ser usado da mesma forma:

    var entendeuNada = true;
    if (!entendeuNada) {
        console.log("'Não entendeu nada', logo, entendeu algo!");
    }

### A Estrutura `Switch`

A estrutura "`switch`" assemelha-se à de mesmo nome da linguagem de programação C, mas também suporta strings. A estrutura "`switch`" é usada para selecionar entre mais de duas opções diferentes, podendo executar as mesmas instruções para mais de uma opção se necessário. Veja:

    var patente = "Marechal";
    var periodo = "manhã"

    var verificaManha = periodo == 'manhã'
    
    switch(patente) {
        
        case "Cadete":
        case "Soldado":
        case "Taifeiro":
        case "Cabo":
            console.log(`Autorização negada para ${patente}s.`);
            
            break;
        
        case "Sargento":
        case "Tenente":
        case "Capitão":
        case "Major":
        case "Coronel":
        case "General":
            if (verificaManha) {
                console.log(`Bom dia, ${patente}! Como posso ajudá-lo?`);
            } else {
                console.log(`Boa ${periodo}, ${patente}! Como posso ajudá-lo?`);
            }

            break;

        case "Marechal":
            if (verificaManha) {
                console.log(`Bom dia, ${patente}! Estou às suas ordens!`);
            } else {
                console.log(`Boa ${periodo}, ${patente}! Estou às suas ordens!`);
            }

            break;

        default:
            if (verificaManha) {
                console.log("Bom dia, mas eu nem sei quem você é.");
            } else {
                console.log("Boa ${periodo}, mas eu nem sei quem você é.");
            }
            
            break;
    }
>retorna "Bom dia, Marechal! Estou às suas ordens!"

Nesse exemplo, "Cadete", "Soldado", "Taifeiro" e "Cabo" ativam a primeira sentença, enquanto "Sargento", "Tenente", "Capitão", "Major", "Coronel" e "General" ativam a segunda e apenas "Marechal" ativa a terceira. Se uma patente desconhecida for informada, a palavra reservada "`default`" ativa o fluxo a ser seguido nesse caso, mas sua existência é opcional. Precisamos usar a instrução "`break`" entre os blocos de código para evitar que a estrutura "`switch`" execute os próximos.

Em geral, não se recomenda muito o uso de "`switch`", já que esquecer a instrução "`break`" pode causar situações muitíssimo bizarras.

Exercise
--------

Neste exercício, você precisa construir uma estrutura de verificação dentro da função `checkNumber` que verifique se o parâmetro `myNumber` é igual a 42. Em caso afirmativo, a função deve exibir a palavra `correct` via `console.log`. Em caso negativo, a função precisa exibir a palavra `incorrect` da mesma forma. Lembrete: você pode dar nome ao parâmetro recebido pela função informando-o dentro dos parênteses. Por exemplo: `function myFunction(myParameter)`.

Tutorial Code
-------------

function checkNumber() {
    // TODO: write your code here
}

checkNumber(3);
checkNumber(7);
checkNumber(42);

Expected Output
---------------

incorrect
incorrect
correct

Solution
--------

function checkNumber(myNumber) {
    // TODO: write your code here
    if (myNumber===42) {
        console.log("correct");
    } else {
        console.log("incorrect");
    }
}

checkNumber(3);
checkNumber(7);
checkNumber(42);