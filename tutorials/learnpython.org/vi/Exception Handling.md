Khi lập trình, lỗi xuất hiện là điều bình thường trong cuộc sống. Có thể là do người dùng đã cung cấp đầu vào không hợp lệ. Cũng có thể là một tài nguyên mạng không khả dụng. Chương trình có thể đã hết bộ nhớ. Hoặc có thể chính lập trình viên đã mắc lỗi!

Giải pháp của Python cho lỗi là ngoại lệ. Có thể bạn đã từng thấy một ngoại lệ trước đây.

Oops! Quên gán giá trị cho biến 'a'.

Nhưng đôi khi bạn không muốn ngoại lệ làm chương trình dừng hoàn toàn. Bạn có thể muốn thực hiện một hành động đặc biệt khi một ngoại lệ được nêu. Điều này được thực hiện trong một khối *try/except*.

Dưới đây là một ví dụ đơn giản: Giả sử bạn đang lặp qua một danh sách. Bạn cần lặp qua 20 số, nhưng danh sách được tạo từ đầu vào của người dùng, có thể không có đủ 20 số. Sau khi bạn đạt đến cuối danh sách, bạn chỉ muốn các số còn lại được coi là 0. Dưới đây là cách bạn có thể thực hiện điều đó:

Như vậy không quá khó đâu nhỉ! Bạn có thể làm điều đó với bất kỳ ngoại lệ nào. Để biết thêm chi tiết về việc xử lý ngoại lệ, hãy tham khảo [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions).

Exercise
--------

Handle all the exception! Think back to the previous lessons to return the last name of the actor.