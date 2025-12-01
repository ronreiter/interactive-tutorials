Tutorial
--------

### Push e Pop

Vetores também podem funcionar como pilhas. Os métodos "`push`" e "`pop`" inserem e removem variáveis diretamente do fim de um vetor, respectivamente.

Por exemplo, criemos um vetor vazio e povoemo-lo com algumas variáveis.

    var minhaPilha = [];
    minhaPilha.push(1);
    minhaPilha.push(2);
    minhaPilha.push(3);
    console.log(minhaPilha);

<center>
Isso retornará:

    1,2,3
</center>

Tendo inserido variáveis no fim do vetor, podemos também removê-las dali.

    console.log(minhaPilha.pop());
    console.log(minhaPilha);

<center>
Esses comandos mostrarão, respectivamente, o que removemos do vetor e o que restou nele:
</center>

    3           // resultado de minhaPilha.pop()
    1,2         // restante de minhaPilha

### Filas usando Unshift e Shift

Os métodos "`unshift`" e "`shift`" assemelham-se aos "`push`" e "`pop`", com a ressalva de trabalharem no começo do vetor. Podemos usar os métodos "`push`" e "`shift`" alternadamente, o que faz o vetor funcionar como uma fila. Veja só:

    var minhaFila = [];
    minhaFila.push(1);
    minhaFila.push(2);
    minhaFila.push(3);

    console.log(minhaFila.shift());
    console.log(minhaFila.shift());
    console.log(minhaFila.shift());

A palavra reservada "`shift`" removerá as variáveis do vetor na mesmíssima ordem em que foram inseridas, o que acarretará nos seguintes retornos:

    1
    2
    3

O método "`unshift`" é usado para inserir uma variável no começo de um vetor. Por exemplo:

    var meuVetor = [1,2,3];
    meuVetor.unshift(0);
    console.log(meuVetor);
    
>retorna [0,1,2,3]

### Splice

O método Splice dos vetores do JavaScript remove uma determinada parte de um vetor; possibilitando também a criação de um novo a partir da parte que foi removida. Por exemplo, se quiséssemos retirar cinco números do seguinte vetor a partir do índice 3, aplicaríamos o seguinte:

    var meuVetor = [0,1,2,3,4,5,6,7,8,9];
    var splice = meuVetor.splice(3,5);

    console.log(splice);        // retorna [3,4,5,6,7]
    console.log(meuVetor);       // retorna [0,1,2,8,9]

Após aplicar o Splice, o vetor resultante possuirá tudo menos as partes anterior e posterior ao intervalo informado pelos parâmetros. Esse intervalo é fechado, isto é: o 3 e o 7 também foram incluídos. Já o vetor original passou a conter todas as variáveis entre 0 e 2 e 8 e 9.

Exercise
--------

Para este desafio, você manipulará o vetor chamado `myArray` e fará o seguinte:

1. Inserirá o número 42 ao fim dele
2. Removerá a variável de seu início

Tutorial Code
-------------

var myArray = [true, "What is the meaning of life?"];
// TODO: write your code here:

console.log(myArray[0]);
console.log(myArray[1]);

Expected Output
---------------

What is the meaning of life?
42

Solution
--------

var myArray = [true, "What is the meaning of life?"];
myArray.push(42);
myArray.shift();

console.log(myArray[0]);
console.log(myArray[1]);
