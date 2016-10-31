Tutorial
--------

Modules in Python are simply Python files with the .py extension, which implement a set of functions. Modules are imported from other modules using the `import` command. 

To import a module, we use the `import` command. Check out the full list of built-in modules in the Python standard library [here](http://docs.python.org/2/library/).

The first time a module is loaded into a running Python script, it is initialized by executing the code in the module once. If another module in your code imports the same module again, it will not be loaded twice but once only - so local variables inside the module act as a "singleton" - they are initialized only once.

If we want to import the module `urllib`, which enables us to create read data from URLs, we simply `import` the module:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBpbXBvcnQgdGhlIGxpYnJhcnlcbmltcG9ydCB1cmxsaWIucmVxdWVzdFxuXG4jIHVzZSBpdFxuIyB1cmxsaWIucmVxdWVzdC51cmxvcGVuKC4uLikiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

### Exploring built-in modules

Two very important functions come in handy when exploring modules in Python - the `dir` and `help` functions.

We can look for which functions are implemented in each module by using the `dir` function:

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiaW1wb3J0IHVybGxpYi5yZXF1ZXN0XG5kaXIodXJsbGliLnJlcXVlc3QpXG5bJ0NvbnRlbnRUb29TaG9ydEVycm9yJywgJ0ZhbmN5VVJMb3BlbmVyJywgJ01BWEZUUENBQ0hFJywgJ1VSTG9wZW5lcicsICdfX2FsbF9fJywgJ19fYnVpbHRpbnNfXycsICdfX2RvY19fJywgJ19fZmlsZV9fJywgJ19fbmFtZV9fJywgJ19fcGFja2FnZV9fJywgJ19fdmVyc2lvbl9fJywgJ19mdHBlcnJvcnMnLCAnX2dldF9wcm94aWVzJywgJ19nZXRfcHJveHlfc2V0dGluZ3MnLCAnX2hhdmVfc3NsJywgJ19oZXhkaWcnLCAnX2hleHRvY2hyJywgJ19ob3N0cHJvZycsICdfaXNfdW5pY29kZScsICdfbG9jYWxob3N0JywgJ19ub2hlYWRlcnMnLCAnX25wb3J0cHJvZycsICdfcGFzc3dkcHJvZycsICdfcG9ydHByb2cnLCAnX3F1ZXJ5cHJvZycsICdfc2FmZV9tYXAnLCAnX3NhZmVfcXVvdGVycycsICdfdGFncHJvZycsICdfdGhpc2hvc3QnLCAnX3R5cGVwcm9nJywgJ191cmxvcGVuZXInLCAnX3VzZXJwcm9nJywgJ192YWx1ZXByb2cnLCAnYWRkYmFzZScsICdhZGRjbG9zZWhvb2snLCAnYWRkaW5mbycsICdhZGRpbmZvdXJsJywgJ2Fsd2F5c19zYWZlJywgJ2Jhc2Vqb2luJywgJ2MnLCAnZnRwY2FjaGUnLCAnZnRwZXJyb3JzJywgJ2Z0cHdyYXBwZXInLCAnZ2V0cHJveGllcycsICdnZXRwcm94aWVzX2Vudmlyb25tZW50JywgJ2dldHByb3hpZXNfbWFjb3N4X3N5c2NvbmYnLCAnaScsICdsb2NhbGhvc3QnLCAnbWFpbicsICdub2hlYWRlcnMnLCAnb3MnLCAncGF0aG5hbWUydXJsJywgJ3Byb3h5X2J5cGFzcycsICdwcm94eV9ieXBhc3NfZW52aXJvbm1lbnQnLCAncHJveHlfYnlwYXNzX21hY29zeF9zeXNjb25mJywgJ3F1b3RlJywgJ3F1b3RlX3BsdXMnLCAncmVwb3J0aG9vaycsICdzb2NrZXQnLCAnc3BsaXRhdHRyJywgJ3NwbGl0aG9zdCcsICdzcGxpdG5wb3J0JywgJ3NwbGl0cGFzc3dkJywgJ3NwbGl0cG9ydCcsICdzcGxpdHF1ZXJ5JywgJ3NwbGl0dGFnJywgJ3NwbGl0dHlwZScsICdzcGxpdHVzZXInLCAnc3BsaXR2YWx1ZScsICdzc2wnLCAnc3RyaW5nJywgJ3N5cycsICd0ZXN0JywgJ3Rlc3QxJywgJ3RoaXNob3N0JywgJ3RpbWUnLCAndG9CeXRlcycsICd1bnF1b3RlJywgJ3VucXVvdGVfcGx1cycsICd1bndyYXAnLCAndXJsMnBhdGhuYW1lJywgJ3VybGNsZWFudXAnLCAndXJsZW5jb2RlJywgJ3VybG9wZW4nLCAndXJscmV0cmlldmUnXSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

When we find the function in the module we want to use, we can read about it more using the `help` function, inside the Python interpreter:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiaW1wb3J0IHVybGxpYi5yZXF1ZXN0Iiwic2FtcGxlIjoiaGVscCh1cmxsaWIucmVxdWVzdC51cmxvcGVuKSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

### Writing modules

Writing Python modules is very simple. To create a module of your own, simply create a new .py file with the module name, and then import it using the Python file name (without the .py extension) using the `import` command.

### Writing packages

Packages are namespaces which contain multiple packages and modules themselves. They are simply directories, but with a twist.

Each package in Python is a directory which **MUST** contain a special file called `__init__.py`. This file can be empty, and it indicates that the directory it contains is a Python package, so it can be imported the same way a module can be imported. 

If we create a directory called `foo`, which marks the package name, we can then create a module inside that package called `bar`. We also must not forget to add the `__init__.py` file inside the `foo` directory.

To use the module `bar`, we can import it in two ways:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiaW1wb3J0IGZvby5iYXIgI3RoaXMgd29uJ3QgYWN0dWFsbHkgcnVuIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

or:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZnJvbSBmb28gaW1wb3J0IGJhciAjdGhpcyB3b24ndCBhY3R1YWxseSBydW4iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

In the first method, we must use the `foo` prefix whenever we access the module `bar`. In the second method, we don't, because we import the module to our module's namespace.

The `__init__.py` file can also decide which modules the package exports as the API, while keeping other modules internal, by overriding the `__all__` variable, like so:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiX19pbml0X18ucHk6XG5cbl9fYWxsX18gPSBbXCJiYXJcIl0iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

Exercise
--------

In this exercise, you will need to print an alphabetically sorted list of all functions in the `re` module, which contain the word `find`.

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiaW1wb3J0IHJlXG5cbiMgWW91ciBjb2RlIGdvZXMgaGVyZVxuXG4iLCJzb2x1dGlvbiI6ImltcG9ydCByZVxuXG4jIFlvdXIgY29kZSBnb2VzIGhlcmVcbmZpbmRfbWVtYmVycyA9IFtdXG5mb3IgbWVtYmVyIGluIGRpcihyZSk6XG4gICAgaWYgXCJmaW5kXCIgaW4gbWVtYmVyOlxuICAgICAgICBmaW5kX21lbWJlcnMuYXBwZW5kKG1lbWJlcilcblxucHJpbnQoc29ydGVkKGZpbmRfbWVtYmVycykpIiwic2N0IjoidGVzdF9vdXRwdXRfY29udGFpbnMoXCJbJ2ZpbmRhbGwnLCAnZmluZGl0ZXInXVwiKSJ9
</div>