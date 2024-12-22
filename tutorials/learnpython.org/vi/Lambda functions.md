Nói chung, chúng ta định nghĩa một hàm bằng cách sử dụng từ khóa `def` ở đâu đó trong mã và gọi nó bất cứ khi nào cần dùng.

def sum(a,b):
    return a + b

a = 1
b = 2
c = sum(a,b)
print(c)

Bây giờ thay vì định nghĩa hàm ở đâu đó và gọi nó, chúng ta có thể sử dụng hàm lambda của Python, là các hàm nội tuyến được định nghĩa ngay tại chỗ chúng ta sử dụng. Vì vậy, chúng ta không cần phải khai báo hàm ở đâu đó và quay lại mã chỉ để sử dụng một lần.

Chúng không cần phải có tên, vì vậy chúng cũng được gọi là hàm ẩn danh. Chúng ta định nghĩa một hàm lambda sử dụng từ khóa `lambda`.

your_function_name = lambda inputs : output

Vì vậy, ví dụ cộng trên đây sử dụng hàm lambda sẽ là,

a = 1
b = 2
sum = lambda x,y : x + y
c = sum(a,b)
print(c)

Ở đây chúng ta đang gán hàm lambda cho biến **sum**, và khi cho các đối số, tức là a và b, nó hoạt động như một hàm bình thường.

Exercise
--------
Viết một chương trình sử dụng hàm lambda để kiểm tra xem một số trong danh sách đã cho có lẻ hay không. In "True" nếu số đó là lẻ hoặc "False" nếu không phải cho từng phần tử.