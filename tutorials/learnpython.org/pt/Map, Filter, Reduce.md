Map, Filter e Reduce são paradigmas da programação funcional. Eles permitem que o programador (você) escreva um código mais simples e curto, sem necessariamente precisar se preocupar com detalhes como loops e ramificações.

Essencialmente, essas três funções permitem que você aplique uma função em vários iteráveis de uma só vez. ```map``` e ```filter``` vêm embutidos no Python (no módulo ```__builtins__```) e não requerem importação. ```reduce```, no entanto, precisa ser importado, pois reside no módulo ```functools```. Vamos entender melhor como todos funcionam, começando com ```map```.

#### Map
A função ```map()``` em Python tem a seguinte sintaxe:

```map(func, *iterables)```

Onde ```func``` é a função na qual cada elemento em ```iterables``` (quantos forem) será aplicado. Percebe o asterisco (```*```) em ```iterables```? Isso significa que pode haver tantos iteráveis quanto possível, desde que ```func``` tenha exatamente esse número como argumentos de entrada exigidos. Antes de passarmos a um exemplo, é importante que você note o seguinte:

1. No Python 2, a função ```map()``` retorna uma lista. No Python 3, no entanto, a função retorna um ```map object```, que é um objeto gerador. Para obter o resultado como uma lista, a função embutida ```list()``` pode ser chamada no objeto map. Ou seja, ```list(map(func, *iterables))```
2. O número de argumentos para ```func``` deve ser o número de ```iterables``` listados.

Vamos ver como essas regras funcionam com os seguintes exemplos.

Digamos que eu tenha uma lista (```iterable```) dos meus nomes de animais de estimação favoritos, todos em minúsculas, e eu precise deles em maiúsculas. Tradicionalmente, em programação normal em Python, eu faria algo assim:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

O que geraria como saída ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Com as funções ```map()```, não só é mais fácil, mas também muito mais flexível. Eu simplesmente faço isso:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

O que também resultaria no mesmo resultado. Note que, utilizando a sintaxe definida do ```map()```, ```func``` neste caso é ```str.upper``` e ```iterables``` é a lista ```my_pets``` -- apenas um iterável. Também note que nós não chamamos a função ```str.upper``` (fazendo isso: ```str.upper()```), já que a função map faz isso por nós em _cada elemento da lista ```my_pets```_.

O que é mais importante notar é que a função ```str.upper``` exige apenas **um** argumento por definição e, portanto, passamos apenas **um** iterável para ela. Assim, _se a função que você está passando requer dois, ou três, ou n argumentos_, então _você precisa passar dois, três ou n iteráveis para ela_. Deixe-me esclarecer isso com outro exemplo.

Digamos que eu tenha uma lista de áreas de círculos que eu calculei em algum lugar, todas com cinco casas decimais. E eu preciso arredondar cada elemento da lista para o número correspondente de casas decimais, o que significa que eu tenho que arredondar o primeiro elemento da lista para uma casa decimal, o segundo elemento da lista para duas casas decimais, o terceiro elemento da lista para três casas decimais, e assim por diante. Com ```map()``` isto é muito fácil. Vamos ver como.

Python já nos abençoa com a função embutida ```round()``` que leva dois argumentos -- o número a ser arredondado e o número de casas decimais para arredondar o número. Então, como a função requer **dois** argumentos, precisamos passar **dois** iteráveis.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Vê a beleza do ```map()```? Consegue imaginar a flexibilidade que isso evoca?

A função ```range(1, 7)``` atua como o segundo argumento para a função ```round``` (o número de casas decimais necessárias por iteração). Então, à medida que ```map``` itera através de ```circle_areas```, durante a primeira iteração, o primeiro elemento de ```circle_areas```, ```3.56773```, é passado junto com o primeiro elemento de ```range(1,7)```, ```1```, para ```round```, tornando-o efetivamente ```round(3.56773, 1)```. Durante a segunda iteração, o segundo elemento de ```circle_areas```, ```5.57668```, junto com o segundo elemento de ```range(1,7)```, ```2```, é passado para ```round```, tornando-se ```round(5.57668, 2)```. Isso acontece até que o final da lista ```circle_areas``` seja alcançado.

Tenho certeza de que você está se perguntando: "E se eu passar um iterável menor ou maior que o comprimento do primeiro iterável? Ou seja, e se eu passar ```range(1, 3)``` ou ```range(1, 9999)``` como o segundo iterável na função acima". E a resposta é simples: nada! Ok, isso não é verdade. "Nada" acontece no sentido de que a função ```map()``` não levantará nenhuma exceção, ela simplesmente vai iterar sobre os elementos até que não encontre mais um segundo argumento para a função, ponto em que ela simplesmente para e retorna o resultado.

Assim, por exemplo, se você avaliar ```result = list(map(round, circle_areas, range(1, 3)))```, você não receberá nenhum erro, mesmo que o comprimento de ```circle_areas``` e o comprimento de ```range(1, 3)``` sejam diferentes. Em vez disso, é isso que o Python faz: ele usa o primeiro elemento de ```circle_areas``` e o primeiro elemento de ```range(1,3)``` e passa para ```round```. ```round``` o avalia e depois salva o resultado. Depois, ele avança para a segunda iteração, segundo elemento de ```circle_areas``` e segundo elemento de ```range(1,3)```, ```round``` salva novamente. Agora, na terceira iteração (```circle_areas``` tem um terceiro elemento), o Python usa o terceiro elemento de ```circle_areas``` e então tenta usar o terceiro elemento de ```range(1,3)```, mas como ```range(1,3)``` não tem um terceiro elemento, o Python simplesmente para e retorna o resultado, que neste caso seria simplesmente ```[3.6, 5.58]```.

Vá em frente, experimente.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

A mesma coisa acontece se ```circle_areas``` for menor que o comprimento do segundo iterável. O Python simplesmente para quando não consegue encontrar o próximo elemento em um dos iteráveis.

Para consolidar nosso conhecimento da função ```map()```, vamos usá-la para implementar nossa própria função ```zip()```. A função ```zip()``` é uma função que pega um número de iteráveis e então cria uma tupla contendo cada um dos elementos nos iteráveis. Como ```map()```, no Python 3, retorna um objeto gerador, que pode ser facilmente convertido para uma lista chamando a função embutida ```list``` sobre ele. Use a sessão do interpretador abaixo para entender o ```zip()``` antes de criarmos a nossa com ```map()```.

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Como um bônus, você consegue adivinhar o que aconteceria na sessão acima se ```my_strings``` e ```my_numbers``` não tiverem o mesmo comprimento? Não? Experimente! Mude o comprimento de um deles.

Vamos para nossa própria função ```zip()```!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Olha só isso! Temos o mesmo resultado que ```zip```.

Você também reparou que eu nem precisei criar uma função usando o modo padrão ```def my_function()```? É assim que o ```map()``` é flexível, e o Python em geral também é! Eu simplesmente usei uma função ```lambda```. Isso não quer dizer que usar o método de definição padrão de função (de ```def function_name()```) não seja permitido, ainda é. Eu simplesmente preferi escrever menos código (ser "Pythônico").

Isso é tudo sobre o map. Vamos ao ```filter()```.

#### Filter
Enquanto ```map()``` passa cada elemento no iterável através de uma função e retorna o resultado de todos os elementos tendo passado pela função, ```filter()```, antes de tudo, exige que a função retorne valores booleanos (verdadeiro ou falso) e então passa cada elemento no iterável através da função, "filtrando" aqueles que são falsos. Ele tem a seguinte sintaxe:

```filter(func, iterable)```

Os seguintes pontos devem ser observados em relação ao ```filter()```:

1. Ao contrário do ```map()```, apenas um iterável é necessário.
2. O argumento ```func``` precisa retornar um tipo booleano. Se não o fizer, ```filter``` simplesmente retorna o ```iterable``` passado para ele. Além disso, como apenas um iterável é necessário, é implícito que ```func``` deve aceitar apenas um argumento.
3. ```filter``` passa cada elemento no iterável através de ```func``` e retorna **somente** os que resultam em verdadeiro. Quero dizer, está bem ali no nome -- um "filtro".

Vamos ver alguns exemplos

O seguinte é uma lista (```iterable```) das notas de 10 alunos em um exame de Química. Vamos filtrar aqueles que passaram com notas superiores a 75... usando ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

O próximo exemplo será um detector de palíndromos. Um "palíndromo" é uma palavra, frase ou sequência que se lê da mesma forma de trás para frente. Vamos filtrar palavras que são palíndromos a partir de uma tupla (```iterable```) de suspeitas de palíndromos.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Que deve resultar em ```['madam', 'anutforajaroftuna']```.

Bastante legal, né? Finalmente, ```reduce()```

#### Reduce
```reduce``` aplica uma função **de dois argumentos** cumulativamente aos elementos de um iterável, opcionalmente começando com um argumento inicial. Ele tem a seguinte sintaxe:

```reduce(func, iterable[, initial])```

Onde ```func``` é a função à qual cada elemento no ```iterable``` é aplicado cumulativamente, e ```initial``` é o valor opcional que é colocado antes dos elementos do iterável no cálculo, e serve como um padrão quando o iterável está vazio. O seguinte deve ser observado sobre ```reduce()```:
1. ```func``` requer dois argumentos, sendo o primeiro o primeiro elemento no ```iterable``` (se ```initial``` não for fornecido) e o segundo elemento no ```iterable```. Se ```initial``` for fornecido, então ele se torna o primeiro argumento para ```func``` e o primeiro elemento no ```iterable``` se torna o segundo elemento.
2. ```reduce``` "reduz" (eu sei, me perdoe) ```iterable``` em um único valor.

Como de costume, vamos ver alguns exemplos.

Vamos criar nossa própria versão da função embutida ```sum()``` do Python. A função ```sum()``` retorna a soma de todos os itens no iterável passado para ela.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

O resultado, como você espera, é ```68```.

Então, o que aconteceu?

Como de costume, é tudo sobre iterações: ```reduce``` pega o primeiro e o segundo elementos em ```numbers``` e os passa para ```custom_sum``` respectivamente. ```custom_sum``` calcula a soma deles e retorna isso para ```reduce```. ```reduce``` então pega esse resultado e o aplica como o primeiro elemento para ```custom_sum``` e pega o próximo elemento (terceiro) em ```numbers``` como o segundo elemento para ```custom_sum```. Ele faz isso continuamente (cumulativamente) até que ```numbers``` seja esgotado.

Vamos ver o que acontece quando eu uso o valor opcional ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

O resultado, como você espera, é ```78``` porque ```reduce```, inicialmente, usa ```10``` como o primeiro argumento para ```custom_sum```.

Isso é tudo sobre Map, Reduce e Filter do Python. Tente os exercícios abaixo para ajudar a confirmar o seu entendimento de cada função.

Exercício
--------
Neste exercício, você usará cada uma das funções ```map```, ```filter```, e ```reduce``` para corrigir o código quebrado.