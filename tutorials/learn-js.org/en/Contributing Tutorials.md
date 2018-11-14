Contributing Tutorials
----------------------

To contribute tutorials, simply fork the following repository:

[[https://github.com/ronreiter/interactive-tutorials]]

Then you may add or edit tutorials, and then send me a pull request.

To write a tutorial, simply create a Markdown page under the relevant directory in the `tutorials` directory, and link it in the welcome screen in the relevant section. After adding it, please make sure that it linked correctly by running the Flask web server.

To link to the tutorial that you have created, create a link from the page you would like to link from (usually the `Welcome.md` page) using double brackets.

Each tutorial consists of a brief explanation of the subject, and a short exercise which will test the user. Once the user has finished modifying the code according to the exercise, it should execute to print out the expected output that you will provide.

Every tutorial must have the following structure:

### File name.md

    Tutorial
    --------
    Here you may write text that explains a certain feature.

    Exercise
    --------
    Here you will need to write the purpose of the exercise. Finishing the exercise correctly
    must be accomplished using the new feature that you are explaining.

    Tutorial Code
    -------------
    Write a code block that will appear on the interpreter window. For example, you may
    write an empty function, which the user must complete in order to finish the exercise.

    Expected Output
    ---------------
    Write a code block that will describe the exact output expected from the modified code,
    if it has been modified correctly.

    Solution
    --------
    Write the solution code to the problem.

