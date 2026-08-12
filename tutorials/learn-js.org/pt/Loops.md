Tutorial
--------

### A Estrutura "For"

O JavaScript tem dois métodos base para rodar o mesmo código N vezes. Eles costumam ser usados para iterar posições em vetores ou atributos em objetos. Vejamos o exemplo:

    var i;
    for (i = 0; i < 3; i = i + 1) {
        console.log(i);
    }

<center>
Este será o retorno:

    0
    1
    2
</center>

A estrutura "`for`" do JavaScript tem a mesma sintaxe que no Java e no C. Ela tem três partes:

1. **Inicialização** - Inicializa a variável iteradora, convencionada "`i`". No exemplo, inicializamos `i` como 0.
2. **Condição** - Enquanto a condição for verdadeira, o laço continuará a executar. No exemplo, verificamos se `i` é menor que 3.
3. **Instrução** - Fluxo a ser executado a cada iteração. No nosso caso, aumentamos o valor recebido por `i` a cada ciclo pois, se nada fosse feito, a condição seria verdadeira eternamente e nossa máquina travaria.

Podemos encurtar um pouco a sintaxe da estrutura "`for`" usando, na parte da Instrução, a fusão dos operadores aritméticos e de atribuição vistos anteriormente, ficando `i += 1`. Ou encurtar ainda mais toda a estrutura "`for`" inicializando nosso contador já dentro dela e usando o operador `++`.

    for (var i = 0; i < 3; i++) {
        console.log(i);
    }
>mesmíssimo retorno

Como mencionado mais acima, é muito comum usar a estrutura `"for"` para percorrer vetores e mostrar seus elementos. Exemplificando:

    var meuVetor = ["A", "B", "C"];
    for (var i = 0; i < meuVetor.length; i++) {
        console.log(`Ocupando o índice ${i} do meuVetor, temos ${meuVetor[i]}.`);
    }
<center>
Receberemos todo o conteúdo do vetor:

    Ocupando o índice 0 do meuVetor, temos A.
    Ocupando o índice 1 do meuVetor, temos B.
    Ocupando o índice 2 do meuVetor, temos C.
</center>

Perceba que usamos a propriedade "`length`" do tipo Array, que retorna o número de posições ocupadas por membros. Assim, sabemos exatamente quando parar de executar o laço "`for`".

### A Estrutura "While"

A estrutura "`while`" é uma versão simplificada do "`for`" que verifica se uma expressão retorna "`true`" e executa enquanto assim o permanecer.

Por exemplo:

    var i = 100;
    while (i > 0) {
        if (i == 2) {
            console.log(`${i} pencas de banana na parede. Se uma das pencas amassar, é ${i-1} penca de banana na parede.`);
            i -= 1;
        } else if (i == 1) {
            console.log(`${i} penca de banana na parede. Se essa penca amassar, acabaram as pencas de banana na parede.`);
            i -= 1;
        } else {
            console.log(`${i} pencas de banana na parede. Se uma das pencas amassar, são ${i-1} pencas de banana na parede.`);
            i -= 1;
        }
    }

### As Palavras Reservadas "Break" e "Continue"

A palavra reservada "`break`" interrompe a execução do laço imediatamente. Caso tenhamos criado uma estrutura que repita eternamente com "`while(true)`", podemos usar a palavra reservada "`break`" dentro da própria instrução em vez de checar se uma certa condição é verdadeira.

    var i = 100;
    while (i > 0) {
        
        if (i == 2) {
            console.log(`${i} pencas de banana na parede. Se uma das pencas amassar, é ${i-1} penca de banana na parede.`);
            i -= 1;
        
        } if (i == 1) {
            console.log(`${i} penca de banana na parede. Se essa penca amassar, acabaram as pencas de banana na parede.`);
            i -= 1;
        
        } if (i == 0) {
            break;
            
        } else {
            console.log(`${i} pencas de banana na parede. Se uma das pencas amassar, são ${i-1} pencas de banana na parede.`);
            i -= 1;
        }
    }

A palavra reservada "`continue`" pula o resto do laço e executa a próxima instrução no nível superior. Por exemplo, se quisermos exibir apenas os números ímpares até 100 com uma estrutura "`for`", basta fazer isto:

    for (var i = 0; i < 100; i++) {

        // checa se o número é par
        if (i % 2 == 0) {
            continue;
        }
        
        // se a estrutura chegou a este ponto, i é ímpar.
        console.log(i + " é um número ímpar.");
    }

Exercise
--------

Neste exercício, você precisa escrever um laço `"for"` que itere pelo vetor "`myArray`" e exiba a variável que ocupa cada posição.

Tutorial Code
-------------

var myArray = ["What is the meaning of life?", "The meaning of life is", 42];

// TODO: modify this code
for () {

}


Expected Output
---------------

What is the meaning of life?
The meaning of life is
42

Solution
--------

var myArray = ["What is the meaning of life?", "The meaning of life is", 42];

//TODO: modify this code
for (var i = 0; i < myArray.length; i++) {
    console.log(myArray[i]);
}