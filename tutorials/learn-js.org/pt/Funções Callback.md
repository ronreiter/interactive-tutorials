Tutorial
--------

No JavaScript, chama-se "funções callback" aquelas que são passadas como argumentos a outras. Essa é uma funcionalidade muitíssimo importante da programação assíncrona, afinal permite que a função que receberá o callback execute nosso código e espere o fim de uma tarefa longa enquanto continuamos com a execução em paralelo.

>Adendo: uma função pode receber a si mesma como argumento em seu próprio corpo, ocasionando um fenômeno chamado "recursividade", mas não abordaremos isso aqui por ser um tanto complexo.

Por exemplo:

    var callback = function() {
        console.log("Terminei!");
    }

    setTimeout(callback, 5000);

Esse código espera 5 segundos (pois o segundo parâmetro de "`setTimeout`" é o tempo em milissegundos) e exibe `"Terminei!"` assim que esse tempo passa. Esse código não vai funcionar bem no compilador pois ele não foi feito para lidar com funções callback.

Também podemos definir funções callback como anônimas, tipo assim:

    setTimeout(function() {
        console.log("Terminei!");
    }, 5000);

Como nas funções tradicionais, as funções callback podem receber parâmetros e ser executadas mais de uma vez, e é o que faremos no exercício desta lição.

Exercise
--------

Defina uma função chamada "`callback`" que receberá um parâmetro e o exibirá. Após isso, execute a função "`useCallback`" passando a função recém-criada como argumento.

Tutorial Code
-------------

function useCallback(callback) {
    callback(1);
    callback(2);
    callback(3);
}

function callback(sentence) {
    // TODO: print out sentence
}

// TODO: execute useCallback with the callback as the argument

Expected Output
---------------
1
2
3

Solution
--------
function useCallback(callback) {
    callback(1);
    callback(2);
    callback(3);
}

function callback(sentence) {
    // TODO: print out sentence
    console.log(sentence);
}

// TODO: execute useCallback with the callback as the argument
useCallback(callback);