Tutorial
--------

Jeśli to twój pierwszy kontakt z programowaniem, to wyobraź sobie, że zmienne to takie wydzielone miejsca w pamięci komputera, gdzie możesz przechowywać potrzebne ci dane. Python posiada kilka wbudowanych typów danych jak liczby całkowite, rzeczywiste itp. Przy tworzeniu zmiennej nie musisz podawać jaki typ danych będziesz przechowywać w zmiennej. Po prostu podajesz nazwę zmiennej i przypisujesz jej wartość. Z tego powodu mówi się, że python jest językiem typowanym dynamicznie.

    # tak tworzysz nowa zmienna
    zmienna = 5

Python jest językiem obiektowym i każda zmienna w Pythonie jest obiektem. Jeśli nie wiesz o co chodzi, to wyobraź sobie, że obiekt to zbiór danych liczbowych i tekstowych oraz tzw. metod, które operują na tych wewnętrznych danych. Te dane i metody są ze sobą ściśle powiązane, co ułatwia pracę nad programem. Kwestią obiektowości zajmiemy się jednak później.

Omówimy kilka podstawowych typów zmiennych.

### Liczby

Python obsługuje dwa typy liczbowe – liczby całkowite (ang. _integers_ w skrócie `int`) i rzeczywiste (`float`). Obsługiwane są także liczby zespolone, ale nie będziemy się nimi zajmować.

Aby stworzyć nową zmienną całkowitą, użyj następującej składni:

    calkowita = 7

Liczbę rzeczywistą możesz uzyskać na dwa sposoby:

    rzeczywista = 7.5
    rzeczywista = float(38)

Liczby rzeczywiste zazwyczaj zapisuje się w pamięci komputera za pomocą tzw. techniki zmiennego przecinka (z ang. _floating point_), stąd często stosowana nazwa – liczba zmiennoprzecinkowa. Praktyczną konsekwencją jest to, że liczba jest zapisywana z określoną dokładnością.

W poniższym fragmencie kodu użyto zapisu pozwalającego ustawić precyzję, z jaką wyświetlaną jest liczba i omówimy go później. Tymczasem wprowadź kod do interpretera i zaobserwuj różnice.

    x = 4.3
    print x
    print '%.20f' % x
    print x # print nie zmienil zawartosci zmiennej x

Istnieje również technika tzw. stałego przecinka, ale jest używana rzadziej i w komputerach o małej mocy obliczeniowej.

### Napisy

Napis (`string`) jest inicjowany za pomocą pojedyńczego lub podwójnego cudzysłowu.

    napis1 = 'witaj'
    napis2 = "witaj"
    napis 1 == napis2 # zwroci "True"

Różnica między nimi polega na tym, że dzięki użyciu podwójnego cudzysłowu można bez przeszkód używać apostrofów (podczas gdy oznaczałyby koniec napisu przy użyciu pojedynczego cudzysłowu).

    napis = "Nie martw sie o 'pojedyncze' cudzyslowy."

Napisy można definiować na jeszcze kilka innych sposobów, które ułatwiają dołączanie takich znaków jak powrót karetki, odwrotne ukośniki i znaki Unicode. Wykracza to poza tematykę samouczka, ale jest opisane w [dokumentacji Pythona](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Na liczbach i stringach można wykonywać proste operacje:

    jeden = 1
    dwa = 2
    trzy = jeden + dwa
    print trzy

    witaj = "witaj"
    swiecie = "swiecie"
    witajswiecie = witaj + " " + swiecie
    print witajswiecie

Możliwe jest "jednoczesne" przypisanie wartości kilku różnym zmiennym w tej samej linijce jak w przykładzie poniżej.

    a, b = 3, 4
    print a
    print b

Operacje, które mieszają ze sobą liczby i napisy nie są obsługiwane:

    # To nie bedzie dzialac!
    print jeden + dwa + witaj

### Ćwiczenie

Stwórz zmienne zawierające napis, liczbę całkowitą i rzeczywistą. Napis powinien być nazwany `napis` i zawierać słówko "witaj". Zmienną rzeczywistą nazwij `rzeczywista` i umieść w niej liczbę równą 10. Zmienną całkowitą nazwij `calkowita` i przypisz jej wartość 20. Jeśli nie masz pomysłu na 10, to spójrz jeszcze raz na przykład u góry.

Drobna uwaga dla ciekawskich. Instrukcja is instance sprawdza, czy zmienna o podanej nazwie jako druga jest typem o nazwie podanej jako druga w nawiasach.

Tutorial Code
-------------
# zmien ponizszy kod
napis = None
rzeczywista = None
calkowita = None

# sprawdzenie kodu
if napis == "witaj":
    print "Napis: %s" % napis
if isinstance(rzeczywista, float) and rzeczywista == 10.0:
    print "Liczba rzeczywista: %d" % rzeczywista
if isinstance(calkowita, int) and calkowita == 20:
    print "Liczba calkowita: %d" % calkowita

Expected Output
---------------
Napis: witaj
Liczba rzeczywista: 10
Liczba calkowita: 20

Solution
--------
