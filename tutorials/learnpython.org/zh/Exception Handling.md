内容：
在编程时，错误是不可避免的事实。也许用户提供了错误的输入，也许网络资源不可用，也许程序内存不足。或者，程序员可能甚至犯了一个错误！

Python 对错误的解决方案是异常。你可能以前见过异常。

    print(a)
    
    # 错误
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

哎呀！忘记给变量 'a' 赋值了。

但有时你不希望异常完全停止程序。你可能想在引发异常时做一些特殊的事情。这可以在 *try/except* 块中完成。

这是一个简单的例子：假设你在迭代一个列表。你需要迭代 20 个数字，但这个列表是由用户输入生成的，可能没有 20 个数字。当你到达列表的末尾时，你只是希望剩下的数字被解释为 0。你可以这样做：

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # 当访问列表中不存在的索引时引发
                do_stuff_with_number(0)
    
    catch_this()

看，这并不难！你可以用任何异常做到这一点。想了解更多关于处理异常的细节，请查看 
[Python 文档](http://docs.python.org/tutorial/errors.html#handling-exceptions)。

练习
--------

处理所有的异常！回想之前的课程以返回演员的姓氏。