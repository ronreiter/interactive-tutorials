Tutorial
--------
Dispomos de três tipos de caixas pop-up no JavaScript: "`alert`", "`confirm`"  e "`prompt`". Para usar qualquer uma, basta chamá-las:


    alert("Olá.");
    confirm("Você quer faturar uma grana?");
    prompt("Qual o seu nome?");

As caixas do tipo "`alert`" não retornam coisa alguma.
As caixas do tipo "`confirm`" retornarão "`true`" se o usuário clicar em "OK" e retornarão "`false`" se ele clicar em "Cancelar".
As caixas do tipo "`prompt`" retornarão qualquer coisa que o usuário escrever.

Todas as caixas exibirão o argumento de seu chamamento ao usuário, no entanto as caixas do "`prompt`" têm um outro parâmetro opcional: o texto que já estará dentro da caixa por padrão.

Exercise
--------
Crie uma variável ```test```, defina-a como o retorno de uma caixa do tipo `prompt` e escreva "Hi!" nela (sem aspas) quando ela aparecer. A propósito: seu bloqueador de pop-ups precisa estar desativado.

Tutorial Code
-------------
// Make your prompt box below!

console.log(test);

Expected Output
---------------
Hi!

Solution
--------
// Make your prompt box below!
var test = prompt("Type Hi!");
console.log(test);
