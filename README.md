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
* [learnrust.org](https://learnrust.org)

Please feel free to contribute your tutorials or exercises by sending a pull request and adding yourself on the list.

To run locally, first create a new file called `app.env` based on `app.env.example`.
(you don't need working credentials to run the website, just to execute code).

### Running with Docker

Execute:

    DEFAULT_DOMAIN=learnpython.org make run

This command will run learnpython.org website by default using Docker Compose.

To run a specific website, run with the DEFAULT_DOMAIN option set, as follows:

    DEFAULT_DOMAIN=learn-js.org make run

By default, the server process will run at http://localhost:5000.

The web server will locally compile and load all Markdown files into memory. The docker needs to be rebuilt upon any change in the Python code or the Markdown code.

### Running without Docker (locally)

To run the development server outside of a Docker, run the following command once: 

    make build-local

And then run:

    DEFAULT_DOMAIN=learn-js.org make run-local
    

### IDEOne Credentials

To make the IDEOne execution API work locally, you must obtain a username and password, 
and add the credentials to a file called app.env.
(TBD: add an option to use the remote version) 

Contributors
============
- superreg
- JBoy Advance
- qwong95
- AddaxSoft
- derco0n
- ...<perhaps you>...

<p>This project is supported by:</p>
<p>
  <a href="https://www.digitalocean.com/">
    <img src="https://opensource.nyc3.cdn.digitaloceanspaces.com/attribution/assets/SVG/DO_Logo_horizontal_blue.svg" width="201px">
  </a>
</p>