Nội dung dịch:

Chuỗi là các đoạn văn bản. Chúng có thể được định nghĩa là bất cứ thứ gì nằm giữa dấu ngoặc kép:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Như bạn có thể thấy, điều đầu tiên bạn học được là in một câu đơn giản. Câu này đã được Python lưu trữ dưới dạng một chuỗi. Tuy nhiên, thay vì in chuỗi ra ngay lập tức, chúng ta sẽ khám phá các thao tác khác nhau bạn có thể thực hiện với chúng.
Bạn cũng có thể sử dụng dấu ngoặc đơn để gán một chuỗi. Tuy nhiên, bạn sẽ gặp khó khăn nếu giá trị được gán tự nó chứa dấu ngoặc đơn. Ví dụ, để gán chuỗi trong dấu ngoặc này (dấu ngoặc đơn là ' ') bạn cần sử dụng dấu ngoặc kép như sau

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Điều này in ra 12, bởi vì "Hello world!" dài 12 ký tự, bao gồm cả dấu câu và khoảng trắng.

    astring = "Hello world!"
    print(astring.index("o"))

Điều này in ra 4, vì vị trí của lần xuất hiện đầu tiên của chữ "o" cách ký tự đầu tiên 4 ký tự. Chú ý rằng có hai chữ "o" trong cụm từ - phương pháp này chỉ nhận ra chữ "o" đầu tiên.

Nhưng tại sao nó không in ra 5? Phải chăng "o" là ký tự thứ năm trong chuỗi? Để đơn giản, Python (và hầu hết các ngôn ngữ lập trình khác) bắt đầu từ 0 thay vì 1. Vì vậy, chỉ số của "o" là 4.

    astring = "Hello world!"
    print(astring.count("l"))

Đối với những bạn sử dụng kiểu chữ lố bịch, đó là chữ l thường, không phải số một. Điều này đếm số lượng chữ "l" trong chuỗi. Do đó, nó sẽ in ra 3.

    astring = "Hello world!"
    print(astring[3:7])

Điều này in ra một phần của chuỗi, bắt đầu từ chỉ số 3 và kết thúc ở chỉ số 6. Nhưng tại sao là 6 chứ không phải 7? Một lần nữa, hầu hết các ngôn ngữ lập trình làm điều này - nó làm cho việc tính toán trong những dấu ngoặc trở nên dễ dàng hơn.

Nếu bạn chỉ đưa vào một số trong dấu ngoặc, nó sẽ đưa ra ký tự duy nhất tại chỉ số đó. Nếu bạn để trống số đầu tiên nhưng giữ dấu hai chấm, nó sẽ đưa ra một phần từ đầu đến số bạn đã để lại. Nếu bạn để trống số thứ hai, nó sẽ đưa ra một phần từ số đầu tiên đến cuối.

Bạn thậm chí có thể đưa vào các số âm trong dấu ngoặc. Chúng là cách dễ dàng để bắt đầu từ cuối chuỗi thay vì bắt đầu từ đầu. Bằng cách này, -3 có nghĩa là "ký tự thứ 3 từ cuối".

    astring = "Hello world!"
    print(astring[3:7:2])

Điều này in các ký tự của chuỗi từ 3 đến 7 bỏ qua một ký tự. Đây là cú pháp phần mở rộng lát cắt. Dạng tổng quát là [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Lưu ý rằng cả hai đều tạo ra cùng một đầu ra.

Không có hàm nào như strrev trong C để đảo ngược một chuỗi. Nhưng với loại cú pháp lát cắt đã đề cập ở trên, bạn có thể dễ dàng đảo ngược một chuỗi như sau

    astring = "Hello world!"
    print(astring[::-1])

Điều này

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Điều này tạo ra một chuỗi mới với tất cả các chữ cái được chuyển đổi thành chữ in hoa và in thường, tương ứng.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Điều này được sử dụng để xác định xem chuỗi có bắt đầu bằng một cái gì đó hoặc kết thúc bằng một cái gì đó, tương ứng. Cái đầu tiên sẽ in ra True, vì chuỗi bắt đầu bằng "Hello". Cái thứ hai sẽ in ra False, vì chuỗi chắc chắn không kết thúc bằng "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Điều này tách chuỗi thành một loạt các chuỗi nhóm lại với nhau trong danh sách. Vì ví dụ này tách ra tại vị trí có khoảng trắng, mục đầu tiên trong danh sách sẽ là "Hello", và mục thứ hai sẽ là "world!".

Bài tập
--------

Cố gắng sửa mã để in ra thông tin đúng bằng cách thay đổi chuỗi.