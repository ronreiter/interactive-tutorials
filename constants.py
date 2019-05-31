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
LEARNSQL_DOMAIN = "learnsqlonline.org"

from collections import OrderedDict

DOMAIN_DATA = OrderedDict()
DOMAIN_DATA[LEARNPYTHON_DOMAIN] = {
        "language" : "python",
        "codemirror_mode": "python",
        "prism_mode": "language-python",
        "analytics" : "UA-22741967-1",
        "language_uppercase" : "Python",
        "default_code" : """# Welcome to the Interactive Python Tutorial.
# Start by choosing a chapter and
# write your code in this window.

print "Hello, World!"
    """
}

DOMAIN_DATA[LEARNJAVA_DOMAIN] = {
        "language" : "java",
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

DOMAIN_DATA[LEARNPHP_DOMAIN] = {
        "language" : "php",
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
for domain, v in DOMAIN_DATA.iteritems():
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



