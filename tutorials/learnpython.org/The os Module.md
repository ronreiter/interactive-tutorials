# The os Module

    $ python
    Python 2.6.5 (r265:79063, Apr 16 2010, 13:57:41) 
    [GCC 4.4.3] on linux2
    Type "help", "copyright", "credits" or "license" for more information.
    >>> import os

    >>> os.environ["HOME"]
    '/home/jason'

    >>> exit_code = os.system("date")
    Fri Apr 22 18:11:57 MDT 2011
    >>> exit_code
    0

    >>> exit_code = os.system("this_is_not_a_command")
    sh: this_is_not_a_command: not found
    >>> exit_code
    32512



