### Các bạn đã hiểu CSV là gì chưa?

CSV là viết tắt của 'Comma Separated Values'. Định dạng CSV là định dạng nhập và xuất cơ sở dữ liệu và bảng tính phổ biến nhất. Một tập tin CSV là một tập tin văn bản đơn giản chứa danh sách dữ liệu. Chúng chủ yếu sử dụng ký tự dấu phẩy (,) để phân chia dữ liệu, nhưng đôi khi sử dụng các ký tự khác như dấu chấm phẩy hoặc tab.

Dữ liệu CSV mẫu:

...
tên cột 1,tên cột 2, tên cột 3
dữ liệu dòng đầu tiên 1,dữ liệu dòng đầu tiên 2,dữ liệu dòng đầu tiên 3
dữ liệu dòng thứ hai 1,dữ liệu dòng thứ hai 2,dữ liệu dòng thứ hai 3
...

### Mô-đun CSV trong Python

Mặc dù Python có hàm built-in open() để làm việc với các tập tin CSV hoặc bất kỳ tập tin văn bản đơn giản nào khác, có một mô-đun csv chuyên dụng triển khai các lớp để đọc và viết dữ liệu ở định dạng csv làm cho việc làm việc với các tập tin CSV dễ dàng hơn nhiều.

### Các hàm quan trọng trong mô-đun CSV

    csv.field_size_limit – trả về kích thước trường tối đa
    csv.get_dialect – lấy phương ngữ liên kết với tên
    csv.list_dialects – hiển thị tất cả các phương ngữ đã đăng ký
    csv.reader – đọc dữ liệu từ tập tin csv
    csv.register_dialect - liên kết phương ngữ với tên
    csv.writer – viết dữ liệu vào tập tin csv
    csv.unregister_dialect - xóa phương ngữ liên kết với tên trong đăng ký phương ngữ
    csv.QUOTE_ALL - Bao quanh tất cả, không phụ thuộc vào loại.
    csv.QUOTE_MINIMAL - Bao quanh các trường với ký tự đặc biệt
    csv.QUOTE_NONNUMERIC - Bao quanh tất cả các trường không phải giá trị số
    csv.QUOTE_NONE – Không bao quanh bất kỳ thứ gì trong đầu ra

### Làm thế nào để sử dụng mô-đun csv?

trước tiên hãy nhập mô-đun csv vào chương trình python của bạn.

    import csv

các hàm writer và reader cho phép bạn chỉnh sửa, sửa đổi, và biến đổi dữ liệu trong tập tin CSV.

Làm thế nào để đọc một tập tin CSV :-

Để đọc dữ liệu từ tập tin CSV, chúng ta sử dụng hàm reader để tạo một đối tượng reader.

Ví dụ:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Ở đây, chúng ta đầu tiên mở tập tin CSV ở CHẾ ĐỘ ĐỌC và đặt tên đối tượng tập tin là csvfile. Chúng ta sử dụng trình quản lý ngữ cảnh để mở tập tin để không phải lo về việc đóng tập tin. Hàm csv.reader nhận đối tượng tập tin làm đầu vào và trả về một đối tượng có thể lặp lại. Chúng ta lưu đối tượng có thể lặp lại này là csvreader.

Như chúng ta đã biết, csvreader là một đối tượng có thể lặp lại và vì thế chúng ta có thể lặp lại bằng cách sử dụng vòng lặp for:

ví dụ 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Đoạn mã trên sẽ in tất cả các hàng chúng ta đọc từ tập tin csv. Vui lòng lưu ý rằng chúng ta mở tập tin với chế độ 'r' khi nó đã tồn tại.

Tiếp theo là gì?

csvreader là một đối tượng có thể lặp lại. Do đó, phương thức .next() trả về hàng hiện tại và tiến trình lặp sang hàng tiếp theo.

ví dụ 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Trong ví dụ 1, bạn sẽ thấy tất cả các hàng được in trên màn hình cùng với tiêu đề. Trong ví dụ 2, phương thức .next() đọc tiêu đề vào đối tượng fields và tiến trình lặp sang hàng tiếp theo do đó tất cả các hàng được in ngoại trừ tiêu đề.

Làm thế nào để viết vào tập tin CSV-

Để viết vào tập tin csv, mô-đun csv cung cấp hàm csv.writer. Để viết dữ liệu, chúng ta đầu tiên mở tập tin CSV ở chế độ VIẾT ('w'). Đối tượng tập tin được đặt tên là csvfile. Chúng ta lưu đối tượng csv.writer là csvwriter.

Ví dụ:
    #declare header
    fields = ['column1','column2', 'column3']

    #declare rows
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Trong ví dụ trên, hàm writerow() sẽ viết một hàng đơn lẻ là đối tượng fields, trong khi phương thức writerows() sẽ viết toàn bộ danh sách các hàng đã định nghĩa ở trên vào tập tin csv.

Bây giờ, chúng ta hãy tiến thêm một bước. Đọc nội dung của một tập tin csv và viết vào một tập tin csv khác.

Ví dụ:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # lưu trữ tiêu đề và tiến trình con trỏ reader
            csvwriter.writerow(header) #viết tiêu đề vào tập tin mới
            for row in reader:
                csvwriter.writerow(row)

Ở đây, chúng ta đang mở 'newfilename.csv' ở chế độ 'W' là f2 và mở 'mycsvfile.csv' ở chế độ 'r' là f1. Chúng ta đang tận dụng các hàm .next(), .reader(),.writer(), .writerow() của mô-đun csv. Sử dụng .next(), chúng ta đang tiến trình con trỏ reader và sử dụng csvwriter.writerow() chúng ta đang viết từng hàng một vào tập tin.

### Các lớp DictReader và DictWriter trong Python

dưới đây là hai lớp quan trọng trong python để đọc và viết tập tin csv.

lớp csv.Dictwriter
lớp csv.DictReader

DictReader và DictWriter là các lớp có sẵn trong Python để đọc và viết vào CSV. Mặc dù chúng tương tự các hàm reader và writer, các lớp này sử dụng đối tượng từ điển để đọc và viết vào các tập tin csv.

DictReader:

Nó tạo ra một đối tượng ánh xạ thông tin đọc vào một từ điển mà các khóa được cung cấp bởi tham số fieldnames. Tham số này là tùy chọn, nhưng khi không được chỉ định trong tập tin, thì dữ liệu hàng đầu tiên trở thành các khóa của từ điển.

Ví dụ csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Ví dụ:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Lớp csv.DictWriter hoạt động như một writer thông thường nhưng ánh xạ các từ điển Python vào các hàng CSV. Tham số fieldnames là một chuỗi các khóa xác định thứ tự mà các giá trị trong từ điển được truyền đến phương thức writerow() để viết vào tập tin CSV. Lớp được định nghĩa là csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Ví dụ:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercise
--------

Trong bài tập này, bạn sẽ làm việc với dữ liệu CSV. Nhiệm vụ của bạn là tạo một chương trình Python đọc dữ liệu từ tập tin CSV và ghi vào một tập tin CSV khác, đảm bảo rằng chỉ những dòng mà giá trị trong cột đầu tiên lớn hơn 50 mới được bao gồm trong tập tin đầu ra.