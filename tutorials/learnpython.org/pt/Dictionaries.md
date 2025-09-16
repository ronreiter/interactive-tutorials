Um dicionário é um tipo de dado semelhante a arrays, mas funciona com chaves e valores em vez de índices. Cada valor armazenado em um dicionário pode ser acessado usando uma chave, que pode ser qualquer tipo de objeto (uma string, número, lista, etc.) em vez de usar o índice para acessá-lo.

Por exemplo, um banco de dados de números de telefone poderia ser armazenado usando um dicionário como este:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternativamente, um dicionário pode ser inicializado com os mesmos valores na seguinte notação:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterando sobre dicionários

Os dicionários podem ser iterados, assim como uma lista. No entanto, um dicionário, ao contrário de uma lista, não mantém a ordem dos valores armazenados. Para iterar sobre pares de chave e valor, use a seguinte sintaxe:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Removendo um valor

Para remover um índice especificado, use uma das seguintes notações:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

ou:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercício
--------

Adicione "Jake" ao catálogo telefônico com o número 938273443 e remova Jill do catálogo.