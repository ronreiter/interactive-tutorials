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
LEARNSQL_DOMAIN = "learnsqlonline.org"
LEARNTS_DOMAIN = "learn-ts.org"


from collections import OrderedDict

# {1: C++ [GCC] (5.1.1),
#  2: Pascal [GPC] (gpc 20070904),
#  3: Perl (perl 5.20.1),
#  4: Python 2.x [Pypy] (2.7.13),
#  5: Fortran (5.1.1),
#  6: Whitespace (wspace 0.3),
#  7: Ada (gnat 5.1.1),
#  8: Ocaml (4.01.0),
#  9: Intercal (c-intercal 28.0-r1),
#  10: Java (jdk 8u51),
#  11: C (gcc 5.1.1),
#  12: Brainf**k (1.0.6),
#  13: Assembler [NASM] (NASM 2.11.05),
#  14: CLIPS (clips 6.24),
#  15: Prolog [SWI] (swi 7.2),
#  16: Icon (icon 9.4.3),
#  17: Ruby (ruby 2.1.5),
#  18: Scheme (stalin 0.3),
#  19: Pike (pike v7.8),
#  20: D [GDC] (gdc-5 5.1.1),
#  21: Haskell (ghc 7.8),
#  22: Pascal [FPC] (fpc 2.6.4+dfsg-6),
#  23: Smalltalk (gst 3.2.4),
#  25: Nice (0.9.13),
#  26: Lua (lua 7.2),
#  27: C# [Mono] (Mono 4.0.2),
#  28: Bash (bash 4.3.33),
#  29: PHP (PHP 5.6.11-1),
#  30: Nemerle (ncc 1.2.0),
#  32: Common Lisp [CLISP] (clisk 2.49),
#  33: Scheme [Guile] (guile 2.0.11),
#  34: C99 strict (gcc-5 5.1.1),
#  35: JavaScript [Rhino] (rhino 1.7.7),
#  36: Erlang (erl 18),
#  38: Tcl (tclsh 8.6),
#  39: Scala (2.11.7),
#  40: SQL (sqlite3-3.8.7),
#  41: C++ 4.3.2 (gcc-4.3.2),
#  42: Assembler [NASM 64bit] (nasm 2.12.01),
#  43: Objective-C (gcc-5 5.1.1),
#  44: C++14 [GCC] (gcc-5 5.1.1),
#  45: Assembler [GCC] (gcc 4.9.3),
#  46: Sed (sed 4.2.2),
#  47: Kotlin (kotlin 1.0.6),
#  50: VB.NET (mono 4.0.2),
#  54: Perl 6 (perl6 2014.07),
#  56: Node.js (node 7.4.0),
#  57: TypeScript (3.4.5),
#  85: Swift (swift 3.0.2),
#  93: Rust (1.14.0),
#  97: Scheme [Chicken] (chicken 4.11.0),
#  99: Python (Pypy) (PyPy 2.6.0),
#  102: D [DMD] (dmd 2.072.2),
#  104: AWK [GAWK] (fawk 4.1.1),
#  105: AWK [MAWK] (mawk 1.3.3),
#  107: Forth (gforth 0.7.2),
#  108: Prolog [GNU] (gnu prolog 1.4.5),
#  110: bc (bc 1.06.95),
#  111: Clojure (clojure 1.7.0),
#  112: JavaScript [SpiderMonkey] (24.2.0),
#  114: Go (1.4),
#  116: Python 3.x (3.5.3),
#  117: R (3.2.2),
#  118: COBOL (1.1.0),
#  121: Groovy (2.4),
#  124: F# (1.3),
#  127: Octave (4.0.0)}

DOMAIN_DATA = OrderedDict()
DOMAIN_DATA[LEARNPYTHON_DOMAIN] = {
        "language" : "python",
        "language_id": 116,
        "codemirror_mode": "python",
        "prism_mode": "language-python",
        "analytics" : "UA-22741967-1",
        "language_uppercase" : "Python",
        "default_code" : """# Welcome to the Interactive Python Tutorial.
# Start by choosing a chapter and
# write your code in this window.

print("Hello, World!")
    """
}

DOMAIN_DATA[LEARNJAVA_DOMAIN] = {
        "language" : "java",
        "language_id": 10,
        "codemirror_mode": "text/x-java",
        "prism_mode": "language-java",
        "analytics" : "UA-22741967-4",
        "language_uppercase" : "Java",
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

}

DOMAIN_DATA[LEARNHTML_DOMAIN] = {
        "language" : "html",
        "codemirror_mode": "text/html",
        "prism_mode": "language-html",
        "analytics" : "UA-22741967-11",
        "language_uppercase" : "HTML",
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
}

DOMAIN_DATA[LEARNGO_DOMAIN] = {
        "language" : "go",
        "language_id": 114,
        "codemirror_mode": "text/x-go",
        "prism_mode": "language-go",
        "analytics" : "UA-22741967-13",
        "language_uppercase" : "Go",
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

}

DOMAIN_DATA[LEARNC_DOMAIN] = {
        "language" : "c",
        "language_id": 1,
        "codemirror_mode": "text/x-csrc",
        "prism_mode": "language-c",
        "analytics" : "UA-22741967-3",
        "language_uppercase" : "C",
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
}

DOMAIN_DATA[LEARNCPP_DOMAIN] = {
        "language" : "c++11",
        "language_id": 1,
        "codemirror_mode": "text/x-csrc",
        "prism_mode": "language-cpp",
        "analytics" : "UA-22741967-12",
        "language_uppercase" : "C++",
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
}

DOMAIN_DATA[LEARNJS_DOMAIN] = {
        "language" : "javascript",
        "language_id": 35,
        "codemirror_mode": "text/javascript",
        "prism_mode": "language-javascript",
        "analytics" : "UA-22741967-5",
        "language_uppercase" : "JavaScript",
        "default_code" : """// Welcome to the Interactive JavaScript Tutorial.
// Start by choosing a chapter and
// write your code in this window.

console.log("Hello, World!");
"""
}

DOMAIN_DATA[LEARNTS_DOMAIN] = {
        "language": "typescript",
        "language_id": 57,
        "codemirror_mode": "text/typescript",
        "prism_mode": "language-javascript",
        "analytics": "UA-22741967-5",
        "language_uppercase" : "TypeScript",
        "default_code": """// Welcome to the Interactive TypeScript Tutorial.
// Start by choosing a chapter and
// write your code in this window.

console.log("Hello, World!");
"""
}

DOMAIN_DATA[LEARNPHP_DOMAIN] = {
        "language" : "php",
        "language_id": 29,
        "codemirror_mode": "application/x-httpd-php",
        "prism_mode": "language-php",
        "analytics" : "UA-22741967-9",
        "language_uppercase" : "PHP",
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
}

DOMAIN_DATA[LEARNSHELL_DOMAIN] = {
        "language" : "bash",
        "language_id": 28,
        "codemirror_mode": "text/x-sh",
        "prism_mode": "language-bash",
        "analytics" : "UA-22741967-7",
        "language_uppercase" : "Shell",
        "default_code" : """#!/bin/bash
# Welcome to the Interactive Shell Tutorial.
# Start by choosing a chapter and
# write your code in this window.

echo "Hello, World!";
"""
}

DOMAIN_DATA[LEARNCS_DOMAIN] = {
        "language" : "c#",
        "language_id": 27,
        "codemirror_mode": "text/x-csharp",
        "prism_mode": "language-csharp",
        "analytics" : "UA-22741967-10",
        "language_uppercase" : "C#",
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
}

DOMAIN_DATA[LEARNPERL_DOMAIN] = {
        "language" : "perl",
        "language_id": 3,
        "codemirror_mode": "text/x-perl",
        "prism_mode": "language-perl",
        "analytics" : "UA-22741967-8",
        "language_uppercase" : "Perl",
        "default_code" : """# Welcome to the Interactive Perl Tutorial.
# Start by choosing a chapter and write your code in this window.

print 'Hello, World!';
"""
}

DOMAIN_DATA[LEARNRUBY_DOMAIN] = {
        "language" : "ruby",
        "language_id": 17,
        "codemirror_mode": "text/x-ruby",
        "prism_mode": "language-ruby",
        "analytics" : "UA-22741967-6",
        "language_uppercase" : "Ruby",
        "default_code" : """# Welcome to the Interactive Ruby Tutorial.
# Start by choosing a chapter and
# write your code in this window.

puts 'Hello, World!'
"""
}

DOMAIN_DATA[LEARNSCALA_DOMAIN] = {
        "language" : "scala",
        "language_id": 39,
        "codemirror_mode": "text/x-scala",
        "prism_mode": "language-scala",
        "analytics" : "UA-22741967-14",
        "namespace" : "learnscala.org",
        "language_uppercase" : "Scala",
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
}

# DOMAIN_DATA[LEARNSOLIDITY_DOMAIN] = {
#         "language" : "solidity",
#         "codemirror_mode": "text/x-solidity",
#         "prism_mode": "language-solidity",
#         "analytics" : "UA-22741967-15",
#         "language_uppercase" : "Solidity",
#         "default_code" : """// Welcome to the Interactive Solidity Tutorial.
# // Start by choosing a chapter, write your code in this window.
#
# """,
#         "container_word" : "",
#         "container_indent" : "",
#         "container" : """
# """,
#
# }

DOMAIN_DATA[LEARNSQL_DOMAIN] = {
        "language" : "sql",
        "language_id": 40,
        "codemirror_mode": "text/x-sql",
        "prism_mode": "language-sql",
        "analytics" : "UA-22741967-16",
        "language_uppercase" : "SQL",
        "default_code" : """-- Welcome to the Interactive SQL Tutorial.
-- Start by choosing a chapter, write your code in this window.

CREATE TABLE helloworld (phrase TEXT);
INSERT INTO helloworld VALUES ("Hello, World!");
INSERT INTO helloworld VALUES ("Goodbye, World!");

SELECT * FROM helloworld WHERE phrase = "Hello, World!";
""",
        "container_word" : "",
        "container_indent" : "",
        "container" : """
""",


}

# this will run once
for domain, v in list(DOMAIN_DATA.items()):
    v["namespace"] = domain
    v["full_url"] = "https://www." + v["namespace"]
    v["contact_email"] = "admin@" + v["namespace"]
    v["support_email"] = "support@" + v["namespace"]

    v["logo"] = "/static/img/logos/" + v["namespace"] + ".png"
    v["share_logo"] = "/static/img/share-logos/" + v["namespace"] + ".png"
    v["favicon"] = "/static/img/favicons/" + v["namespace"] + ".ico"
    v["styled_domain"] = domain
    v["sender"] = "%s <%s>" % (domain, v["contact_email"])

    import os
    if not os.path.exists(v["logo"][1:]):
        raise Exception("no logo for %s - %s" % (domain, v["logo"][1:]))
    if not os.path.exists(v["share_logo"][1:]):
        raise Exception("no share logo for %s - %s" % (domain, v["share_logo"][1:]))
    if not os.path.exists(v["favicon"][1:]):
        raise Exception("no favicon for %s - %s" % (domain, v["favicon"][1:]))



