Taking Input and showing Output in required way plays an important role in interactive coding. So lets focus on input and output of various data types.

###raw_input()
điều này được sử dụng để lấy đầu vào miễn là nó đạt đến cuối dòng. Lưu ý rằng không nên có khoảng trắng. Việc lấy đầu vào kết thúc bằng một ký tự dòng mới và nếu có bất kỳ khoảng trắng nào trong dòng nhập sẽ dẫn đến lỗi

    # Prints out the input received from stdin
    astring=raw_input()# give hello as input
    print raw_input()

sau khi lấy đầu vào, chúng ta có thể chuyển đổi chúng thành kiểu dữ liệu cần thiết của chúng ta bằng cách sử dụng các hàm như int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
điều này đặc biệt được sử dụng để nhập số nguyên. Ưu điểm của input() so với raw_input() có thể được làm rõ qua ví dụ sau

    #give 2*2 as input
    a=input()
    b=raw_input() #note that int(raw_input()) results in error
    print a #prints 4
    print b #prints 2*2

###làm thế nào để lấy hai hoặc nhiều kiểu dữ liệu làm đầu vào từ một dòng duy nhất cách nhau bằng khoảng trắng?
Ở đây chúng ta sử dụng các hàm split() và map()

    #give two integers in first line and more than two integers in third line
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # prints first two integers from first line and sum of integers of second line

###Định dạng đầu ra
Bạn có thể đã nhận thấy rằng câu lệnh print tự động chèn một dòng mới. Việc sử dụng dấu phẩy như trong mã trên in các giá trị trên một dòng duy nhất cách nhau bằng khoảng trắng. Mô-đun sys cung cấp các hàm khác nhau để định dạng đầu ra nhưng ở đây chúng ta học cách sử dụng kiến thức cơ bản về định dạng để xuất ra cách chúng ta cần. Hãy xem một vài ví dụ để học cách định dạng đầu ra

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

Kết quả phải dễ hiểu.

Exercise
--------

Write a program that asks the user to input their name, age, and country. The program should then print out a message that includes this information in a sentence. The program should include:

1. Taking a name as input using `raw_input()`.
2. Taking an age as input using `input()`, and converting it to an integer.
3. Taking a country name as input using `raw_input()`.
4. Formatting the output to display a sentence that includes the name, age, and country.

The program should demonstrate input handling and string formatting in Python.