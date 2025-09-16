A Closure là một đối tượng chức năng nhớ các giá trị trong các phạm vi bao quanh ngay cả khi chúng không còn trong bộ nhớ. Hãy tìm hiểu từng bước.

Trước tiên, một **Hàm Lồng** là một hàm được định nghĩa bên trong một hàm khác. Rất quan trọng để lưu ý rằng các hàm lồng có thể truy cập các biến của phạm vi bọc quanh. Tuy nhiên, ít nhất trong Python, chúng chỉ có quyền đọc. Tuy nhiên, một có thể sử dụng từ khóa "nonlocal" rõ ràng với các biến này để thay đổi chúng.

Ví dụ:

    def transmit_to_space(message):
        "Đây là hàm bao quanh"
        def data_transmitter():
            "Hàm lồng"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

Điều này hoạt động tốt vì chức năng 'data_transmitter' có thể truy cập vào 'message'. Để minh họa cách sử dụng từ khóa "nonlocal", hãy xem

    def print_msg(number):
        def printer():
            "Ở đây chúng ta sử dụng từ khóa nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Không có từ khóa nonlocal, đầu ra sẽ là "3 9", tuy nhiên, với việc sử dụng nó, chúng ta nhận được "3 3", tức là giá trị của biến "number" bị thay đổi.

Bây giờ, làm thế nào về việc chúng ta trả về đối tượng chức năng thay vì gọi hàm lồng bên trong. (Hãy nhớ rằng ngay cả các hàm cũng là đối tượng. (Đó là Python.))

    def transmit_to_space(message):
        "Đây là hàm bao quanh"
        def data_transmitter():
            "Hàm lồng"
            print(message)
        return data_transmitter

Và chúng ta gọi hàm như sau:

      def transmit_to_space(message):
        "Đây là hàm bao quanh"
        def data_transmitter():
            "Hàm lồng"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

Mặc dù việc thực thi của "transmit_to_space()" đã kết thúc, thông điệp vẫn được bảo tồn. Kỹ thuật này, bằng cách mà dữ liệu được gắn vào một số mã ngay cả sau khi kết thúc các chức năng gốc khác, được gọi là closures trong Python.

ƯU ĐIỂM: Closures có thể tránh sử dụng các biến toàn cục và cung cấp một số dạng ẩn dữ liệu. (Ví dụ: Khi có vài phương thức trong một lớp, sử dụng closures thay thế).

Ngoài ra, Decorators trong Python sử dụng rộng rãi closures.

Exercise
--------

Tạo một vòng lặp lồng và một closure trong Python để tạo các hàm nhân khác nhau bằng cách sử dụng closures. Tức là sử dụng closures, người ta có thể tạo các hàm như multiply_with_5() hoặc multiply_with_4() bằng cách sử dụng closures.