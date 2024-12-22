A dictionary là một kiểu dữ liệu tương tự như các mảng, nhưng hoạt động với các khóa và giá trị thay vì chỉ số. Mỗi giá trị được lưu trữ trong một từ điển có thể được truy cập thông qua một khóa, khóa này có thể là bất kỳ kiểu đối tượng nào (một chuỗi, một số, một danh sách, v.v.) thay vì sử dụng chỉ số để truy cập nó.

For example, một cơ sở dữ liệu số điện thoại có thể được lưu trữ bằng một từ điển như sau:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternatively, một từ điển có thể được khởi tạo với các giá trị tương tự trong ký hiệu sau:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterating over dictionaries

Các từ điển có thể được lặp qua, tương tự như một danh sách. Tuy nhiên, một từ điển, không giống như một danh sách, không giữ thứ tự của các giá trị được lưu trữ trong đó. Để lặp qua các cặp khóa và giá trị, sử dụng cú pháp sau:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Removing a value

Để loại bỏ một chỉ số cụ thể, sử dụng một trong các ký hiệu sau:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

hoặc:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercise
--------

Thêm "Jake" vào phonebook với số điện thoại 938273443, và loại bỏ Jill khỏi phonebook.