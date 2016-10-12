IDEONE_USERNAME = "ronreiter"
IDEONE_PASSWORD = "18132ce2b97e"
CACHE_HOST = "direct.learnpython.org"
DB_HOST = "direct.learnpython.org"
SECRET_KEY = "this is a secret. really."

LEARNPYTHON_DOMAIN = "learnpython.org"
LEARNJAVA_DOMAIN = "learnjavaonline.org"
LEARNC_DOMAIN = "learn-c.org"
LEARNCPP_DOMAIN = "learn-cpp.org"
LEARNJS_DOMAIN = "learn-js.org"
LEARNRUBY_DOMAIN = "learnrubyonline.org"
LEARNSHELL_DOMAIN = "learnshell.org"
LEARNPHP_DOMAIN = "learn-php.org"
LEARNPERL_DOMAIN = "learn-perl.org"
LEARNCS_DOMAIN = "learncs.org"
LEARNHTML_DOMAIN = "learn-html.org"


DOMAIN_DATA = {
    LEARNPYTHON_DOMAIN : {
        "language" : "python",
        "analytics" : "UA-22741967-1",
        "namespace" : "learnpython.org",
        "full_url" : "http://learnpython.org",
        "sender" : "LearnPython.org <admin@learnpython.org>",
        "styled_domain" : "LearnPython.org",
        "contact_email" : "admin@learnpython.org",
        "support_email" : "support@learnpython.org",
        "logo" : "/static/img/logos/learnpython.png",
        "language_uppercase" : "Python",
        "twitter" : "@learnpython",
        "favicon" : "favicon-learnpython.ico",
        "copyright" : "Copyright &copy; LearnPython.org.",
        "default_code" : """# Welcome to the Interactive Python Tutorial.
# Start by choosing a chapter and
# write your code in this window.

print "Hello, World!"
    """
    },
    LEARNHTML_DOMAIN : {
        "language" : "html",
        "analytics" : "UA-22741967-10",
        "namespace" : "learn-html.org",
        "full_url" : "http://learn-html.org",
        "sender" : "Learn-HTML.org <admin@learnhtml.org>",
        "styled_domain" : "LearnHTML.org",
        "contact_email" : "admin@learn-html.org",
        "support_email" : "support@learn-html.org",
        "logo" : "/static/img/logos/learnhtml.png",
        "language_uppercase" : "HTML",
        "twitter" : "@learnhtml",
        "favicon" : "favicon-learnhtml.ico",
        "copyright" : "Copyright &copy; Learn-HTML.org.",
        "default_code" : """<!-- Welcome to the Interactive HTML & CSS Tutorial.
Start by choosing a chapter and
write your code in this window.
-->
<!DOCTYPE html>
<html>
    <head>
        <title>Hello, World!</title>
    </head>
    <body>
        <p>Hello, World!</p>
    </body>
</html>
"""
    },

    LEARNC_DOMAIN : {
        "language" : "c",
        "analytics" : "UA-22741967-3",
        "namespace" : "learn-c.org",
        "full_url" : "http://learn-c.org",
        "sender" : "Learn-C.org <admin@learn-c.org>",
        "styled_domain" : "Learn-C.org",
        "contact_email" : "admin@learn-c.org",
        "support_email" : "support@learn-c.org",
        "logo" : "/static/img/logos/learn-c.png",
        "language_uppercase" : "C",
        "twitter" : "@learnc",
        "favicon" : "favicon-learn-c.ico",
        "copyright" : "Copyright &copy; Learn-C.org. ",
        "default_code" : """/* Welcome to the Interactive C Tutorial.
Start by choosing a chapter and
write your code in this window. */

#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
    """,
        "container_word" : "main()",
        "container_indent" : "    ",
        "container" : """#include <stdio.h>

int main() {
{code}
return 0;
}
"""
    },
    LEARNCPP_DOMAIN : {
        "language" : "c++11",
        "analytics" : "UA-22741967-3",
        "namespace" : "learn-cpp.org",
        "full_url" : "http://learn-cpp.org",
        "sender" : "Learn-cpp.org <admin@learn-cpp.org>",
        "styled_domain" : "Learn-cpp.org",
        "contact_email" : "admin@learn-cpp.org",
        "support_email" : "support@learn-cpp.org",
        "logo" : "/static/img/logos/learn-cpp.png",
        "language_uppercase" : "C++",
        "twitter" : "@learncpp",
        "favicon" : "favicon-learn-cpp.ico",
        "copyright" : "Copyright &copy; Learn-cpp.org. ",
        "default_code" : """// Welcome to the Interactive C++ Tutorial.
// Start by choosing a chapter and
// write your code in this window.

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
    """,
        "container_word" : "main()",
        "container_indent" : "    ",
        "container" : """#include <iostream>
using namespace std;

int main() {
{code}
return 0;
}
"""
    },
    LEARNJAVA_DOMAIN : {
        "language" : "java",
        "analytics" : "UA-22741967-4",
        "namespace" : "learnjavaonline.org",
        "full_url" : "http://learnjavaonline.org",
        "sender" : "LearnJavaOnline.org <admin@learnjavaonline.org>",
        "styled_domain" : "LearnJavaOnline.org",
        "contact_email" : "admin@learnjavaonline.org",
        "support_email" : "support@learnjavaonline.org",
        "logo" : "/static/img/logos/learnjavaonline.png",
        "language_uppercase" : "Java",
        "twitter" : "@learnjava",
        "favicon" : "favicon-learnjava.ico",
        "copyright" : "Copyright &copy; LearnJavaOnline.org.",
        "default_code" : """// Welcome to the Interactive Java Tutorial.
// Start by choosing a chapter and
// write your code in this window.

public class Main {

    public static void main(String[] args) {

        System.out.println("Hello, World!");

  }

}
""",
        "container_word" : "class",
        "container_indent" : "        ",
        "container" : """public class Main {
    public static void main(String[] args) {
{code}
    }
}
"""

    },
    LEARNJS_DOMAIN : {
        "language" : "javascript",
        "analytics" : "UA-22741967-5",
        "namespace" : "learn-js.org",
        "full_url" : "http://learn-js.org",
        "sender" : "Learn-JS.org <admin@learn-js.org>",
        "styled_domain" : "Learn-JS.org",
        "contact_email" : "admin@learn-js.org",
        "support_email" : "support@learn-js.org",
        "logo" : "/static/img/logos/learn-js.png",
        "language_uppercase" : "JavaScript",
        "twitter" : "@learnjs",
        "favicon" : "favicon-learn-js.ico",
        "copyright" : "Copyright &copy; Learn-JS.org.",
        "default_code" : """// Welcome to the Interactive JavaScript Tutorial.
// Start by choosing a chapter and
// write your code in this window.

console.log("Hello, World!");
"""
    },
    LEARNRUBY_DOMAIN : {
        "language" : "ruby",
        "analytics" : "UA-22741967-6",
            "namespace" : "learnrubyonline.org",
        "full_url" : "http://learnrubyonline.org",
        "sender" : "Learn-JS.org <admin@learnrubyonline.org>",
        "styled_domain" : "LearnRubyOnline.org",
        "contact_email" : "admin@learnrubyonline.org",
        "support_email" : "support@learnrubyonline.org",
        "logo" : "/static/img/logos/learnrubyonline.png",
        "language_uppercase" : "Ruby",
        "twitter" : "@learnruby",
        "favicon" : "favicon-ruby.ico",
        "copyright" : "Copyright &copy; LearnRubyOnline.org.",
        "default_code" : """# Welcome to the Interactive Ruby Tutorial.
# Start by choosing a chapter and
# write your code in this window.

puts 'Hello, World!'
"""
    },
    LEARNSHELL_DOMAIN : {
        "language" : "bash",
        "analytics" : "UA-22741967-7",
        "namespace" : "learnshell.org",
        "full_url" : "http://learnshell.org",
        "sender" : "LearnShell.org <admin@learnshell.org>",
        "styled_domain" : "LearnShell.org",
        "contact_email" : "admin@learnshell.org",
        "support_email" : "support@learnshell.org",
        "logo" : "/static/img/logos/learnshell.png",
        "language_uppercase" : "Shell Programming",
        "twitter" : "@learnshell",
        "favicon" : "favicon-shell.ico",
        "copyright" : "Copyright &copy; LearnShell.org.",
        "default_code" : """#!/bin/bash
# Welcome to the Interactive Shell Tutorial.
# Start by choosing a chapter and
# write your code in this window.

echo "Hello, World!";
"""
    },

    LEARNPERL_DOMAIN : {
        "language" : "perl",
        "analytics" : "UA-22741967-8",
         "namespace" : "learn-perl.org",
        "full_url" : "http://learn-perl.org",
        "sender" : "Learn-Perl.org <admin@learn-perl.org>",
        "styled_domain" : "Learn-Perl.org",
        "contact_email" : "admin@learn-perl.org",
        "support_email" : "support@learn-perl.org",
        "logo" : "/static/img/logos/learn-perl.png",
        "language_uppercase" : "Perl",
        "twitter" : "@learnperl",
        "favicon" : "favicon-learn-perl.ico",
        "copyright" : "Copyright &copy; Learn-Perl.org.",
        "default_code" : """# Welcome to the Interactive Perl Tutorial.
# Start by choosing a chapter and write your code in this window.

print 'Hello, World!';
"""},

    LEARNPHP_DOMAIN : {
        "language" : "php",
        "analytics" : "UA-22741967-9",
        "namespace" : "learn-php.org",
        "full_url" : "http://learn-php.org",
        "sender" : "Learn-PHP.org <admin@learn-php.org>",
        "styled_domain" : "Learn-PHP.org",
        "contact_email" : "admin@learn-php.org",
        "support_email" : "support@learn-php.org",
        "logo" : "/static/img/logos/learn-php.png",
        "language_uppercase" : "PHP",
        "twitter" : "@learnphp",
        "favicon" : "favicon-learn-php.ico",
        "copyright" : "Copyright &copy; Learn-PHP.org.",
        "default_code" : """<?php
// Welcome to the Interactive PHP Tutorial.
// Start by choosing a chapter and
// write your code in this window.

echo "Hello, World!";
?>
""",
        "container_word" : "<?",
        "container_indent" : "",
        "container" : """<?php
{code}
?>""",
    },

    LEARNCS_DOMAIN : {
        "language" : "c#",
        "analytics" : "UA-22741967-10",
        "namespace" : "learncs.org",
        "full_url" : "http://learncs.org",
        "sender" : "LearnCS.org <admin@learncs.org>",
        "styled_domain" : "LearnCS.org",
        "contact_email" : "admin@learncs.org",
        "support_email" : "support@learncs.org",
        "logo" : "/static/img/logos/learncs.png",
        "language_uppercase" : "C#",
        "twitter" : "@learncs",
        "favicon" : "favicon-learncs.ico",
        "copyright" : "Copyright &copy; LearnCS.org.",
        "default_code" : """// Welcome to the Interactive C# Tutorial.
// Start by choosing a chapter and write your code in this window.

using System;

public class Hello
{
    public static void Main()
    {
        Console.WriteLine("Hello, World!");
    }
}
""",
        "container_word" : "class",
        "container_indent" : "        ",
        "container" : """using System;
using System.Collections.Generic;

public class Hello
{
    public static void Main()
    {
{code}
    }
}
""",
        },
}