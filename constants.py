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
LEARNGO_DOMAIN = "learn-golang.org"
LEARNSCALA_DOMAIN = "learnscala.org"
LEARNSOLIDITY_DOMAIN = "learnsolidity.org"

DOMAIN_DATA = {
    LEARNPYTHON_DOMAIN : {
        "language" : "python",
        "codemirror_mode": "python",
        "prism_mode": "language-python",
        "analytics" : "UA-22741967-1",
        "namespace" : "learnpython.org",
        "full_url" : "http://learnpython.org",
        "sender" : "LearnPython.org <admin@learnpython.org>",
        "styled_domain" : "LearnPython.org",
        "contact_email" : "admin@learnpython.org",
        "support_email" : "support@learnpython.org",
        "logo" : "/static/img/logos/learnpython.png",
        "share_logo" : "/static/img/share-logos/learnpython-share.png",
        "language_uppercase" : "Python",
        "favicon" : "favicon-learnpython.ico",
        "default_code" : """# Welcome to the Interactive Python Tutorial.
# Start by choosing a chapter and
# write your code in this window.

print "Hello, World!"
    """
    },
    LEARNHTML_DOMAIN : {
        "language" : "html",
        "codemirror_mode": "text/html",
        "prism_mode": "language-html",
        "analytics" : "UA-22741967-11",
        "namespace" : "learn-html.org",
        "full_url" : "http://learn-html.org",
        "sender" : "Learn-HTML.org <admin@learnhtml.org>",
        "styled_domain" : "LearnHTML.org",
        "contact_email" : "admin@learn-html.org",
        "support_email" : "support@learn-html.org",
        "logo" : "/static/img/logos/learnhtml.png",
        "share_logo" : "/static/img/share-logos/learnhtml-share.png",
        "language_uppercase" : "HTML",
        "favicon" : "favicon-learnhtml.ico",
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
        "codemirror_mode": "text/x-csrc",
        "prism_mode": "language-c",
        "analytics" : "UA-22741967-3",
        "namespace" : "learn-c.org",
        "full_url" : "http://learn-c.org",
        "sender" : "Learn-C.org <admin@learn-c.org>",
        "styled_domain" : "Learn-C.org",
        "contact_email" : "admin@learn-c.org",
        "support_email" : "support@learn-c.org",
        "logo" : "/static/img/logos/learn-c.png",
        "share_logo" : "/static/img/share-logos/learn-c-share.png",
        "language_uppercase" : "C",
        "favicon" : "favicon-learn-c.ico",
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
        "codemirror_mode": "text/x-csrc",
        "prism_mode": "language-cpp",
        "analytics" : "UA-22741967-12",
        "namespace" : "learn-cpp.org",
        "full_url" : "http://learn-cpp.org",
        "sender" : "Learn-cpp.org <admin@learn-cpp.org>",
        "styled_domain" : "Learn-cpp.org",
        "contact_email" : "admin@learn-cpp.org",
        "support_email" : "support@learn-cpp.org",
        "logo" : "/static/img/logos/learn-cpp.png",
        "share_logo" : "/static/img/share-logos/learn-cpp-share.png",
        "language_uppercase" : "C++",
        "favicon" : "favicon-learn-cpp.ico",
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
        "codemirror_mode": "text/x-java",
        "prism_mode": "language-java",
        "analytics" : "UA-22741967-4",
        "namespace" : "learnjavaonline.org",
        "full_url" : "http://learnjavaonline.org",
        "sender" : "LearnJavaOnline.org <admin@learnjavaonline.org>",
        "styled_domain" : "LearnJavaOnline.org",
        "contact_email" : "admin@learnjavaonline.org",
        "support_email" : "support@learnjavaonline.org",
        "logo" : "/static/img/logos/learnjavaonline.png",
        "share_logo" : "/static/img/share-logos/learnjavaonline-share.png",
        "language_uppercase" : "Java",
        "favicon" : "favicon-learnjava.ico",
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
        "codemirror_mode": "text/javascript",
        "prism_mode": "language-javascript",
        "analytics" : "UA-22741967-5",
        "namespace" : "learn-js.org",
        "full_url" : "http://learn-js.org",
        "sender" : "Learn-JS.org <admin@learn-js.org>",
        "styled_domain" : "Learn-JS.org",
        "contact_email" : "admin@learn-js.org",
        "support_email" : "support@learn-js.org",
        "logo" : "/static/img/logos/learn-js.png",
        "share_logo" : "/static/img/share-logos/learn-js-share.png",
        "language_uppercase" : "JavaScript",
        "favicon" : "favicon-learn-js.ico",
        "default_code" : """// Welcome to the Interactive JavaScript Tutorial.
// Start by choosing a chapter and
// write your code in this window.

console.log("Hello, World!");
"""
    },
    LEARNRUBY_DOMAIN : {
        "language" : "ruby",
        "codemirror_mode": "text/x-ruby",
        "prism_mode": "language-ruby",
        "analytics" : "UA-22741967-6",
        "namespace" : "learnrubyonline.org",
        "full_url" : "http://learnrubyonline.org",
        "sender" : "Learn-JS.org <admin@learnrubyonline.org>",
        "styled_domain" : "LearnRubyOnline.org",
        "contact_email" : "admin@learnrubyonline.org",
        "support_email" : "support@learnrubyonline.org",
        "logo" : "/static/img/logos/learnrubyonline.png",
        "share_logo" : "/static/img/share-logos/learnrubyonline-share.png",
        "language_uppercase" : "Ruby",
        "favicon" : "favicon-ruby.ico",
        "default_code" : """# Welcome to the Interactive Ruby Tutorial.
# Start by choosing a chapter and
# write your code in this window.

puts 'Hello, World!'
"""
    },
    LEARNSHELL_DOMAIN : {
        "language" : "bash",
        "codemirror_mode": "text/x-sh",
        "prism_mode": "language-bash",
        "analytics" : "UA-22741967-7",
        "namespace" : "learnshell.org",
        "full_url" : "http://learnshell.org",
        "sender" : "LearnShell.org <admin@learnshell.org>",
        "styled_domain" : "LearnShell.org",
        "contact_email" : "admin@learnshell.org",
        "support_email" : "support@learnshell.org",
        "logo" : "/static/img/logos/learnshell.png",
        "share_logo" : "/static/img/share-logos/learnshell-share.png",
        "language_uppercase" : "Shell Programming",
        "favicon" : "favicon-shell.ico",
        "default_code" : """#!/bin/bash
# Welcome to the Interactive Shell Tutorial.
# Start by choosing a chapter and
# write your code in this window.

echo "Hello, World!";
"""
    },

    LEARNPERL_DOMAIN : {
        "language" : "perl",
        "codemirror_mode": "text/x-perl",
        "prism_mode": "language-perl",
        "analytics" : "UA-22741967-8",
         "namespace" : "learn-perl.org",
        "full_url" : "http://learn-perl.org",
        "sender" : "Learn-Perl.org <admin@learn-perl.org>",
        "styled_domain" : "Learn-Perl.org",
        "contact_email" : "admin@learn-perl.org",
        "support_email" : "support@learn-perl.org",
        "logo" : "/static/img/logos/learn-perl.png",
        "share_logo" : "/static/img/share-logos/learn-perl-share.png",
        "language_uppercase" : "Perl",
        "favicon" : "favicon-learn-perl.ico",
        "default_code" : """# Welcome to the Interactive Perl Tutorial.
# Start by choosing a chapter and write your code in this window.

print 'Hello, World!';
"""},

    LEARNPHP_DOMAIN : {
        "language" : "php",
        "codemirror_mode": "application/x-httpd-php",
        "prism_mode": "language-php",
        "analytics" : "UA-22741967-9",
        "namespace" : "learn-php.org",
        "full_url" : "http://learn-php.org",
        "sender" : "Learn-PHP.org <admin@learn-php.org>",
        "styled_domain" : "Learn-PHP.org",
        "contact_email" : "admin@learn-php.org",
        "support_email" : "support@learn-php.org",
        "logo" : "/static/img/logos/learn-php.png",
        "share_logo" : "/static/img/share-logos/learn-php-share.png",
        "language_uppercase" : "PHP",
        "favicon" : "favicon-learn-php.ico",
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
        "codemirror_mode": "text/x-csharp",
        "prism_mode": "language-csharp",
        "analytics" : "UA-22741967-10",
        "namespace" : "learncs.org",
        "full_url" : "http://learncs.org",
        "sender" : "LearnCS.org <admin@learncs.org>",
        "styled_domain" : "LearnCS.org",
        "contact_email" : "admin@learncs.org",
        "support_email" : "support@learncs.org",
        "logo" : "/static/img/logos/learncs.png",
        "share_logo" : "/static/img/share-logos/learncs-share.png",
        "language_uppercase" : "C#",
        "favicon" : "favicon-learncs.ico",
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

    LEARNGO_DOMAIN : {
        "language" : "go",
        "codemirror_mode": "text/x-go",
        "prism_mode": "language-go",
        "analytics" : "UA-22741967-13",
        "namespace" : "learn-golang.org",
        "full_url" : "http://learn-golang.org",
        "sender" : "LearnCS.org <admin@learn-golang.org>",
        "styled_domain" : "Learn-GoLang.org",
        "contact_email" : "admin@learn-golang.org",
        "support_email" : "support@learn-golang.org",
        "logo" : "/static/img/logos/learn-golang.png",
        "share_logo" : "/static/img/share-logos/learn-golang-share.png",
        "language_uppercase" : "Go",
        "favicon" : "favicon-learngolang.ico",
        "default_code" : """// Welcome to the Interactive Go Tutorial.
// Start by choosing a chapter, write your code in this window.
package main

import (
    "fmt"
)

func main() {
    fmt.Println("Hello, world!")
}
""",
        "container_word" : "class",
        "container_indent" : "        ",
        "container" : """package main

import (
    "fmt"
)

func main() {
{code}
}
""",

    },
    LEARNSCALA_DOMAIN : {
        "language" : "scala",
        "codemirror_mode": "text/x-scala",
        "prism_mode": "language-scala",
        "analytics" : "UA-22741967-14",
        "namespace" : "learnscala.org",
        "full_url" : "http://learnscala.org",
        "sender" : "LearnScala.org <admin@learnscala.org>",
        "styled_domain" : "LearnScala.org",
        "contact_email" : "admin@learnscala.org",
        "support_email" : "support@learnscala.org",
        "logo" : "/static/img/logos/learnscala.png",
        "share_logo" : "/static/img/share-logos/learnscala-share.png",
        "language_uppercase" : "Scala",
        "favicon" : "favicon-learnscala.ico",
        "default_code" : """// Welcome to the Interactive Scala Tutorial.
// Start by choosing a chapter, write your code in this window.
object Main {
    def main(args: Array[String]) {
        println("Hello, World!\\n");
    }
} 

""",
        "container_word": "object",
        "container_indent": "    ",
        "container": """object Test {
    def main(args: Array[String]) {
        println("Hello, World!\\n");
    }
} 

""",
    },
    LEARNSOLIDITY_DOMAIN: {
        "language" : "solidity",
        "codemirror_mode": "text/x-solidity",
        "prism_mode": "language-solidity",
        "analytics" : "UA-22741967-15",
        "namespace" : "learnsolidity.org",
        "full_url" : "http://learnsolidity.org",
        "sender" : "LearnSolidity.org <admin@learnsolidity.org>",
        "styled_domain" : "LearnSolidity.org",
        "contact_email" : "admin@learnsolidity.org",
        "support_email" : "support@learnsolidity.org",
        "logo" : "/static/img/logos/learnsolidity.png",
        "share_logo" : "/static/img/share-logos/learnsolidity-share.png",
        "language_uppercase" : "Solidity",
        "favicon" : "favicon-learnsolidity.ico",
        "default_code" : """// Welcome to the Interactive Solidity Tutorial.
// Start by choosing a chapter, write your code in this window.

""",
        "container_word" : "",
        "container_indent" : "",
        "container" : """
""",


    },
}
