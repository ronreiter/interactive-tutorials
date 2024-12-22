Có hai loại vòng lặp trong Python, for và while.

### Vòng lặp "for"

Vòng lặp for lặp qua một dãy cho trước. Đây là một ví dụ:

For loops can iterate over a sequence of numbers using the "range" and "xrange" functions. Sự khác biệt giữa range và xrange là hàm range trả về một danh sách mới với các số của phạm vi được chỉ định, trong khi xrange trả về một iterator, hiệu quả hơn. (Python 3 sử dụng hàm range, hoạt động giống như xrange). Lưu ý rằng hàm range bắt đầu từ số không.

### Vòng lặp "while"

Vòng lặp while lặp lại chừng nào một điều kiện boolean nhất định được đáp ứng. Ví dụ:

### Câu lệnh "break" và "continue"

**break** được sử dụng để thoát khỏi một vòng lặp for hoặc while, trong khi **continue** được sử dụng để bỏ qua khối hiện tại và quay trở lại câu lệnh "for" hoặc "while". Một vài ví dụ:

### Có thể sử dụng mệnh đề "else" cho vòng lặp không?

Không giống như các ngôn ngữ như C, CPP.. chúng ta có thể sử dụng **else** cho vòng lặp. Khi điều kiện vòng lặp của câu lệnh "for" hoặc "while" không còn đúng thì phần mã trong "else" được thực thi. Nếu một câu lệnh **break** được thực thi trong vòng lặp for thì phần "else" bị bỏ qua. Lưu ý rằng phần "else" vẫn được thực thi ngay cả khi có câu lệnh **continue**.

Dưới đây là một vài ví dụ:

Exercise
--------

Vòng lặp qua và in ra tất cả các số chẵn từ danh sách số theo thứ tự mà chúng được nhận. Không in bất kỳ số nào xuất hiện sau số 237 trong dãy.