```markdown
    Python cung cấp các thư viện JSON tích hợp để mã hóa và giải mã JSON.

Trong Python 2.5, mô-đun simplejson được sử dụng, trong khi trong Python 2.7, mô-đun json được sử dụng. Vì bộ thông dịch này sử dụng Python 2.7, chúng ta sẽ sử dụng json.

Để sử dụng mô-đun json, trước tiên nó phải được nhập:

    import json

Có hai định dạng cơ bản cho dữ liệu JSON. Hoặc là một chuỗi hoặc là cấu trúc dữ liệu đối tượng. Cấu trúc dữ liệu đối tượng, trong Python, bao gồm các danh sách và từ điển lồng nhau trong nhau. Cấu trúc dữ liệu đối tượng cho phép sử dụng các phương thức python (cho danh sách và từ điển) để thêm, liệt kê, tìm kiếm và xóa các phần tử khỏi cấu trúc dữ liệu. Định dạng chuỗi chủ yếu được sử dụng để truyền dữ liệu vào một chương trình khác hoặc tải vào một cấu trúc dữ liệu.

Để tải JSON trở lại thành cấu trúc dữ liệu, sử dụng phương thức "loads". Phương thức này nhận một chuỗi và biến nó trở lại thành cấu trúc dữ liệu đối tượng json:

    import json 
    print(json.loads(json_string))

Để mã hóa một cấu trúc dữ liệu thành JSON, sử dụng phương thức "dumps". Phương thức này nhận một đối tượng và trả về một chuỗi:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python hỗ trợ phương pháp tuần tự hóa dữ liệu độc quyền của Python gọi là pickle (và một lựa chọn thay thế nhanh hơn gọi là cPickle).

Bạn có thể sử dụng nó theo cách tương tự chính xác.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Mục tiêu của bài tập này là để in ra chuỗi JSON với cặp khoá-giá trị "Me" : 800 được thêm vào.
```