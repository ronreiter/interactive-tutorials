Trong lập trình, một mô-đun là một đoạn phần mềm có một chức năng cụ thể. 
Ví dụ, khi xây dựng trò chơi ping pong, một mô-đun có thể chịu trách nhiệm cho logic của trò chơi, và 
một mô-đun khác vẽ trò chơi trên màn hình. Mỗi mô-đun bao gồm một tệp khác nhau, có thể được chỉnh sửa riêng biệt.

### Viết mô-đun

Mô-đun trong Python chỉ là các tệp Python với phần mở rộng .py. Tên của mô-đun giống với tên của tệp.
Một mô-đun Python có thể có một tập hợp các hàm, lớp, hoặc biến được định nghĩa và thực hiện. 
Ví dụ trên bao gồm hai tệp:

mygame/

- mygame/game.py

- mygame/draw.py
    

Script Python `game.py` thực hiện trò chơi. Nó sử dụng hàm `draw_game` từ tệp `draw.py`,
hay theo cách khác là mô-đun `draw` thực hiện logic để vẽ trò chơi trên màn hình.

Các mô-đun được nhập từ các mô-đun khác sử dụng lệnh `import`. Trong ví dụ này, script `game.py` có thể
trông giống như sau:

Mô-đun `draw` có thể trông giống như sau:

Trong ví dụ này, mô-đun `game` nhập mô-đun `draw`, cho phép nó sử dụng các hàm đã triển khai
trong mô-đun đó. Hàm `main` sử dụng hàm cục bộ `play_game` để chạy trò chơi, và sau đó 
vẽ kết quả của trò chơi bằng cách sử dụng một hàm đã được triển khai trong mô-đun `draw` gọi là `draw_game`. Để sử dụng
hàm `draw_game` từ mô-đun `draw`, chúng ta cần chỉ định mô-đun nào đã triển khai hàm đó,
sử dụng toán tử dấu chấm. Để tham chiếu đến hàm `draw_game` từ mô-đun `game`,
chúng ta cần nhập mô-đun `draw` và sau đó gọi `draw.draw_game()`. 

Khi lệnh `import draw` chạy, bộ phiên dịch Python tìm kiếm một tệp trong thư mục nơi script được thực thi với tên mô-đun và phần .py. Trong trường hợp này, nó sẽ tìm kiếm `draw.py`. Nếu nó được tìm thấy, nó sẽ được nhập. Nếu không tìm thấy, nó sẽ tiếp tục tìm kiếm các mô-đun tích hợp sẵn.

Bạn có thể đã nhận thấy rằng khi nhập một mô-đun, một tệp `.pyc` được tạo ra. Đây là một tệp Python đã biên dịch. 
Python biên dịch các tệp thành mã byte Python để nó không phải phân tích các tệp mỗi khi mô-đun được tải. Nếu một tệp `.pyc` tồn tại, nó sẽ được tải thay vì tệp `.py`. Quá trình này khá trong suốt với người dùng.

### Nhập các đối tượng của mô-đun vào không gian tên hiện tại

Một không gian tên là một hệ thống nơi mỗi đối tượng được đặt tên và có thể được truy cập trong Python. Chúng ta nhập hàm `draw_game` vào không gian tên của script chính bằng cách sử dụng lệnh `from`.

Bạn có thể đã nhận thấy rằng trong ví dụ này, tên của mô-đun không đứng trước `draw_game`, vì chúng ta đã chỉ định tên mô-đun bằng cách sử dụng lệnh `import`.

Ưu điểm của ký hiệu này là bạn không phải tham chiếu đến mô-đun lặp đi lặp lại. Tuy nhiên, một không gian tên không thể có hai đối tượng với cùng tên, vì vậy lệnh `import` có thể thay thế một đối tượng đã tồn tại trong không gian tên.

### Nhập tất cả các đối tượng từ một mô-đun

Bạn có thể sử dụng lệnh `import *` để nhập tất cả các đối tượng trong một mô-đun như thế này:

Điều này có thể là hơi rủi ro vì các thay đổi trong mô-đun có thể ảnh hưởng đến mô-đun nhập nó, nhưng nó 
ngắn gọn hơn, và không yêu cầu bạn chỉ định từng đối tượng bạn muốn nhập từ mô-đun.


### Tên nhập tùy chỉnh

Các mô-đun có thể được tải dưới bất kỳ tên nào bạn muốn. Đây là hữu ích khi nhập một mô-đun có điều kiện
để sử dụng cùng một tên trong phần còn lại của mã.

Ví dụ, nếu bạn có hai mô-đun `draw` với tên hơi khác nhau, bạn có thể làm như sau:


### Khởi tạo mô-đun

Lần đầu tiên một mô-đun được nạp vào một script Python đang chạy, nó được khởi tạo bằng cách thực thi mã trong mô-đun một lần. Nếu một mô-đun khác trong mã của bạn nhập cùng mô-đun đó một lần nữa, nó sẽ không được nạp lại, vì vậy các biến cục bộ bên trong mô-đun hoạt động như một "singleton," nghĩa là chúng chỉ được khởi tạo một lần.

Bạn có thể sau đó sử dụng điều này để khởi tạo các đối tượng. 
Ví dụ:


### Mở rộng đường dẫn tải mô-đun

Có một vài cách để nói cho bộ diễn dịch Python biết nơi để tìm các mô-đun, ngoài thư mục cục bộ mặc định và các mô-đun tích hợp sẵn. Bạn có thể sử dụng biến môi trường `PYTHONPATH` để chỉ định các thư mục bổ sung để tìm các mô-đun như thế này:

Điều này thực thi `game.py`, và cho phép script tải các mô-đun từ thư mục `foo`, cũng như thư mục cục bộ.

Bạn cũng có thể sử dụng hàm `sys.path.append`. Thực thi nó *trước khi* chạy lệnh `import`:


Bây giờ thư mục `foo` đã được thêm vào danh sách các đường dẫn nơi các mô-đun được tìm kiếm.

### Khám phá các mô-đun tích hợp 

Xem danh sách đầy đủ các mô-đun tích hợp trong thư viện chuẩn Python [ở đây](https://docs.python.org/3/library/).

Hai hàm rất quan trọng rất hữu ích khi khám phá các mô-đun trong Python - hàm `dir` và `help`.

Để nhập mô-đun `urllib`, cho phép chúng ta tạo dữ liệu từ URLs, chúng ta `import` mô-đun:

Chúng ta có thể tìm kiếm các hàm được triển khai trong mỗi mô-đun bằng cách sử dụng hàm `dir`:

Khi chúng ta tìm thấy hàm trong mô-đun mà chúng ta muốn sử dụng, chúng ta có thể đọc thêm về nó bằng hàm `help`, sử dụng bộ phiên dịch Python:

### Viết gói

Các gói là các không gian tên chứa nhiều gói và mô-đun. Chúng chỉ là các thư mục, nhưng với một số yêu cầu nhất định.

Mỗi gói trong Python là một thư mục **PHẢI** chứa một tệp đặc biệt gọi là `__init__.py`. Tệp này, có thể trống, chỉ ra rằng thư mục mà nó có trong đó là một gói Python. Bằng cách đó nó có thể được nhập giống như một mô-đun.

Nếu chúng ta tạo một thư mục gọi là `foo`, đánh dấu tên gói, chúng ta có thể sau đó tạo một mô-đun bên trong gói đó gọi là `bar`. Rồi chúng ta thêm tệp `__init__.py` bên trong thư mục `foo`.

Để sử dụng mô-đun `bar`, chúng ta có thể nhập nó theo hai cách:

Trong ví dụ đầu tiên ở trên, chúng ta phải sử dụng tiền tố `foo` bất kỳ lúc nào chúng ta truy cập vào mô-đun `bar`. Trong ví dụ thứ hai, chúng ta không phải, vì chúng ta đã nhập mô-đun vào không gian tên của mô-đun của chúng ta.

Tệp `__init__.py` cũng có thể quyết định mô-đun nào mà gói xuất phát làm API, đồng thời giữ các mô-đun khác là nội bộ, bằng cách ghi đè biến `__all__` như sau:

Exercise
--------

Trong bài tập này, in ra một danh sách đã sắp xếp theo thứ tự bảng chữ cái của tất cả các hàm trong mô-đun `re` chứa từ `find`.