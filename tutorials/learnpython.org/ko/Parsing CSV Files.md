### CSV란 무엇인가?
CSV는 'Comma Separated Values'의 약자입니다. CSV 형식은 데이터베이스와 스프레드시트에서 가장 일반적인 가져오기 및 내보내기 형식입니다. CSV 파일은 데이터 목록을 포함하는 간단한 텍스트 파일입니다. 대부분 데이터 구분 기호로 쉼표(,) 문자를 사용하지만, 때때로 세미콜론이나 탭과 같은 다른 문자도 사용됩니다.

샘플 CSV 데이터:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### 파이썬의 CSV 모듈
파이썬에는 CSV 파일이나 다른 일반 텍스트 파일을 다루기 위한 내장 함수인 open()이 있지만, CSV 형식의 데이터를 읽고 쓰기 위한 클래스를 구현하여 CSV 파일을 더 쉽게 다룰 수 있게 해주는 전용 csv 모듈이 있습니다.

### CSV 모듈의 중요한 함수

    csv.field_size_limit – 최대 필드 크기 반환
    csv.get_dialect – 이름과 연결된 dialect 가져오기
    csv.list_dialects – 등록된 모든 dialect 표시
    csv.reader – csv 파일에서 데이터 읽기
    csv.register_dialect - 이름과 dialect 연결
    csv.writer – csv 파일에 데이터 쓰기
    csv.unregister_dialect - 이름과 연결된 dialect 삭제하기
    csv.QUOTE_ALL - 유형에 관계없이 모든 것을 인용합니다.
    csv.QUOTE_MINIMAL - 특수 문자가 있는 필드 인용
    csv.QUOTE_NONNUMERIC - 숫자가 아닌 모든 필드 인용
    csv.QUOTE_NONE – 출력을 인용하지 않음

### csv 모듈을 어떻게 사용합니까?
파이썬 프로그램에 먼저 csv 모듈을 가져옵니다.

    import csv

writer와 reader 함수는 CSV 파일의 데이터를 편집, 수정 및 변환할 수 있게 해줍니다.

CSV 파일 읽는 방법 :-

CSV 파일에서 데이터를 읽으려면 reader 함수를 사용하여 reader 객체를 생성합니다.

예 :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

여기서 우리는 먼저 CSV 파일을 읽기 모드로 열고 파일 객체를 csvfile이라고 명명합니다. 파일을 열 때 파일을 닫는 것에 대해 걱정할 필요가 없도록 컨텍스트 매니저를 사용합니다. csv.reader 함수는 파일 객체를 입력으로 받아 반복 가능한 객체를 반환합니다. 우리는 반복 가능한 객체를 csvreader로 저장합니다.

csvreader가 반복 가능한 객체라는 것은 이미 알고 있으므로, for 루프를 사용하여 반복할 수 있습니다:

예제 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

위의 코드는 CSV 파일에서 읽은 모든 행을 출력합니다. 'r' 모드로 파일을 열면, 파일이 이미 존재할 경우에만 열립니다.

다음은 무엇인가요?

cvreader는 반복 가능한 객체입니다. 따라서 .next() 메서드는 현재 행을 반환하고 이터레이터를 다음 행으로 이동시킵니다.

예제 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

예제 1에서는 헤더와 함께 모든 행이 콘솔에 출력됩니다. 예제 2에서는 .next() 메서드가 fields 객체에 헤더를 읽어들이고 이터레이터를 다음 행으로 이동시키므로 헤더를 제외한 모든 행이 출력됩니다.

CSV 파일에 쓰는 방법-

csv 모듈은 csv.writer 함수를 제공하여 csv 파일에 쓰기를 수행할 수 있게 해줍니다. 데이터를 쓰기 위해 먼저 CSV 파일을 쓰기 모드('w')로 열어야 합니다. 파일 객체는 csvfile로 명명됩니다. 우리는 csv.writer 객체를 csvwriter로 저장합니다.

예제:
    #헤더 선언
    fields = ['column1','column2', 'column3']

    #행 선언
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

위의 예제에서 writerow() 함수는 fields 객체를 단일 행으로 작성하고 writerows() 메서드는 위에서 정의한 전체 행 목록을 csv 파일에 작성합니다.

이제 한 단계 더 나아가 봅시다. 한 csv 파일의 내용을 읽고 다른 csv 파일에 씁니다.

예제:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # 헤더를 저장하고 reader 포인터를 앞당김
            csvwriter.writerow(header) # 새 파일에 헤더를 씀
            for row in reader:
                csvwriter.writerow(row)

여기서, 우리는 'newfilename.csv'를 'W' 모드로 열고 f2로, 'mycsvfile.csv'를 'r' 모드로 열고 f1로 명명하고 있습니다. 우리는 .next(), .reader(), .writer(), .writerow() 등의 csv 모듈 함수들을 사용하고 있습니다. .next()를 사용하여 reader 포인터를 이동시키고, csvwriter.writerow()를 사용하여 하나씩 들어오는 행을 씁니다.

### 파이썬의 DictReader 및 DictWriter 클래스

다음은 csv 파일을 읽고 쓰기 위한 파이썬에서 중요한 두 가지 클래스입니다.

csv.Dictwriter 클래스  
csv.DictReader 클래스

DictReader와 DictWriter는 Python에서 CSV를 읽고 쓰기 위한 클래스입니다. reader 및 writer 함수와 유사하지만, 이 클래스들은 사전 객체를 사용하여 csv 파일을 읽고 씁니다.

DictReader:

읽은 정보를 fieldnames 매개변수에 의해 제공된 키가 있는 사전에 매핑하는 객체를 생성합니다. 이 매개변수는 선택 사항이지만, 파일에서 지정하지 않으면 첫 번째 행 데이터가 사전의 키가 됩니다.

예: csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

예제:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

csv.DictWriter 클래스는 일반적인 writer와 유사하게 작동하지만, Python 사전을 CSV 행으로 매핑합니다. fieldnames 매개변수는 writerow() 메서드로 전달된 사전의 값이 CSV 파일에 기록되는 순서를 식별하는 키의 시퀀스입니다. 클래스는 csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)로 정의됩니다.

예제:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercise
--------

이 연습에서는 CSV 데이터를 다룰 것입니다. 여러분의 과제는 CSV 파일에서 데이터를 읽고 첫 번째 열의 값이 50보다 큰 행만 출력 파일에 포함되도록 하는 파이썬 프로그램을 만드는 것입니다.