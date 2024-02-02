Tutorial
--------

A desestruturação é uma funcionalidade que o ES6 nos traz, ela existe a fim de facilitar e simplificar operações repetitivas e atribuições dentro do JavaScript.

Pela desestruturação, podemos tanto extrair dados em um nível mais profundo de um vetor (ou objeto) usando uma sintaxe mais sucinta quanto atribuir a esse dado "extraído" um nome alternativo nessa mesma operação.

No JavaScript, podemos realizar isso de uma forma bastante simples:

    // considere este objeto:
    const pessoa = {
        cabeca: {
            olhos: 'x',
            boca: {
                dentes: 'x',
                lingua: 'x'
            }
        },
        corpo: {
            ombros: 'x',
            peitos: 'x',
            braços: 'x',
            maos: 'x',
            pernas: 'x'
        }   
    };

    // se quiséssemos pegar sua cabeça como nos velhos tempos:
    let cabeca = pessoa.cabeca;

    // desestruturação do ES6:
    let { cabeca } = pessoa;

    // podemos dar, à cabeça extraída, outro nome, como se uma variável fosse declarada na mesma linha:
    let { cabeca : minhaCabeca } = pessoa;

    // olhando a nova cabeça...
    console.log(minhaCabeca);
>exibe '{ olhos: 'x', boca: { ... } }'


Em se tratando de vetores:

    let numeros = ['2', '3', '7'];

    // como nos velhos tempos:
    let dois = numeros[0];
    let tres = numeros[1];

    // desestruturação do ES6:
    let [ dois, tres ] = numeros;

    // podemos dar-lhes outros nomes, como se novas variáveis fossem declaradas na mesma linha:
    let [dois: posicaoZero, tres: posicaoUm] = numeros;

    console.log(posicaoZero)      // exibe '2'
    console.log(posicaoUm)        // exibe '3'

Também podemos fazer isso com parâmetros de funções:

    // como nos velhos tempos:
    function pegaCabecaECorpo(pessoa) {

        let cabecaECorpo = {
            cabeca: pessoa.cabeca,
            corpo: pessoa.corpo
        }

        return cabecaECorpo;
    } 

    // desestruturação do ES6:
    function pegaCabecaECorpo({ cabeca, corpo }) {
        return { cabeca, corpo }
    }

    // com funções seta
    let pegaCabecaECorpo = ({ cabeca, corpo }) => { cabeca, corpo };

Aviso: tome cuidado com a desestruturação, pois se você não tiver certeza do recebimento de um objeto dotado dos exatos parâmetros, é melhor fazer da forma antiga a fim de evitar a ocorrência do erro "`{nome do atributo} is undefined`".

É possível evitar esse tipo de erro usando a desestruturação do ES6 ao definir valores padrão às variáveis, então será certa a existência dessas propridades, deixando de haver a completa dependência dos argumentos recebidos.

    // não sei dizer se cabeça e/ou o corpo estarão presentes em alguns casos...
    
    // agora, garantimos que tanto cabeça quanto o corpo existirão e serão iguais a " '' ", evitando que dê pau se o argumento recebido não carregar essas exatas propriedades
    function pegaCabecaECorpo({ cabeca = '', corpo = '' }) {
        return { cabeca, corpo }
    }

A desestruturação pode ocorrer a qualquer nível de profundidade, basta que esse atributo exista. 

    // desestruturação profunda
    let computador = {
        processador: {
            transistor: {
                silicone: {
                    grossura: '9nm'
                }
            }
        }
    }

    let { processador: { transistor: { silicone: { grossura } } } } = computador;

    // simplificando
    let { grossura: grossuraDoInteli9 } = computador.processador.transistor.silicone;

    console.log(grossuraDoInteli9)
>exibe '9nm'

Exercise
--------

Obtenha a propriedade "`legs`" do objeto "`person`" e, também, os dados dentro da terceira posição do vetor "`numbers`" via desestruturação. Dê às variáveis obtidas os nomes de "`myLegs`" e "`thirdPosition`", respectivamente.

Tutorial Code
-------------

const person = {
    head: {
        eyes: 'x',
        mouth: {
            teeth: 'x',
            tongue: 'x'
        }
    },
    body: {
        shoulders: 'x',
        chest: 'x',
        arms: 'x',
        hands: 'x',
        legs: 'x'
    }   
};

const numbers = ['2', '3', '4'];

// TODO: Destructure here.

console.log(myLegs);
console.log(thirdPosition);

Expected Output
---------------

x
4

Solution
--------

// TODO: Destructure here.
let { body: { legs: myLegs } } = person;
let [onePosition, secondPosition, thirdPosition] = numbers;

// or...
// const { legs: myLegs } = person.body;
// const [,,thirdPosition] = numbers;

console.log(myLegs);
console.log(thirdPosition);