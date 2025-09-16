Python sử dụng định dạng chuỗi theo kiểu C để tạo ra các chuỗi mới, được định dạng. Toán tử "%" được dùng để định dạng một tập hợp các biến được đóng gói trong một "tuple" (danh sách có kích thước cố định), cùng với một chuỗi định dạng, bao gồm văn bản thông thường cùng với các "tham số chỉ định", những ký hiệu đặc biệt như "%s" và "%d". 

Giả sử bạn có một biến tên là "name" chứa tên người sử dụng của bạn, và bạn muốn in ra một lời chào tới người dùng đó.

Let's say you have a variable called "name" with your user name in it, and you would then like to print(out a greeting to that user.)

    # This prints out "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Để sử dụng hai hoặc nhiều tham số chỉ định, sử dụng một tuple (dấu ngoặc đơn):

    # This prints out "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Bất kỳ đối tượng nào không phải là chuỗi đều có thể được định dạng bằng toán tử %s. Chuỗi trả về từ phương thức "repr" của đối tượng đó sẽ được định dạng như một chuỗi. Ví dụ:

    # This prints out: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Dưới đây là một số tham số chỉ định cơ bản bạn cần biết:

`%s - Chuỗi (hoặc bất kỳ đối tượng nào có biểu diễn chuỗi, như số)`

`%d - Số nguyên`

`%f - Số dấu phẩy động`

`%.<number of digits>f - Số dấu phẩy động với số chữ số cố định ở phía sau dấu chấm.`

`%x/%X - Số nguyên ở dạng thập lục phân (chữ thường/chữ hoa)`

Exercise
--------

Bạn sẽ cần viết một chuỗi định dạng để in ra dữ liệu sử dụng cú pháp sau:
    `Hello John Doe. Your current balance is $53.44.`