Esta seção ainda não existe.

Para contribuir com os tutoriais, basta dar um "Fork" no seguinte repositório:

[[https://github.com/ronreiter/interactive-tutorials]]

Daí, você cria uma "Branch" na qual vai poder adicionar ou editar tutoriais e mandar um "Pull Request" para o criador, o "ronreiter".

Para escrever um tutorial, basta dirigir-se à pasta `tutorials`, adentrar a subpasta do domínio desejado, adentrar a subpasta com as iniciais do seu idioma (ou criá-la, se ainda não existir), criar uma página Markdown de nome pertinente e adicioná-la na tela de boas-vindas por meio de hiperlink. Após adicioná-la, garanta que o link funcionou corretamente executando o servidor web "Flask".

#### Iniciais e seus respectivos idiomas:

| Iniciais|Idioma|
| :--: | :---------: |
| cn | 普通话 |
| de | Deutsch |
| en | English |
| es | Español |
| fa | فارسی |
| fr | Français |
| it | Italiano |
| nl | Nederlands |
| pl | Polski |
| **pt** | **Português** |
| tr | Türkçe|

Para que o link atinja a página desejada, use colchetes duplos (`[[`) no arquivo que listará a rota (costuma ser o `Welcome.md`).

Cada tutorial consiste em uma breve explicação conteudística e um exercício sucinto para testar o usuário. Assim que ele o finalizar, terá de executar seu código e verificar se a saída está de acordo com o esperado.

Cada tutorial deve seguir a seguinte estrutura:

    ### Nome do Arquivo.md
    
    Tutorial
    --------
    Aqui, você pode escrever um texto explicativo sobre alguma funcionalidade.

    Exercício
    --------
    Aqui, você deve descrever o propósito do exercício. Para finalizar o exercício corretamente, a nova funcionalidade sendo explicada precisa ser empregada.

    Código do Tutorial
    -------------
    Escreva o bloco de código que, de cara, aparecerá na janela do interpretador. Por exemplo, você pode criar uma função vazia a qual o usuário precisará completar para finalizar o exercício.

    Saída Esperada
    ---------------
    Escreva um bloco de código que descreva a saída que se espera do código modificado. Verificar-se-á se as duas batem.

    Solução
    --------
    Escreva um código que solucione o problema.