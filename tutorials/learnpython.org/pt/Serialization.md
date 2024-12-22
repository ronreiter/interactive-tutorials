Python fornece bibliotecas JSON embutidas para codificar e decodificar JSON.

No Python 2.5, o módulo simplejson é usado, enquanto no Python 2.7, o módulo json é usado. Como este interpretador usa Python 2.7, utilizaremos json.

Para usar o módulo json, ele deve primeiro ser importado:

    import json

Existem dois formatos básicos para dados JSON. Ou em uma string ou na estrutura de dados do objeto. A estrutura de dados do objeto, no Python, consiste em listas e dicionários aninhados uns dentro dos outros. A estrutura de dados do objeto permite que se use métodos python (para listas e dicionários) para adicionar, listar, buscar e remover elementos da estrutura de dados. O formato de String é usado principalmente para passar dados para outro programa ou carregar em uma estrutura de dados.

Para carregar JSON de volta em uma estrutura de dados, use o método "loads". Este método recebe uma string e a transforma de volta na estrutura de dados do objeto json:

    import json 
    print(json.loads(json_string))

Para codificar uma estrutura de dados em JSON, use o método "dumps". Este método recebe um objeto e retorna uma String:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python suporta um método proprietário de serialização de dados chamado pickle (e uma alternativa mais rápida chamada cPickle).

Você pode usá-lo exatamente da mesma maneira.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

O objetivo deste exercício é imprimir a string JSON com o par chave-valor "Me" : 800 adicionado a ela.