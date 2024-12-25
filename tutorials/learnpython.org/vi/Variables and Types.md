Python hoàn toàn hướng đối tượng và không "gõ tĩnh". Bạn không cần khai báo biến trước khi sử dụng chúng hoặc khai báo kiểu của chúng. Mỗi biến trong Python là một đối tượng.

Hướng dẫn này sẽ đề cập đến một vài kiểu biến cơ bản.

### Numbers

Python hỗ trợ hai loại số - số nguyên (các số nguyên) và số thực (dấu phẩy động). (Nó cũng hỗ trợ số phức, tuy nhiên sẽ không được giải thích trong hướng dẫn này).

Để định nghĩa một số nguyên, sử dụng cú pháp sau:

Để định nghĩa một số thực, bạn có thể sử dụng một trong các ký pháp sau:

### Strings

Chuỗi được định nghĩa bằng dấu nháy đơn hoặc dấu nháy kép.

Sự khác biệt giữa hai cách này là sử dụng dấu nháy kép giúp bao gồm dễ dàng hơn các dấu nháy (nếu sử dụng dấu nháy đơn thì sẽ kết thúc chuỗi)

Có thêm các cách khác để định nghĩa chuỗi giúp dễ dàng hơn trong việc bao gồm các ký tự như xuống dòng, dấu gạch chéo và các ký tự Unicode. Những điều này nằm ngoài phạm vi của hướng dẫn này, nhưng được đề cập trong [tài liệu Python](http://docs.python.org/tutorial/introduction.html#strings "Hướng dẫn về chuỗi trong Python").

Các toán tử đơn giản có thể được thực hiện trên số và chuỗi:

Phép gán có thể được thực hiện trên nhiều biến "đồng thời" trên cùng một dòng như sau

Kết hợp toán tử giữa số và chuỗi không được hỗ trợ:

Exercise
--------

Mục tiêu của bài tập này là tạo ra một chuỗi, một số nguyên, và một số dấu phẩy động. Chuỗi cần được đặt tên là `mystring` và chứa từ "hello". Số dấu phẩy động cần được đặt tên là `myfloat` và chứa số 10.0, và số nguyên cần được đặt tên là `myint` và chứa số 20.