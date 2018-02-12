package exercises;

import java.io.IOException;

import org.junit.jupiter.api.Test;

import code_you_have_to_modify.HelloWorld;
import exercises.helpers.TutorialTest;

class L01HelloWorld extends TutorialTest {

	// see http://learnjavaonline.org/en/Hello%2C_World%21 for the lesson
	@Test
	void Make_the_main_function_of_HelloWorld_print_out_Hello_world() throws IOException {
	    prepareForOutputCheck();
		HelloWorld.main();//<- press F3 on "main"
		assertOutputEquals("Hello World!\n");
	}

}
