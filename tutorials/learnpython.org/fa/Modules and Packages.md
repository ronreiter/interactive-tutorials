آموزش
--------

در برنامه‌نویسی، ماژول بخشی از نرم‌افزار است که وظیفه‌ای مشخص دارد.
برای مثال، هنگام ساخت یک بازی پینگ‌پنگ، یک ماژول ممکن است مسئول منطق بازی باشد و ماژول دیگری مسئول رسم بازی روی صفحه باشد. هر ماژول از یک فایل جداگانه تشکیل شده و می‌توان آن را مجزا ویرایش کرد.

### نوشتن ماژول‌ها

ماژول‌ها در پایتون صرفاً فایل‌های پایتون با پسوند .py هستند. نام ماژول همان نام فایل است.
یک ماژول پایتون می‌تواند مجموعه‌ای از توابع، کلاس‌ها یا متغیرها را تعریف و پیاده‌سازی کند.
مثال بالا شامل دو فایل است:

mygame/

- mygame/game.py

- mygame/draw.py
    
 
اسکریپت پایتون `game.py` بازی را پیاده‌سازی می‌کند. این اسکریپت از تابع `draw_game` در فایل `draw.py` استفاده می‌کند، یا به عبارت دیگر از ماژول `draw` که منطق رسم بازی را پیاده‌سازی می‌کند.

ماژول‌ها با استفاده از دستور `import` از ماژول‌های دیگر فراخوانی می‌شوند. در این مثال، اسکریپت `game.py` ممکن است به صورت زیر باشد:

    # game.py
    # import the draw module
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # this means that if this script is executed, then 
    # main() will be executed
    if __name__ == '__main__':
        main()

ماژول `draw` ممکن است چیزی شبیه به این باشد:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

در این مثال، ماژول `game` ماژول `draw` را وارد می‌کند، که به آن اجازه می‌دهد از توابع پیاده‌سازی‌شده در آن استفاده کند. تابع `main` از تابع محلی `play_game` برای اجرای بازی استفاده می‌کند و سپس نتیجه بازی را با استفاده از تابع `draw_game` که در ماژول `draw` پیاده‌سازی شده رسم می‌کند. برای استفاده از تابع `draw_game` از ماژول `draw` باید مشخص کنیم که تابع در کدام ماژول پیاده‌سازی شده است، با استفاده از عملگر نقطه. برای ارجاع به تابع `draw_game` از ماژول `game`، باید ماژول `draw` را وارد کنیم و سپس آن را با `draw.draw_game()` فراخوانی کنیم. 

وقتی دستور `import draw` اجرا می‌شود، مفسر پایتون به دنبال فایلی با نام ماژول به اضافه پسوند `.py` در دایرکتوری ای که اسکریپت اجرا شده می‌گردد. در این حالت دنبال `draw.py` خواهد گشت. اگر پیدا شود، وارد می‌شود. اگر پیدا نشود، به جستجو در ماژول‌های داخلی ادامه می‌دهد.

ممکن است متوجه شده باشید که هنگام وارد کردن یک ماژول، فایلی با پسوند `.pyc` ساخته می‌شود. این یک فایل بایت‌کد پایتون است.
پایتون فایل‌ها را به بایت‌کد کامپایل می‌کند تا مجبور نباشد هر بار ماژول‌ها را بارگذاری کند آن‌ها را پارس کند. اگر فایل `.pyc` وجود داشته باشد، آن بارگذاری می‌شود به جای فایل `.py`. این فرآیند برای کاربر شفاف است.

### وارد کردن اشیاء ماژول به فضای نام فعلی

فضای نام (namespace) سیستمی است که در آن هر شیء نام‌گذاری شده و قابل دسترسی است. با استفاده از دستور `from` می‌توانیم تابع `draw_game` را به فضای نام اسکریپت اصلی وارد کنیم.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)


شاید متوجه شده باشید که در این مثال نام ماژول قبل از `draw_game` نوشته نشده است، زیرا با استفاده از دستور `import` مشخص کرده‌ایم کدام تابع را وارد می‌کنیم.

مزیت این نوشتار این است که نیازی نیست هر بار نام ماژول را تکرار کنیم. با این حال، یک فضای نام نمی‌تواند دو شیء با یک نام داشته باشد، بنابراین دستور `from ... import ...` ممکن است شیئی موجود در فضای نام را بازنویسی کند.

### وارد کردن همه اشیاء از یک ماژول

می‌توانید از دستور `import *` برای وارد کردن تمام اشیاء یک ماژول استفاده کنید:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

این ممکن است کمی پرخطر باشد چون تغییرات در ماژول واردشده می‌تواند روی ماژولی که آن را وارد می‌کند تأثیر بگذارد، اما کوتاه‌تر است و نیازی به ذکر تک‌تک اشیاء نیست.

### نام سفارشی برای وارد کردن ماژول

می‌توان ماژول‌ها را با هر نامی که خواستید بارگذاری کرد. این زمانی مفید است که بخواهید به صورت شرطی ماژول را وارد کنید و در ادامه کد از همان نام استفاده کنید.

برای مثال، اگر دو ماژول `draw` با نام‌های کمی متفاوت داشته باشید، ممکن است به این شکل عمل کنید:
 

    # game.py
    # import the draw module
    if visual_mode:
        # in visual mode, we draw using graphics
        import draw_visual as draw
    else:
        # in textual mode, we print out text
        import draw_textual as draw
    
    def main():
        result = play_game()
        # this can either be visual or textual depending on visual_mode
        draw.draw_game(result)


### مقداردهی اولیه ماژول

اولین بار که یک ماژول در یک اسکریپت پایتون بارگذاری می‌شود، با اجرای کد داخل ماژول مقداردهی اولیه می‌شود (یک بار). اگر ماژول دیگری همان ماژول را دوباره وارد کند، ماژول دوباره بارگذاری نمی‌شود، بنابراین متغیرهای محلی داخل ماژول مانند یک «singleton» عمل می‌کنند و تنها یک بار مقداردهی می‌شوند.

می‌توانید از این امکان برای مقداردهی اولیه اشیاء استفاده کنید.
برای مثال:

    # draw.py
    
    def draw_game():
        # when clearing the screen we can use the main screen object initialized in this module
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # initialize main_screen as a singleton
    main_screen = Screen()


### گسترش مسیر بارگذاری ماژول

چند روش وجود دارد که به مفسر پایتون بگویید به جز دایرکتوری محلی و ماژول‌های داخلی، از کدام مسیرها ماژول‌ها را بارگذاری کند. می‌توانید از متغیر محیطی `PYTHONPATH` استفاده کنید تا مسیرهای اضافی را مشخص کنید:

    PYTHONPATH=/foo python game.py

این `game.py` را اجرا می‌کند و امکان بارگذاری ماژول‌ها از دایرکتوری `foo` را فراهم می‌آورد، به‌علاوه دایرکتوری محلی.

همچنین می‌توانید از `sys.path.append` استفاده کنید. آن را *قبل از* اجرای دستور `import` فراخوانی کنید:

    sys.path.append("/foo")

اکنون دایرکتوری `foo` به لیست مسیرهایی که در آن‌ها به دنبال ماژول می‌گردد افزوده شده است.

### بررسی ماژول‌های داخلی

فهرست کامل ماژول‌های کتابخانه استاندارد پایتون را می‌توانید در این لینک ببینید: https://docs.python.org/3/library/.

دو تابع بسیار مفید برای بررسی ماژول‌ها عبارتند از `dir` و `help`.

برای وارد کردن ماژول `urllib` که امکان خواندن داده از URLها را فراهم می‌کند، آن را وارد می‌کنیم:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)

می‌توانیم با استفاده از تابع `dir` فهرستی از توابع و اشیاء ماژول را ببینیم:

    >>> import urllib
    >>> dir(urllib)
    ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', 
    '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', 
    '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', 
    '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', 
    '_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 
    'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 
    'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 
    'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 
    'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 
    'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 
    'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 
    'urlopen', 'urlretrieve']

وقتی تابع مورد نظر را پیدا کردیم، می‌توانیم درون مفسر پایتون با `help` دربارهٔ آن اطلاعات بیشتری بخوانیم:

    help(urllib.urlopen)

### نوشتن بسته‌ها (Packages)

بسته‌ها فضای نامی هستند که شامل چندین بسته و ماژول می‌شوند. آن‌ها در واقع دایرکتوری هستند، با شرایط مشخص.

هر بسته در پایتون یک دایرکتوری است که **باید** شامل فایلی ویژه به نام `__init__.py` باشد. این فایل که می‌تواند خالی باشد نشان می‌دهد دایرکتوری مورد نظر یک بسته پایتون است. به این ترتیب می‌توان آن را مانند یک ماژول وارد کرد.

اگر دایرکتوری‌ای به نام `foo` بسازیم که نام بسته باشد، سپس درون آن ماژولی به نام `bar` ایجاد کنیم و فایل `__init__.py` را درون دایرکتوری `foo` قرار دهیم، می‌توانیم ماژول `bar` را به دو شکل وارد کنیم:

    import foo.bar

یا:

    from foo import bar

در مثال اول، هر بار که به ماژول `bar` دسترسی پیدا کنید باید پیشوند `foo` را بیاورید. در مثال دوم، این پیشوند لازم نیست چون ما `bar` را به فضای نام خود وارد کرده‌ایم.

فایل `__init__.py` می‌تواند تعیین کند که کدام ماژول‌ها به عنوان API بسته صادر شوند در حالی که ماژول‌های دیگر داخلی بمانند، با بازنویسی متغیر `__all__` به این شکل:

    __init__.py:

    __all__ = ["bar"]

تمرین
--------

در این تمرین، لیستی از تمام توابع در ماژول `re` که شامل کلمه `find` هستند را به ترتیب الفبایی چاپ کنید.

Tutorial Code
-------------

import re

# Your code goes here
find_members = []

Expected Output
---------------

test_object('find_members')
success_msg('Great work!')

Solution
--------

import re

# Your code goes here
find_members = []
for member in dir(re):
    if "find" in member:
        find_members.append(member)

print(sorted(find_members))
