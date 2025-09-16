Nói về đối tượng là sự gói gọn của các biến và hàm vào một thực thể duy nhất. Đối tượng nhận các biến và hàm của nó từ các lớp. Lớp thực ra là một mẫu để tạo đối tượng của bạn.

Một lớp rất cơ bản sẽ trông như thế này:

Chúng ta sẽ giải thích tại sao bạn cần bao gồm "self" dưới dạng tham số một lúc sau. Đầu tiên, để gán lớp (mẫu) ở trên cho một đối tượng, bạn sẽ làm như sau:

Bây giờ biến "myobjectx" giữ một đối tượng của lớp "MyClass" chứa biến và hàm được định nghĩa trong lớp có tên gọi "MyClass".

### Truy cập Biến của Đối tượng

Để truy cập biến bên trong đối tượng mới được tạo "myobjectx", bạn sẽ làm như sau:

Vậy ví dụ bên dưới sẽ xuất ra chuỗi "blah":

Bạn có thể tạo nhiều đối tượng khác nhau thuộc cùng một lớp (có cùng các biến và hàm được định nghĩa). Tuy nhiên, mỗi đối tượng chứa các bản sao độc lập của các biến được định nghĩa trong lớp. Ví dụ, nếu chúng ta định nghĩa một đối tượng khác với lớp "MyClass" và sau đó thay đổi chuỗi trong biến ở trên:

### Truy cập Hàm của Đối tượng

Để truy cập một hàm bên trong một đối tượng, bạn sử dụng ký hiệu tương tự như truy cập một biến:

Cách trên sẽ xuất ra thông báo, "This is a message inside the class."

### __init__()

Hàm `__init__()`, là một hàm đặc biệt được gọi khi lớp đang được khởi tạo.
Nó được sử dụng để gán giá trị trong một lớp.

Exercise
--------

Chúng tôi có một lớp được định nghĩa cho phương tiện. Tạo hai phương tiện mới gọi là car1 và car2.
Đặt car1 là một chiếc convertible màu đỏ trị giá $60,000.00 với tên là Fer,
và car2 là một chiếc van màu xanh tên là Jump trị giá $10,000.00.