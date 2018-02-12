package exercises.helpers;
import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.ByteArrayOutputStream;
import java.io.OutputStream;
import java.io.PrintStream;

public class TutorialTest {

	private OutputStream outContent;

	public TutorialTest() {
		super();
	}

	protected void assertOutputEquals(String expected) {
		String written = outContent.toString();
		assertEquals(expected,written);
	    System.setOut(null);
	}

	protected void prepareForOutputCheck() {
		outContent = new ByteArrayOutputStream();
		System.setOut(new PrintStream(outContent ));
	}

}