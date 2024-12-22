Mỗi hàm trong Python nhận một số lượng đối số được định nghĩa trước, nếu được khai báo một cách thông thường, như sau:

Có thể khai báo các hàm nhận một số lượng đối số biến động, sử dụng cú pháp như sau:

Biến "therest" là một danh sách các biến, nhận tất cả các đối số được đưa cho hàm "foo" sau 3 đối số đầu tiên. Vì thế, gọi `foo(1, 2, 3, 4, 5)` sẽ cho ra kết quả:

Cũng có thể gửi các đối số hàm bằng từ khóa, để thứ tự của đối số không quan trọng, sử dụng cú pháp như sau. Mã sau đây cho ra kết quả như sau:

Hàm "bar" nhận 3 đối số. Nếu một đối số "action" bổ sung được nhận và nó chỉ dẫn việc cộng các số, thì tổng sẽ được in ra. Ngoài ra, hàm cũng biết cần phải trả về đối số thứ nhất, nếu giá trị của tham số "number", được truyền vào hàm, bằng "first".

Exercise
--------

Điền vào các hàm `foo` và `bar` để chúng có thể nhận một số lượng đối số biến động (3 hoặc nhiều hơn)
Hàm `foo` phải trả về số lượng các đối số bổ sung nhận được.
Hàm `bar` phải trả về `True` nếu đối số với từ khóa `magicnumber` có giá trị là 7, và `False` nếu không.