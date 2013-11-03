Contributing Tutorials
----------------------

To contribute tutorials, simply fork the following repository:

	https://github.com/ronreiter/interactive-tutorials

Then you may add or edit tutorials, and then send me a pull request.

To write a tutorial, simply create a Markdown page, and link it in the welcome screen in the relevant section. After adding it, please make sure that it linked correctly by running the Flask web server.

Each tutorial consists of a brief explanation of the subject, and a short exercise which will test the user. Once the user has finished modifying the code according to the exercise, it should execute to print out the expected output that you will provide.

Every tutorial must have the following structure:

	<TUTORIAL TITLE>
	----------------

	Tutorial
	--------
	Here you may write text which explains the purpose of the tutorial, 
	and the target of the exercise.

	Tutorial Code
	-------------
	Write a code block to write a Python code block, which will appear on the 
	interpreter window. For example, you may
	write an empty function, which the user must complete in order to finish the exercise.
	
	Expected Output
	---------------
	Write a code block which will describe the exact output expected from the modified code, 
	if it has been modified correctly.

After completing a tutorial, make sure it is linked from the "Welcome" screen (use a wiki-style link to your page).
