# Danh sách

Danh sách khá giống với mảng. Chúng có thể chứa bất kỳ loại biến nào và có thể chứa bao nhiêu biến tùy ý. Danh sách cũng có thể được duyệt qua theo cách rất đơn giản. Đây là một ví dụ về cách xây dựng một danh sách.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

Truy cập một chỉ số không tồn tại sẽ tạo ra một ngoại lệ (lỗi).

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

Trong bài tập này, bạn sẽ cần thêm số và chuỗi vào các danh sách đúng bằng cách sử dụng phương thức "append". Bạn phải thêm các số 1,2, và 3 vào danh sách "numbers" và các từ 'hello' và 'world' vào biến strings.

Bạn cũng sẽ phải điền vào biến second_name với tên thứ hai trong danh sách names, sử dụng toán tử ngoặc `[]`. Lưu ý rằng chỉ số bắt đầu từ 0, vì vậy nếu bạn muốn truy cập mục thứ hai trong danh sách, chỉ số của nó sẽ là 1.