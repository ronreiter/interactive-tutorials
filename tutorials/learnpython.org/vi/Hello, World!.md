Python là một ngôn ngữ rất đơn giản, và có cú pháp rất dễ hiểu. Nó khuyến khích lập trình viên lập trình mà không cần mã mẫu chuẩn bị sẵn. Chỉ thị đơn giản nhất trong Python là chỉ thị "print" - nó chỉ đơn giản in ra một dòng (và cũng bao gồm một dòng mới, không giống như trong C).

Có hai phiên bản chính của Python, là Python 2 và Python 3. Python 2 và 3 khá khác nhau. Hướng dẫn này sử dụng Python 3, vì nó chính xác về mặt ngữ nghĩa hơn và hỗ trợ các tính năng mới hơn.

Ví dụ, một sự khác biệt giữa Python 2 và 3 là câu lệnh `print`. Trong Python 2, câu lệnh "print" không phải là một hàm, và do đó nó được gọi mà không cần dấu ngoặc đơn. Tuy nhiên, trong Python 3, nó là một hàm, và phải được gọi với dấu ngoặc đơn.

Để in một chuỗi trong Python 3, chỉ cần viết:

    print("This line will be printed.")

### Indentation

Python sử dụng thụt lề cho các khối, thay vì dùng dấu ngoặc nhọn. Cả tab và khoảng trắng đều được hỗ trợ, nhưng chuẩn thụt lề yêu cầu mã Python chuẩn sử dụng bốn khoảng trắng. Ví dụ:

    x = 1
    if x == 1:
        # indented four spaces
        print("x is 1.")

Exercise
--------

Sử dụng hàm "print" để in dòng "Hello, World!".