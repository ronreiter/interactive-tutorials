Tutorial
--------

## Java IO Streams

Java IO (Input/Output) Streams provide a powerful and flexible way to work with input and output operations in Java. Streams handle the flow of data between a program and an external source, such as a file or network connection. Understanding Java IO Streams is crucial for tasks like reading and writing files, communicating with other programs, and handling input/output efficiently.

### 1. InputStream and OutputStream
- `InputStream`: Represents the input stream of bytes. It is used for reading data.
- `OutputStream`: Represents the output stream of bytes. It is used for writing data.

### 2. Readers and Writers
- `Reader`: Reads characters from an input stream.
- `Writer`: Writes characters to an output stream.

### 3. Byte Streams vs Character Streams
- `Byte Streams`: Operate on raw binary data (bytes).
- `Character Streams`: Operate on characters and are often more convenient for handling text-based data.

Exercise
--------
Reading and Writing Files using Java IO Streams


Tutorial Code
-------------
```java
import java.io.*;

public class FileIOExample {
    public static void main(String[] args) {
        // TODO: Your code here
    }
}
```

Expected Output
---------------
```text
File content successfully read and written.
```

Instructions
1. Use `FileInputStream` to read data from a file named "input.txt".
2. Use `FileOutputStream` to write the read data into a new file named "output.txt".
3. Ensure that the program displays the "File content successfully read and written." message if the operation is successful.

Solution
--------
```java
import java.io.*;

public class FileIOExample {
    public static void main(String[] args) {
        try {
            // Step 1: Use FileInputStream to read data from "input.txt"
            InputStream inputStream = new FileInputStream("input.txt");
            InputStreamReader reader = new InputStreamReader(inputStream);
            BufferedReader bufferedReader = new BufferedReader(reader);

            // Step 2: Use FileOutputStream to write data to "output.txt"
            OutputStream outputStream = new FileOutputStream("output.txt");
            OutputStreamWriter writer = new OutputStreamWriter(outputStream);
            BufferedWriter bufferedWriter = new BufferedWriter(writer);

            // Read from input.txt and write to output.txt
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                bufferedWriter.write(line);
                bufferedWriter.newLine(); // Add newline for each line
            }

            // Close streams
            bufferedReader.close();
            bufferedWriter.close();

            System.out.println("File content successfully read and written.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

In this exercise, you used `FileInputStream` and `FileOutputStream` to read from and write to files. The code reads the content of "input.txt" and writes it to "output.txt". Ensure that the paths to your input and output files are correct.
