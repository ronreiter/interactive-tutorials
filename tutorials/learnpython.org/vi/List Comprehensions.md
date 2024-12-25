List Comprehensions là một công cụ rất mạnh mẽ, cho phép tạo ra một danh sách mới dựa trên một danh sách khác, trong một dòng đơn giản và dễ đọc.

Ví dụ, giả sử chúng ta cần tạo một danh sách các số nguyên chỉ ra độ dài của mỗi từ trong một câu nhất định, nhưng chỉ khi từ đó không phải là từ "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Sử dụng list comprehension, chúng ta có thể đơn giản hóa quá trình này thành ký hiệu sau:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

Sử dụng list comprehension, tạo một danh sách mới gọi là "newlist" từ danh sách "numbers", trong đó chỉ chứa các số dương từ danh sách, dưới dạng số nguyên.