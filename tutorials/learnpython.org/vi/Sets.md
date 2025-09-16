Sets là danh sách không có các phần tử trùng lặp. Giả sử bạn muốn thu thập một danh sách từ vựng được sử dụng trong một đoạn văn:

    print(set("my name is Eric and Eric is my name".split()))

Điều này sẽ in ra một danh sách chứa "my", "name", "is", "Eric", và cuối cùng là "and". Do phần còn lại của câu sử dụng các từ đã có trong tập hợp, chúng không được chèn hai lần.

Sets là một công cụ mạnh mẽ trong Python vì chúng có khả năng tính toán sự khác nhau và giao nhau giữa các tập hợp khác. Ví dụ, giả sử bạn có một danh sách người tham gia trong các sự kiện A và B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Để tìm ra thành viên nào đã tham dự cả hai sự kiện, bạn có thể sử dụng phương thức "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Để tìm ra thành viên nào chỉ tham gia một trong các sự kiện, sử dụng phương thức "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Để tìm ra thành viên nào chỉ tham dự một sự kiện mà không phải sự kiện khác, sử dụng phương thức "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Để nhận danh sách tất cả các thành viên tham dự, sử dụng phương thức "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Exercise----------------------------------------

Trong bài tập dưới đây, sử dụng các danh sách cho sẵn để in ra một tập hợp chứa tất cả các thành viên tham gia từ sự kiện A mà không tham dự sự kiện B.