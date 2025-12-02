# آموزش
--------

## چاپ متغیرها و رشته‌ها

شما یاد گرفته‌اید چگونه از متغیرها و رشته‌ها استفاده کنید و آن‌ها را چاپ کنید. اما اگر می‌خواستید یک عبارت را با استفاده از متغیرها و رشته‌ها با هم چاپ کنید چه می‌شد؟

در Ruby می‌توانید یک متغیر را درون رشته‌ای که می‌خواهید چاپ کنید فراخوانی کنید.

برای فراخوانی متغیر باید از `#{variable}` استفاده کنید. برای مثال:

    number = 8
    puts "I have #{number} oranges." # I have 8 oranges

شما حتی می‌توانید عملیات ریاضی را بین متغیرها در درون آن انجام دهید.

    first_number = 5
    second_number = 6
    
    puts "Multiplying #{first_number} by #{second_number} the result is #{first_number * second_number}"


## تمرین
--------

کد را اصلاح کنید تا با استفاده از متغیرها چاپ کنید:
- هر کدام از بچه‌ها چند سیب دارند؛
- مجموع همه سیب‌ها.

## کد تمرین
-------------
john = 5
mary = 3
will = 2

puts "John has  apples."
puts "Mary has  apples."
puts "Will has  apples."
puts "Together they have  apples."

## خروجی مورد انتظار
---------------
John has 5 apples.
Mary has 3 apples.
Will has 2 apples.
Together they have 10 apples.


## حل
--------
john = 5
mary = 3
will = 2

puts "John has #{john} apples."
puts "Mary has #{mary} apples."
puts "Will has #{will} apples."
puts "Together they have #{john + mary + will} apples."