Esta seção ainda não existe.

Para contribuir com os tutoriais, basta dar um "fork" no seguinte repositório:

[[https://github.com/ronreiter/interactive-tutorials]]

Daí você vai poder adicionar ou editar tutoriais e mandar um "pull request" para o criador, "ronreiter".

Para escrever um tutorial, basta criar uma página Markdown de nome pertinente sob a pasta `tutorials`, e adicioná-la na tela de boas-vindas por meio de hiperlink. Após adicioná-la, garanta que o link funcionou corretamente executando o servidor web "Flask".

Para que o link atinja a página desejada, use colchetes duplos (`[[`) no arquivo que listará a rota (costuma ser a página `Welcome.md`).

Cada tutorial consiste em uma breve explicação conteudista e um exercício curto para testar o usuário. Assim que o usuário finalize, ele terá de executar o código e verificar se a saída está de acordo com o esperado.

Cada tutorial deve seguir a seguinte estrutura:

### Nome do arquivo.md

    Tutorial
    --------
    Aqui, você pode escrever um texto explicativo sobre alguma funcionalidade.

    Exercício
    --------
    Aqui, você deve escrever o propósito do exercício. Para finalizar o exercício corretamente, a nova funcionalidade sendo explicada precisa ser empregada.

    Código do Tutorial
    -------------
    Escreva um bloco de código que apareça na janela do interpretador. Por exemplo, você pode criar uma função vazia a qual o usuário precisa completar para finalizar o exercício.

    Saída Esperada
    ---------------
    Escreva um bloco de código que descreva a saída que se espera do código modificado. Verificar-se-á se as duas batem.

    Solução
    --------
    Escreva o código que solucione o problema.