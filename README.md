Interactive Tutorials
=====================

This is the open source repository for the free interactive tutorial websites:

* [learnpython.org](https://www.learnpython.org)
* [learnjavaonline.org](https://www.learnjavaonline.org)
* [learn-html.org](https://www.learn-html.org)
* [learn-c.org](https://www.learn-c.org)
* [learn-cpp.org](https://www.learn-cpp.org)
* [learn-js.org](https://www.learn-js.org)
* [learn-php.org](https://www.learn-php.org)
* [learnshell.org](https://www.learnshell.org)
* [learncs.org](https://www.learncs.org)
* [learn-perl.org](https://www.learn-perl.org)
* [learnrubyonline.org](https://www.learnrubyonline.org)
* [learn-golang.org](https://www.learn-golang.org)
* [learnRust.org](https://learnRust.org)

Please feel free to contribute your tutorials or exercises by sending a pull request and adding yourself on the list.

To run locally, execute:

    make build
    make run   

By default, the server process will run at http://localhost:5000.

Make build will build a Dockerfile and make run will default to run with `learnpython.org`.

The web server will locally compile and load all Markdown files into memory. The development version of the web server
requires that you specify the domain you are working on, e.g.:

The docker needs to be rebuilt upon any change in the Python code or the Markdown code.

To run the development server outside of a Docker, create a Python 2 virtualenv and install the requirements.

    # create the virtualenv
    mkvirtualenv interactive-tutorials
    
    # install requirements
    pip install -r requirements.txt
    
    # run the development server
    python main.py -d learnpython.org
    

Todos
=====

* Dark mode
* Fix mobile


Contributors
============
- superreg
- JBoy Advance
- qwong95
- AddaxSoft
- derco0n
- ...<perhaps you>...