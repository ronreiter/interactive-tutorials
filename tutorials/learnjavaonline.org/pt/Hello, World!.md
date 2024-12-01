Tutorial
--------

Olá, mundo! 

Java é uma linguagem orientada a objetos (OOP). Os objetos Java fazem parte das chamadas "Java classes". 

Vamos ao programa Olá Mundo!, que simplesmente imprime " Olá Mundo!!" na tela.


    public class Main {
        public static void main(String[] args) {
            System.out.println("This will be printed");
        }
    }

A primeira linha define uma classe chamada `Main`.

    public class Main {

Em Java, cada linha de código que pode realmente ser executada precisa estar dentro de uma classe. Esta linha declara uma classe chamada `Main`, que é `public`, o que significa que qualquer outra classe pode acessá-la. Isso não é importante por enquanto, então não se preocupe. Por enquanto, vamos apenas escrever nosso código em uma classe chamada `Main` e falar sobre objetos mais tarde.

Observe que quando declaramos uma `public class` (classe pública), devemos declará-la dentro de um arquivo com o mesmo nome (Main.java), caso contrário, teremos um erro ao compilar.

Ao executar os exemplos no site, não usaremos a palavra-chave `public`, já que escrevemos todo o nosso código em um arquivo.

A próxima linha é:

    public static void main(String[] args) {

Este é o ponto de entrada do nosso programa Java. O método principal tem que ter essa assinatura exata para poder executar nosso programa.

* `públic` significa que qualquer pessoa pode acessá-lo.
* `static` significa que você pode executar esse método sem criar uma instância de `Main`.
* `void` significa que este método não retorna nenhum valor.
* `main` é o nome do método.
Os argumentos que obtemos dentro do método são os argumentos que obteremos ao executar o programa com parâmetros. É uma `array`(matriz,lista) de `strings`. Vamos usá-lo em nossa próxima lição, então não se preocupe se você não entender tudo agora.


    System.out.println("This will be printed");

* `System` é uma classe pré-definida que o Java nos fornece e contém alguns métodos e variáveis úteis.
* `out` é uma variável estática dentro do System que representa `Output` (saída) do seu programa (stdout).
* `println` é um método de saída que pode ser usado para fazer um `print`(impressão) de uma linha.


Exercício
--------

`Print`(Imprima) "Olá, Mundo!" no console.

Código do tutorial
-------------

public class Main {

    public static void main(String[] args) {

        System.out.println("Goodbye, World!");

    }

}

`Output`(Saída) Esperada
---------------

Olá, Mundo!

Solução
--------

public class Main {

    public static void main(String[] args) {

        System.out.println("Olá, Mundo!");

    }

}
