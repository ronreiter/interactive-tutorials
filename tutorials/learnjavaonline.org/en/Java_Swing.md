Tutorial
--------
Java Swing is a graphical user interface (GUI) widget toolkit for Java. It is part of the Java Foundation Classes (JFC) and includes a set of components for building graphical user interfaces (GUIs) and adding interactivity to Java applications.

Here is a tutorial for creating a simple Java Swing application:

1. Create a new Java project in your preferred development environment.

2. Add the following imports to your Java file:


```java
import javax.swing.*;
import java.awt.*;
```

3. Create a new JFrame object. The JFrame class is the top-level container in the Swing container hierarchy. It represents the main window of your application and provides a place to organize your application's components.

```java
JFrame frame = new JFrame("My First Swing Application");

```
4. Set the size and location of the frame.

```java
frame.setSize(400, 300);
frame.setLocationRelativeTo(null); // centers the frame on the screen
```

5. Add a component to the frame. A component is an object that is displayed on the screen and is responsible for drawing and handling user input. For example, you can add a button, a label, or a text field.

```java
JButton button = new JButton("Click Me!");
frame.add(button);
```

6. Make the frame visible.

```java
frame.setVisible(true);
```

7. Add an action listener to the button. An action listener is an object that is notified when an action is performed,    such as a button being clicked.

```java
button.addActionListener(event -> {
  // code to execute when the button is clicked
});
```

8. Run the application and click the button to see the action listener in action.

**Here is the full code for the example application:**


```java
import javax.swing.*;
import java.awt.*;

public class MySwingApplication {
  public static void main(String[] args) {
    // create the frame
    JFrame frame = new JFrame("My First Swing Application");
    frame.setSize(400, 300);
    frame.setLocationRelativeTo(null); // centers the frame on the screen

    // create a button
    JButton button = new JButton("Click Me!");
    frame.add(button);

    // add an action listener to the button
    button.addActionListener(event -> {
      // code to execute when the button is clicked
      JOptionPane.showMessageDialog(frame, "You clicked the button!");
    });

    // make the frame visible
    frame.setVisible(true);
  }
}
```







Exercise
--------
The purpose of the exercise is to teach the basic of the Java Swing library as it will be used further more from here.

Tutorial Code
-------------

```java
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class SwingExercise {
  public static void main(String[] args) {
    // create the frame
    JFrame frame = new JFrame("Swing Exercise");
    frame.setSize(400, 300);
    frame.setLocationRelativeTo(null); // centers the frame on the screen

    // create a label and a text field
    JLabel label = new JLabel("Enter your name:");
    JTextField textField = new JTextField();
    frame.add(label, BorderLayout.WEST);
    frame.add(textField, BorderLayout.CENTER);

    // create a button and add an action listener
    // complete the code, create a submit button
    // write your code below
    button.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        String name = textField.getText();
        JOptionPane.showMessageDialog(frame, "Hello, " + name + "!");
      }
    });
    frame.add(button, BorderLayout.EAST);

    // make the frame visible
    frame.setVisible(true);
  }
}
```


Expected Output
---------------
```java
In this Java Swing exercise, the expected output is a GUI window with a label, a text field, and a button. When the button is clicked, a message dialog should be displayed with a greeting using the name entered in the text field.

For example, if you enter "John" in the text field and click the button, the message dialog should show "Hello, John!".
```


Solution
--------

```java
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class SwingExercise {
  public static void main(String[] args) {
    // create the frame
    JFrame frame = new JFrame("Swing Exercise");
    frame.setSize(400, 300);
    frame.setLocationRelativeTo(null); // centers the frame on the screen

    // create a label and a text field
    JLabel label = new JLabel("Enter your name:");
    JTextField textField = new JTextField();
    frame.add(label, BorderLayout.WEST);
    frame.add(textField, BorderLayout.CENTER);

    // create a button and add an action listener
    JButton button = new JButton("Submit");
    button.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        String name = textField.getText();
        JOptionPane.showMessageDialog(frame, "Hello, " + name + "!");
      }
    });
    frame.add(button, BorderLayout.EAST);

    // make the frame visible
    frame.setVisible(true);
  }
}

```