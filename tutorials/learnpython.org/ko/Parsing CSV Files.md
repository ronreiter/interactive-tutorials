### What is CSV?
CSV는 'Comma Separated Values'의 약자입니다. CSV 형식은 데이터베이스 및 스프레드시트에서 가장 일반적인 가져오기 및 내보내기 형식입니다. CSV 파일은 데이터 목록을 포함하는 간단한 텍스트 파일입니다. 대부분의 경우 데이터 구분자로 쉼표(,) 문자를 사용하지만, 때로는 세미콜론이나 탭과 같은 다른 문자를 사용하기도 합니다.

### CSV module in Python
Python에는 CSV 파일이나 기타 평문 텍스트 파일을 처리하기 위한 내장 함수인 open()이 있지만, CSV 형식으로 데이터를 읽고 쓰는 클래스를 구현한 전용 csv 모듈도 있어 CSV 파일 작업을 훨씬 더 쉽게 만들어 줍니다.

### CSV module important functions

### How do you use csv module?
먼저 csv 모듈을 Python 프로그램에 import합니다.

writer 및 reader 함수는 CSV 파일의 데이터를 편집, 수정 및 변환할 수 있게 해줍니다.

CSV 파일을 읽는 방법:

CSV 파일에서 데이터를 읽으려면 reader 함수를 사용하여 reader 객체를 생성합니다.

여기에서는 CSV 파일을 읽기 모드로 열고 파일 객체의 이름을 csvfile로 지정합니다. 파일을 열 때는 컨텍스트 관리자를 사용하여 파일을 닫을 필요가 없도록 합니다. csv.reader 함수는 파일 객체를 입력으로 받아 반복 가능한 객체를 반환합니다. 이 반복 가능한 객체를 csvreader로 저장합니다.

csvreader는 반복 가능한 객체이므로 for 루프를 사용하여 반복할 수 있습니다:

예제 1:

위의 코드는 CSV 파일에서 읽은 모든 행을 출력합니다. 이미 존재하는 파일을 열 때는 'r' 모드를 사용하는 것을 잊지 마세요.

다음은 무엇입니까?

cvreader는 반복 가능한 객체입니다. 따라서 .next() 메서드는 현재 행을 반환하고 반복자를 다음 행으로 넘깁니다.

예제 2:

예제 1에서는 헤더와 함께 모든 행이 콘솔에 출력됩니다. 예제 2에서는 .next() 메서드가 헤더를 읽어 fields 객체에 저장하고 반복자를 다음 행으로 이동시켜 모든 행이 헤더 없이 출력됩니다.

CSV 파일에 쓰는 방법:

csv 모듈은 csv.writer 함수를 제공하여 csv 파일에 쓸 수 있습니다. 데이터를 쓰기 위해 먼저 CSV 파일을 쓰기 모드('w')로 엽니다. 파일 객체의 이름을 csvfile로 지정합니다. csv.writer 객체를 csvwriter로 저장합니다.

위의 예제에서 writerow() 함수는 fields 객체라는 단일 행을 작성하며, writerows() 메서드는 위에서 정의한 행의 전체 목록을 CSV 파일에 씁니다.

이제 한 단계 더 나아가서, 하나의 csv 파일의 내용을 읽고 다른 csv 파일에 쓰는 방법을 알아봅시다.

위의 코드는 'newfilename.csv'를 'W' 모드로 열고 'mycsvfile.csv'를 'r' 모드로 연 것입니다. csv 모듈의 .next(), .reader(), .writer(), .writerow() 함수를 사용하고 있습니다. .next()를 사용하여 리더 포인터를 이동시키고, csvwriter.writerow()를 사용하여 들어오는 행을 한 번에 하나씩 작성합니다.

### DictReader and DictWriter classes in Python

아래는 CSV 파일을 읽고 쓰기 위한 두 가지 중요한 Python 클래스입니다.

DictReader 및 DictWriter는 Python에서 CSV를 읽고 쓰기 위한 클래스입니다. 이 클래스들은 reader 및 writer 함수와 유사하지만, Python의 dictionary 객체를 사용하여 CSV 파일을 읽고 씁니다.

DictReader:

CSV에서 읽은 정보를 Dictionary로 매핑하는 객체를 생성합니다. 이 dictionary의 키는 fieldnames 매개변수로 주어진 값을 사용합니다. 이 매개변수는 선택 사항이지만 파일에서 지정되지 않은 경우, 첫 번째 행의 데이터가 dictionary의 키가 됩니다.

DictWriter:

csv.DictWriter 클래스는 일반적인 writer와 같이 동작하지만, Python의 dictionary를 CSV의 행으로 매핑합니다. fieldnames 매개변수는 writerow() 메서드에 전달된 dictionary가 CSV 파일에 쓰여지는 순서를 식별하는 키의 시퀀스입니다. 클래스는 csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)로 정의됩니다.

Exercise
--------

이 연습에서는 CSV 데이터를 다룰 것입니다. 첫 번째 열의 값이 50보다 큰 행만 출력 파일에 포함되도록 하여 CSV 파일에서 데이터를 읽고 다른 CSV 파일에 쓰는 Python 프로그램을 작성하는 것이 과제입니다.