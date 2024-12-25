Map, Filter, và Reduce là những mô hình của lập trình hàm. Chúng cho phép lập trình viên (bạn) viết mã đơn giản và ngắn gọn hơn, mà không cần quá bận tâm về các chi tiết như vòng lặp và nhánh.

Về cơ bản, ba hàm này cho phép bạn áp dụng một hàm trên một số lượng các iterable, chỉ trong một bước. ```map``` và ```filter``` được tích hợp sẵn trong Python (trong module ```__builtins__```) và không cần import. ```reduce```, tuy nhiên, cần được import vì nó nằm trong module ```functools```. Hãy hiểu rõ hơn về cách chúng hoạt động, bắt đầu với ```map```.

#### Map
Hàm ```map()``` trong python có cú pháp như sau:

```map(func, *iterables)```

Trong đó ```func``` là hàm mà mỗi phần tử trong ```iterables``` (nhiều đến chừng nào cũng được) sẽ được áp dụng. Lưu ý dấu sao (````*````) trên ```iterables```? Nó có nghĩa là có thể có bao nhiêu iterable cũng được, miễn là ```func``` có số lượng tham số đầu vào chính xác như vậy. Trước khi chúng ta đi vào một ví dụ, điều quan trọng cần lưu ý là:

1. Trong Python 2, hàm ```map()``` trả về một danh sách. Tuy nhiên, trong Python 3, hàm này trả về một ```map object``` là một đối tượng generator. Để nhận kết quả dưới dạng danh sách, hàm tích hợp sẵn ```list()``` có thể được gọi trên đối tượng map. Tức là ```list(map(func, *iterables))```
2. Số đối số cho ```func``` phải bằng số lượng của những ```iterables``` được liệt kê.

Hãy xem những quy tắc này được áp dụng như thế nào trong ví dụ sau đây.

Giả sử tôi có một danh sách (```iterable```) tên của các thú cưng yêu thích của tôi, tất cả đều bằng chữ thường và tôi cần chúng ở dạng chữ hoa. Theo cách truyền thống, trong phong cách python thông thường, tôi sẽ làm như sau:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Mà sẽ xuất ra ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Với các hàm ```map()```, điều đó không chỉ dễ dàng hơn mà còn linh hoạt hơn nhiều. Tôi chỉ cần làm:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Mà cũng sẽ xuất ra kết quả tương tự. Lưu ý rằng với cú pháp ```map()``` được định nghĩa ở trên, trong trường hợp này ```func``` là ```str.upper``` và ```iterables``` là danh sách ```my_pets```-- chỉ một iterable. Cũng lưu ý rằng chúng tôi đã không gọi hàm ```str.upper``` (làm như sau: ```str.upper()```), vì hàm map làm điều đó cho chúng ta trên _mỗi phần tử trong danh sách ```my_pets```_.

Điều quan trọng cần lưu ý là hàm ```str.upper``` chỉ yêu cầu **một** đối số theo định nghĩa và vì vậy chúng ta chỉ truyền **một** iterable cho nó. Vì vậy, _nếu hàm mà bạn đang truyền yêu cầu hai, ba, hoặc n đối số_, thì _bạn cần truyền vào hai, ba hoặc n iterable cho nó_. Để làm rõ điều này, hãy xem một ví dụ khác.

Giả sử tôi có một danh sách diện tích hình tròn mà tôi đã tính ở đâu đó, tất cả có năm chữ số thập phân. Và tôi cần làm tròn mỗi phần tử trong danh sách lên đến chữ số thập phân của nó, có nghĩa là tôi phải làm tròn phần tử đầu tiên trong danh sách đến một chữ số thập phân, phần tử thứ hai trong danh sách hai chữ số thập phân, phần tử thứ ba trong danh sách ba chữ số thập phân, v.v. Với ```map()```, đây là điều dễ dàng. Hãy xem làm thế nào.

Python đã ban cho chúng ta hàm tích hợp sẵn ```round()``` mà nhận hai đối số -- số để làm tròn và số chữ số thập phân để làm tròn số đó lên. Vì vậy, bởi vì hàm đó yêu cầu **hai** đối số, chúng ta cần truyền vào **hai** iterable.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Thấy vẻ đẹp của ```map()``` không? Bạn có thể tưởng tượng sự linh hoạt mà điều này gợi lên không?

Hàm ```range(1, 7)``` hoạt động như là đối số thứ hai cho hàm ```round``` (số chữ số thập phân cần thiết cho mỗi lần lặp). Vì vậy khi ```map``` lặp qua ```circle_areas```, trong lần lặp đầu tiên, phần tử đầu tiên của ```circle_areas```, ```3.56773``` được truyền cùng với phần tử đầu tiên của ```range(1,7)```, ```1``` cho ```round```, khiến nó thực sự trở thành ```round(3.56773, 1)```. Trong lần lặp thứ hai, phần tử thứ hai của ```circle_areas```, ```5.57668``` cùng với phần tử thứ hai của ```range(1,7)```, ```2``` được truyền cho ```round``` khiến nó trở thành ```round(5.57668, 2)```. Điều này xảy ra cho đến khi danh sách ```circle_areas``` kết thúc.

Tôi chắc rằng bạn đang tự hỏi: "Điều gì sẽ xảy ra nếu tôi truyền vào một iterable ít hơn hoặc nhiều hơn độ dài của iterable đầu tiên? Đó là, điều gì sẽ xảy ra nếu tôi truyền ```range(1, 3)``` hoặc ```range(1, 9999)``` như là iterable thứ hai trong hàm trên". Và câu trả lời rất đơn giản: không gì cả! Được rồi, điều đó không đúng hoàn toàn. "Không gì" xảy ra theo nghĩa là hàm ```map()``` sẽ không gây ra lỗi ngoại lệ nào cả, nó sẽ chỉ lặp qua các phần tử cho đến khi nó không thể tìm thấy một tham số thứ hai cho hàm, tại điểm đó nó đơn giản dừng lại và trả về kết quả.

Vì vậy, ví dụ, nếu bạn đánh giá ```result = list(map(round, circle_areas, range(1, 3)))```, bạn sẽ không gặp lỗi nào cả mặc dù độ dài của ```circle_areas``` và ```range(1, 3)``` khác nhau. Thay vào đó, đây là những gì Python làm: Nó lấy phần tử đầu tiên của ```circle_areas``` và phần tử đầu tiên của ```range(1,3)``` và truyền nó cho ```round```. ```round``` đánh giá nó rồi lưu lại kết quả. Sau đó nó tiến đến lần lặp thứ hai, phần tử thứ hai của ```circle_areas``` và phần tử thứ hai của ```range(1,3)```, ```round``` lại lưu lại nó. Bây giờ, trong lần lặp thứ ba (```circle_areas``` có một phần tử thứ ba), Python lấy phần tử thứ ba của ```circle_areas``` và cố gắng lấy phần tử thứ ba của ```range(1,3)``` nhưng vì ```range(1,3)``` không có một phần tử thứ ba, Python đơn giản dừng lại và trả về kết quả, mà trong trường hợp này chỉ là ```[3.6, 5.58]```.

Tiến hành thử xem.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

Điều tương tự cũng xảy ra nếu ```circle_areas``` ít hơn độ dài của iterable thứ hai. Python đơn giản dừng lại khi nó không thể tìm thấy phần tử tiếp theo trong một trong những iterable.

Để củng cố kiến thức của chúng ta về hàm ```map()```, chúng ta sẽ sử dụng nó để triển khai hàm ```zip()``` của riêng chúng ta. Hàm ```zip()``` là một hàm có tác dụng lấy một số lượng các iterable và sau đó tạo ra một tuple chứa mỗi phần tử trong các iterable. Giống như ```map()```, trong Python 3, nó trả về một đối tượng generator, mà có thể dễ dàng chuyển đổi thành một danh sách bằng cách gọi hàm tích hợp sẵn ```list``` trên nó. Sử dụng phiên làm việc diễn giải dưới đây để hiểu rõ về ```zip()``` trước khi chúng ta tạo hàm chúng ta với ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Như một phần thưởng, bạn có đoán được điều gì sẽ xảy ra trong phiên trên nếu ```my_strings``` và ```my_numbers``` không có cùng độ dài không? Không à? thử đi! Thay đổi độ dài của một trong số chúng.

Tiến đến hàm ```zip()``` của riêng chúng ta!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Chỉ cần nhìn vào đó thôi! Chúng ta có kết quả giống như ```zip```.

Bạn có nhận thấy rằng tôi thậm chí không cần tạo một hàm bằng cách sử dụng phương pháp tiêu chuẩn ```def my_function()``` không? Đó là cách linh hoạt của ```map()```, và Python nói chung, là! Tôi chỉ đơn giản sử dụng một hàm ```lambda```. Điều này không có ý nói rằng việc sử dụng phương pháp định nghĩa hàm tiêu chuẩn (của ```def function_name()```) không được phép, nó vẫn được phép. Tôi chỉ đơn giản chọn viết ít mã hơn (theo "phong cách Python").

Đó là tất cả về map. Tiếp theo là ```filter()```

#### Filter
Trong khi ```map()``` truyền từng phần tử trong iterable qua một hàm và trả về kết quả của tất cả phần tử đã qua hàm, thì ```filter()```, trước tiên, yêu cầu hàm phải trả về các giá trị boolean (đúng hoặc sai) và sau đó truyền từng phần tử trong iterable qua hàm, "lọc" ra những phần tử mà sai. Nó có cú pháp như sau:

```filter(func, iterable)```

Những điểm sau cần được lưu ý về ```filter()```:

1. Khác với ```map()```, chỉ cần duy nhất một iterable.
2. Đối số ```func``` yêu cầu trả về kiểu boolean. Nếu không, ```filter``` chỉ đơn giản trả về ```iterable``` đã truyền vào nó. Và vì chỉ cần duy nhất một iterable, điều đó ngụ ý rằng ```func``` chỉ có thể lấy một đối số.
3. ```filter``` truyền từng phần tử trong iterable qua ```func``` và chỉ trả về những phần tử nào mà đánh giá là đúng. Ý tôi là, nó đã được nêu rõ trong tên -- một "bộ lọc".

Hãy xem một số ví dụ

Danh sách (```iterable```) sau đây là điểm số của 10 học sinh trong một kỳ thi hóa học. Hãy lọc ra những người đã vượt qua với điểm số hơn 75...sử dụng ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Ví dụ tiếp theo sẽ là một trình phát hiện palindrome. Một "palindrome" là một từ, cụm từ, hoặc chuỗi đọc ngược lại giống như khi đọc xuôi. Hãy lọc ra những từ là palindrome từ một tuple (```iterable```) của các từ nghi ngờ là palindrome.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Mà sẽ xuất ra ```['madam', 'anutforajaroftuna']```.

Khá gọn gàng đúng không? Cuối cùng, ```reduce()```

#### Reduce
```reduce``` áp dụng một hàm **có hai đối số** một cách tích lũy cho các phần tử của một iterable, tùy chọn bắt đầu với một đối số đầu tiên. Nó có cú pháp như sau:

```reduce(func, iterable[, initial])```

Trong đó ```func``` là hàm mà mỗi phần tử trong ```iterable``` sẽ được áp dụng để tính toán tích lũy và ```initial``` là giá trị tùy chọn mà được đặt trước các phần tử của iterable trong phép tính, và đóng vai trò là mặc định khi iterable trống. Những điều sau đây nên được lưu ý về ```reduce()```:
1. ```func``` yêu cầu hai đối số, đối số đầu tiên trong số đó là phần tử đầu tiên trong ```iterable``` (nếu ```initial``` không được cung cấp) và phần tử thứ hai trong ```iterable```. Nếu ```initial``` được cung cấp, thì nó trở thành đối số đầu tiên cho ```func``` và phần tử đầu tiên trong ```iterable``` trở thành phần tử thứ hai.
2. ```reduce``` "giảm" (tôi biết, xin thứ lỗi) ```iterable``` thành một giá trị đơn lẻ.

Như thường lệ, hãy xem một số ví dụ.

Hãy tạo phiên bản của riêng chúng ta của hàm tích hợp sẵn ```sum()``` trong Python. Hàm ```sum()``` trả về tổng của tất cả các phần tử trong iterable đã truyền vào nó.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Kết quả, như bạn mong đợi, là ```68```.

Vậy, điều gì đã xảy ra?

Như thường lệ, tất cả đều thuộc về các lần lặp: ```reduce``` lấy phần tử đầu tiên và phần tử thứ hai trong ```numbers``` và truyền chúng lần lượt vào ```custom_sum```. ```custom_sum``` tính toán tổng của chúng và trả về cho ```reduce```. ```reduce``` sau đó lấy kết quả đó và sử dụng nó như là phần tử đầu tiên cho ```custom_sum``` và lấy phần tử tiếp theo (thứ ba) trong ```numbers``` làm phần tử thứ hai cho ```custom_sum```. Nó làm điều này liên tục (tích lũy) cho đến khi ```numbers``` hết phần tử.

Hãy xem điều gì xảy ra khi tôi sử dụng giá trị tùy chọn ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Kết quả như bạn mong đợi, là ```78``` vì ```reduce```, ban đầu, sử dụng ```10``` như là đối số đầu tiên cho ```custom_sum```.

Đó là tất cả về Map, Reduce, và Filter trong Python. Thử các bài tập dưới đây để giúp xác định sự hiểu biết của bạn về mỗi hàm.

Exercise
--------
Trong bài tập này, bạn sẽ sử dụng mỗi trong số ```map```, ```filter```, và ```reduce``` để khắc phục mã bị lỗi.