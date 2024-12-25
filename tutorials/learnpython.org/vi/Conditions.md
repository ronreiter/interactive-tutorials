Python sử dụng logic boolean để đánh giá các điều kiện. Các giá trị boolean Đúng và Sai được trả về khi một biểu thức được so sánh hoặc đánh giá. Chẳng hạn:

x = 2
print(x == 2) # in ra True
print(x == 3) # in ra False
print(x < 3) # in ra True

Lưu ý rằng gán biến được thực hiện bằng toán tử dấu bằng đơn "=", trong khi so sánh giữa hai biến được thực hiện bằng toán tử dấu bằng kép "==". Toán tử "không bằng" được đánh dấu là "!=".

### Toán tử boolean

Các toán tử boolean "and" (và) và "or" (hoặc) cho phép xây dựng các biểu thức boolean phức tạp, ví dụ:

name = "John"
age = 23
if name == "John" and age == 23:
    print("Tên của bạn là John, và bạn cũng 23 tuổi.")

if name == "John" or name == "Rick":
    print("Tên của bạn là John hoặc Rick.")

### Toán tử "in"

Toán tử "in" có thể sử dụng để kiểm tra xem một đối tượng cụ thể có tồn tại trong một bộ chứa đối tượng có thể lặp qua được, chẳng hạn như một danh sách:

name = "John"
if name in ["John", "Rick"]:
    print("Tên của bạn là John hoặc Rick.")

Python sử dụng thụt lề để xác định các khối mã, thay vì dùng ngoặc. Tiêu chuẩn thụt lề Python là 4 dấu cách, mặc dù các tab và bất kỳ kích thước dấu cách nào khác cũng sẽ hoạt động, miễn là nó nhất quán. Lưu ý rằng các khối mã không cần bất kỳ dấu kết thúc nào.

Đây là một ví dụ về việc sử dụng câu lệnh "if" của Python bằng cách sử dụng các khối mã:

statement = False
another_statement = True
if statement is True:
    # làm gì đó
    pass
elif another_statement is True: # else if
    # làm gì khác
    pass
else:
    # làm điều khác
    pass

Ví dụ:

x = 2
if x == 2:
    print("x bằng hai!")
else:
    print("x không bằng hai.")

Một câu lệnh được đánh giá là đúng nếu một trong những điều sau đây đúng:
1. Biến boolean "Đúng" được đưa vào, hoặc được tính toán bằng cách sử dụng một biểu thức, chẳng hạn như so sánh số học.
2. Một đối tượng không được coi là "trống" được đưa vào.

Dưới đây là một số ví dụ về các đối tượng được coi là trống:
1. Một chuỗi trống: ""
2. Một danh sách trống: []
3. Số không: 0
4. Biến boolean sai: False

### Toán tử 'is'

Không giống như toán tử dấu bằng kép "==", toán tử "is" không so sánh giá trị của các biến, mà so sánh các thực thể của chúng. Ví dụ:

x = [1,2,3]
y = [1,2,3]
print(x == y) # In ra True
print(x is y) # In ra False

### Toán tử "not"

Sử dụng "not" trước một biểu thức boolean sẽ đảo ngược nó:

print(not False) # In ra True
print((not False) == (False)) # In ra False

Exercise
--------

Thay đổi biến trong phần đầu tiên, để mỗi câu lệnh if trở thành True.