Process Substitution
-----------------
In the previous section we've seen how to chain output of one command to the next one.
But what if you want to chain the output of two or more commands to the another one?
What if you have a command that takes a file as argument but you would like to process whatever is send to that file?

Process substitution allows a process’s input or output to be referred to using a filename.
It has two forms: output ``<(cmd)``, and input ``>(cmd)``.

### Example:
#### Output
Imagine you've two files for which you want to compare the content. Using ``diff file1 file2`` could generate false positives in the case lines are not ordered.
So if you want to compare those files you could create two new files, ordered, and compare those. It would look like:

    sort file1 > sorted_file1
    sort file2 > sorted_file2
    diff sorted_file1 sorted_file2

With process substitution you can do it in one line:

    diff <(sort file1) <(sort file2)

#### Input
Imagine you want to store logs of an application into a file and at the same time print it on the console. A very handy command for that is ``tee``.

    echo "Hello, world!" | tee /tmp/hello.txt

Now let say you want to have only lower case characters in the file but keep the regular case on the output.
You could use process substitution that way:

    echo "Hello, world!" | tee >(tr '[:upper:]' '[:lower:]' > /tmp/hello.txt)

Exercise
--------

There is no exercise for this section.
