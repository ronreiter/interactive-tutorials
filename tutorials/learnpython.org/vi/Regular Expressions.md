```
Regular Expressions (giảm đi đôi chút để regexp, regex, hay re) là một công
cụ để tìm kiếm mẫu nội dung trong văn bản. Trong Python, ta có module re.
Ứng dụng của các biểu thức chính quy rất phong phú, nhưng chúng khá phức
tạp, nên khi suy nghĩ về việc sử dụng regex cho một nhiệm vụ nào đó, hãy nghĩ
tới các phương pháp khác và coi regex như là sự lựa chọn cuối cùng.

Một regex ví dụ là `r"^(From|To|Cc).*?python-list@python.org"` Giờ là phần giải
thích: ký tự mũ `^` khớp với văn bản ở đầu dòng. Nhóm tiếp theo, phần có
`(From|To|Cc)` nghĩa là dòng phải bắt đầu với một trong những từ được tách
bởi ký tự ống `|`. Đây được gọi là toán tử HOẶC, và regex sẽ khớp nếu dòng bắt
đầu bằng bất kỳ từ nào trong nhóm. Ký tự `.*?` mang ý nghĩa khớp không
thường xuyên với bất kỳ số lượng ký tự nào, ngoại trừ ký tự dòng mới `\n`.
Phần không tham lam nghĩa là khớp với số lần lặp lại ít nhất có thể. Ký tự
`.` đại diện cho bất kỳ ký tự nào không phải là dòng mới, ký tự `*` nghĩa là
lặp lại 0 hoặc nhiều lần, và ký tự `?` khiến nó trở nên không tham lam.

Vì vậy, các dòng sau đây sẽ được regex đó khớp:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Có tham khảo đầy đủ cho cú pháp re tại [python docs](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

Như một ví dụ của một regex "đúng" để khớp email (như cái trong bài tập), xem thêm
[tại đây](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)
```

```vi
    Bài tập--------
```