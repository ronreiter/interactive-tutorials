You can create partial functions in python using the partial function from the functools library.

Partial functions cho phép tạo ra một hàm với số lượng tham số ít hơn và các giá trị cố định được thiết lập cho hàm giới hạn hơn.

Import cần thiết:

This code will return 8.

Một lưu ý quan trọng: các giá trị mặc định sẽ bắt đầu thay thế các biến từ bên trái. Số 2 sẽ thay thế x. y sẽ bằng 4 khi dbl(4) được gọi. Đây không có sự khác biệt trong ví dụ này, nhưng nó có trong ví dụ dưới đây.

Exercise
--------
Chỉnh sửa hàm cung cấp bằng cách gọi partial() và thay thế ba biến đầu tiên trong func(). Sau đó in ra với hàm partial mới sử dụng chỉ một biến đầu vào để kết quả bằng 60.