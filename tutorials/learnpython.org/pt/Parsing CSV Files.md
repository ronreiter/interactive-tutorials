### O que é CSV?

CSV significa 'Valores Separados por Vírgula'. O formato CSV é o formato de importação e exportação mais comum para bancos de dados e planilhas. Um arquivo CSV é um arquivo de texto simples que contém uma lista de dados. Eles geralmente usam o caractere vírgula (,) para delimitar dados, mas às vezes usam outros caracteres, como ponto e vírgula ou tabulações.

Dados CSV de exemplo:

...
nome da coluna 1,nome da coluna 2,nome da coluna 3
dados da primeira linha 1,dados da primeira linha 2,dados da primeira linha 3
dados da segunda linha 1,dados da segunda linha 2,dados da segunda linha 3
...

### Módulo CSV no Python

Embora o Python tenha a função embutida open() para trabalhar com arquivos CSV ou qualquer outro arquivo de texto simples, existe um módulo csv dedicado que implementa classes para ler e escrever dados no formato csv, o que torna o trabalho com arquivos CSV muito mais fácil.

### Funções importantes do módulo CSV

    csv.field_size_limit – retorna o tamanho máximo do campo
    csv.get_dialect – obtém o dialeto associado ao nome
    csv.list_dialects – mostra todos os dialetos registrados
    csv.reader – lê dados de um arquivo csv
    csv.register_dialect - associa dialeto ao nome
    csv.writer – escreve dados em um arquivo csv
    csv.unregister_dialect - exclui o dialeto associado ao nome no registro de dialetos
    csv.QUOTE_ALL - Coloca aspas em tudo, independentemente do tipo.
    csv.QUOTE_MINIMAL - Coloca aspas em campos com caracteres especiais
    csv.QUOTE_NONNUMERIC - Coloca aspas em todos os campos que não são valores numéricos
    csv.QUOTE_NONE – Não coloca aspas em nada na saída

### Como usar o módulo csv?

primeiro importe o módulo csv no seu programa python.

    import csv

As funções writer e reader permitem editar, modificar e transformar os dados em um arquivo CSV.

Como Ler um Arquivo CSV:

Para ler dados de arquivos CSV, usamos a função reader para gerar um objeto reader.

Por exemplo:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Aqui, primeiro abrimos o arquivo CSV no modo de LEITURA e nomeamos o objeto de arquivo como csvfile. Usamos o gerenciador de contexto para abrir o arquivo para que não precisamos nos preocupar em fechar o arquivo. A função csv.reader leva o objeto de arquivo como entrada e retorna um objeto iterável. Salvamos o objeto iterável como csvreader.

Como sabemos, csvreader é um objeto iterável e, portanto, podemos iterar usando um loop for:

exemplo 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

O código acima imprimirá todas as linhas que lemos do arquivo csv. Observe que abrimos o arquivo com o modo 'r' quando ele já existe.

O que vem a seguir?

cvreader é um objeto iterável. Portanto, o método .next() retorna a linha atual e avança o iterador para a próxima linha.

exemplo 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

No exemplo 1, você veria todas as linhas impressas no console, junto com o cabeçalho. No exemplo 2, o método .next() lê o cabeçalho no objeto fields e avança o iterador para a próxima linha e, portanto, todas as linhas são impressas, exceto o cabeçalho.

Como escrever em um Arquivo CSV:

Para escrever em um arquivo csv, o módulo csv fornece a função csv.writer. Para escrever dados, primeiro abrimos o arquivo CSV no modo de ESCRITA ('w'). O objeto de arquivo é nomeado como csvfile. Salvamos o objeto csv.writer como csvwriter.

Exemplo:
    #declara header
    fields = ['column1','column2', 'column3']

    #declara linhas
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

No exemplo acima, a função writerow() escreverá uma única linha que é o objeto fields, enquanto o método writerows() escreverá toda a lista de linhas definidas acima no arquivo csv.

Agora, vamos um passo adiante. Leia o conteúdo de um arquivo csv e escreva em outro arquivo csv.

Exemplo:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # armazena os cabeçalhos e avança o ponteiro do leitor
            csvwriter.writerow(header) #escreve o cabeçalho no novo arquivo
            for row in reader:
                csvwriter.writerow(row)

Aqui, estamos abrindo 'newfilename.csv' no modo 'W' como f2 e abrindo 'mycsvfile.csv' no modo 'r' como f1. Estamos usando as funções .next(), .reader(), .writer(), .writerow() do módulo csv. Usando .next(), estamos avançando o ponteiro do leitor e usando csvwriter.writerow() estamos escrevendo a linha de entrada uma de cada vez.

### Classes DictReader e DictWriter no Python

abaixo estão duas classes importantes no python para ler e escrever arquivos csv.

classe csv.DictWriter
classe csv.DictReader

Os DictReader e DictWriter são classes disponíveis no Python para leitura e escrita em CSV. Embora sejam semelhantes às funções reader e writer, essas classes usam objetos de dicionário para ler e escrever em arquivos csv.

DictReader:

Cria um objeto que mapeia as informações lidas em um dicionário cujas chaves são fornecidas pelo parâmetro fieldnames. Este parâmetro é opcional, mas quando não especificado no arquivo, os dados da primeira linha se tornam as chaves do dicionário.

Exemplo csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Exemplo:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

A classe csv.DictWriter opera como um writer regular, mas mapeia dicionários do Python em linhas CSV. O parâmetro fieldnames é uma sequência de chaves que identifica a ordem em que os valores no dicionário passados para o método writerow() são escritos no arquivo CSV. A classe é definida como csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Exemplo:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})

Exercício
--------

Neste exercício, você trabalhará com dados CSV. Sua tarefa é criar um programa Python que leia dados de um arquivo CSV e os escreva em outro arquivo CSV, garantindo que apenas linhas onde o valor na primeira coluna seja maior que 50 sejam incluídas no arquivo de saída.