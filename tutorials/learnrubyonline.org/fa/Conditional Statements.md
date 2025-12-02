آموزش
--------

شرط‌ها برای اضافه کردن منطق انشعاب به برنامه‌های شما استفاده می‌شوند؛ آنها به شما اجازه می‌دهند رفتاری پیچیده را اضافه کنید که تنها در شرایط خاص اتفاق می‌افتد.

در اینجا ساختار دستور `if` آمده است:

    if condition
      something to be done
    end

`condition` یک عبارتی است که می‌تواند برای درست بودن بررسی شود. اگر عبارت به `true` ارزیابی شود، کد درون بلوک اجرا می‌شود.

در اینجا نمونه‌هایی از عبارات‌ای آمده‌اند که به `true` ارزیابی می‌شوند:

    3 < 4
    true
    "cat" == "cat"

می‌توانید `if` را با کلیدواژه `else` ترکیب کنید. این به شما اجازه می‌دهد یک بلوک کد را در صورت درست بودن شرط اجرا کنید، و یک بلوک متفاوت را در صورت غلط بودن آن.

    if condition
      something to be done
    else
      something to be done if the condition evaluates to false
    end

بلوک `else` تنها در صورتی اجرا می‌شود که بلوک `if` اجرا نشود، بنابراین هرگز هر دو اجرا نخواهند شد.

هنگامی که بیش از دو گزینه می‌خواهید، می‌توانید از `elsif` استفاده کنید. این به شما اجازه می‌دهد شرایط بیشتری را برای بررسی اضافه کنید.

در اینجا نحو دستور if/elsif/else آمده است:

    if condition
      something to be done
    elsif different condition
      something else to be done
    else
      another different thing to be done
    end

هنوز تنها یکی از بلوک‌های کد اجرا خواهد شد، زیرا دستور تنها کد را در اولین بلوک قابل اجرا اجرا می‌کند؛ پس از رضایت یک شرط، کل دستور پایان می‌یابد.

در زیر مثالی واقعی از دستور `if` با هم `elsif` و `else` آمده است.

    booleanOne = true
    randomCode = "Hi!"
    if booleanOne
      puts "I will be printed!"
    elsif randomCode.length>=1
      puts "Even though the above code is true, I won't be executed because the earlier if statement was true!"
    else
      puts "I won't be printed because the if statement was executed!"
    end

تمرین
--------
مقدار language را تغییر دهید تا دستور elsif تنها بلوکی باشد که اجرا می‌شود.

کد آموزشی
-------------
language = "English"
if language === "English"
  puts "Hello!"
elsif language === "Spanish"
  puts "Hola!"
else
  puts "I don't know that language!"
end

خروجی مورد انتظار
---------------
Hola!

راه‌حل
--------

language = "Spanish"
if language === "English"
  puts "Hello!"
elsif language === "Spanish"
  puts "Hola!"
else
  puts "I don't know that language!"
end
