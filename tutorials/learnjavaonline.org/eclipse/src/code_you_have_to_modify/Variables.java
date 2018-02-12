package code_you_have_to_modify;

public class Variables {
	
	public static int x;
	public static int y;
	public static Object addedString;

	public static void assigner() {
	}

	public static void assignZ() {
		//we need a variable declaration here, because Java don't know
		// what does "z" mean...
		z = 4;// you can "cheat" by pressing Alt-1 here...
		y = z;
	}

	public static void addStrings() {
		String firstString = "Nicely "; //Eclipse underlines these variable names, because no one
		String secondString = "Done!";  // uses them yet. Maybe someone should use them?
		addedString = "now, what should have been here instead of this silly string constant?";
	}

}
