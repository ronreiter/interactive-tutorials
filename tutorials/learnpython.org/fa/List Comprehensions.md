آموزش
--------

List Comprehensions ابزار قدرتمندی است که یک لیست جدید بر اساس لیست دیگری در یک خط خوانا ایجاد می‌کند.

برای مثال، فرض کنید می‌خواهیم لیستی از طول هر کلمه در جمله‌ای خاص بسازیم، اما تنها در صورتی که کلمه برابر با "the" نباشد.

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

با یک لیست کامپرهنشن می‌توانیم این را ساده‌تر بنویسیم:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

تمرین
--------

با استفاده از یک list comprehension، لیست جدیدی به نام `newlist` از لیست `numbers` بسازید که فقط شامل اعداد مثبت به‌صورت عدد صحیح (int) باشد.

Tutorial Code
-------------
numbers = [34.6, -203.4, 44.9, 68.3, -12.2, 44.6, 12.7]
newlist = []
print(newlist)

Expected Output
---------------

test_output_contains("[34, 44, 68, 44, 12]")
success_msg("Very nice!")

Solution
--------
numbers = [34.6, -203.4, 44.9, 68.3, -12.2, 44.6, 12.7]
newlist = [int(x) for x in numbers if x > 0]
print(newlist)
