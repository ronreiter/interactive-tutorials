### Chức năng là gì?

Các chức năng giúp chúng ta chia nhỏ mã nguồn thành các khối có ích, giúp sắp xếp mã nguồn, làm cho mã dễ đọc hơn, tái sử dụng nó và tiết kiệm thời gian. Ngoài ra, các chức năng là cách quan trọng để định nghĩa các giao diện để lập trình viên có thể chia sẻ mã của họ.

### Làm thế nào để viết hàm trong Python?

Như chúng ta đã thấy trong các hướng dẫn trước, Python sử dụng các khối mã.

Một khối là một khu vực mã được viết theo định dạng:

    block_head:
        1st block line
        2nd block line
        ...

Nơi một dòng khối là mã Python khác (thậm chí một khối khác), và đầu khối có định dạng sau:
block_keyword block_name(argument1,argument2, ...)
Các từ khóa khối bạn đã biết là "if", "for", và "while".

Hàm trong python được định nghĩa bằng từ khóa khối "def", theo sau là tên của hàm như là tên của khối.
Ví dụ:

    def my_function():
        print("Hello From My Function!")


Các hàm cũng có thể nhận các đối số (các biến được truyền từ người gọi đến hàm).
Ví dụ:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Các hàm có thể trả về một giá trị cho người gọi sử dụng từ khóa 'return'.
Ví dụ:

    def sum_two_numbers(a, b):
        return a + b

### Làm thế nào để gọi hàm trong Python?

Chỉ cần viết tên của hàm kèm theo (), đặt mọi đối số cần thiết trong dấu ngoặc.
Ví dụ, hãy gọi các hàm đã viết ở trên (trong ví dụ trước):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


Exercise
--------

Trong bài tập này, bạn sẽ sử dụng một hàm hiện có, và thêm hàm của riêng bạn để tạo một chương trình hoàn chỉnh.

1. Thêm một hàm tên là `list_benefits()` trả về danh sách sau: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Thêm một hàm tên là `build_sentence(info)` nhận một đối số chứa một chuỗi và trả về một câu bắt đầu với chuỗi đã cho và kết thúc bằng " is a benefit of functions!"

3. Chạy và xem tất cả các hàm cùng hoạt động!