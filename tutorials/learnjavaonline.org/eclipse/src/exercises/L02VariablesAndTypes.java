package exercises;
import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

import code_you_have_to_modify.Variables;

class L02VariablesAndTypes {

	// see http://learnjavaonline.org/en/Variables_and_Types for the lesson
	@Test
	void assign_3_to_the_variable_x_in_the_assigner_method_of_Variables_class() {
		Variables.assigner();//<-remember, F3
		assertEquals(3,Variables.x);
	}
	
	@Test
	void create_the_variable_z_in_the_assignZ_method_of_Variable_class() {
		Variables.assignZ();//<-remember, F3
		assertEquals(4,Variables.y);
	}
	
	@Test
	void add_the_two_strings_in_the_addStrings_method_of_the_Variable_class() {
		Variables.addStrings();//<-remember, F3
		assertEquals("Nicely Done!", Variables.addedString);
	}

}
