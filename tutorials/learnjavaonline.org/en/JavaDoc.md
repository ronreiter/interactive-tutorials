
# What is Javadoc?
Javadoc is a tool which comes with JDK and it is used for generating Java code documentation in HTML format from Java source code, which requires documentation in a predefined format.

Following is a simple example where the lines inside /*….*/ are Java multi-line comments. Similarly, the line which preceeds // is Java single-line comment.
```java
/**
* The HelloWorld program implements an application that
* simply displays "Hello World!" to the standard output.
*
* @author  Zara Ali
* @version 1.0
* @since   2014-03-31 
*/
public class HelloWorld {
   public static void main(String[] args) {
      // Prints Hello, World! on standard output.
      System.out.println("Hello World!");
   }
}
```
## Output:
```sh
Hello World!
```

# The javadoc Tags:
The javadoc tool recognizes the following tags:
| Tag | Description | Syntax |
| ---- | ------- | -------- |
| @author | Adds the author of a class. | @author name-text |
| {@code} | Display text in code font without interpreting the text as HTML markup or nested javadoc tags. | {@code text} |
| {@docRoot} | Represents the relative path to the generated document's root directory from any generated page. | {@docRoot} |
| @deprected | Adds a comment indicating that this API should no longer be used. | @deprecated deprecatedtext |
| @exception | 	Adds a Throws subheading to the generated documentation, with the classname and description text. | @exception class-name description |
| {@inheritDoc} | Inherits a comment from the nearest inheritable class or implementable interface. | Inherits a comment from the immediate surperclass. |
| {@link} | Inserts an in-line link with the visible text label that points to the documentation for the specified package, class, or member name of a referenced class. | {@link package.class#member label} |
| {@linkplain} | Identical to {@link}, except the link's label is displayed in plain text than code font. | {@linkplain package.class#member label} |
| @param |	Adds a parameter with the specified parameter-name followed by the specified description to the "Parameters" section. | @param parameter-name description |
| @return | Adds a "Returns" section with the description text. | @return description |
| @see |	Adds a "See Also" heading with a link or text entry that points to reference.| @see reference |
| @serial |	Used in the doc comment for a default serializable field. |	@serial field-description  include  exclude |
| @serialData | Documents the data written by the writeObject( ) or writeExternal( ) methods. | @serialData data-description |
| @serialField | 	Documents an ObjectStreamField component. | @serialField field-name field-type field-description |
|@since|Adds a "Since" heading with the specified since-text to the generated documentation.|	@since release |
|@throws|	The @throws and @exception tags are synonyms.|	@throws class-name description|
|{@value}	| When {@value} is used in the doc comment of a static field, it displays the value of that constant.	| {@value package.class#field} |
| @version	| Adds a "Version" subheading with the specified version-text to the generated docs when the -version option is used. |	@version version-text |

If you are using JDK 1.7 then javadoc does not generate a great stylesheet.css, so we suggest to download and use standard stylesheet from https://docs.oracle.com

```java
/**
 * @version 21.0
 * since 2024
 * @author yjama
 */
package JavaDoc;

/**
 * 
 * @author yjama
 * 
 * Class for Library Book
 */
public class Book {
    /**
     * @value 10 default value
     */
    static int val = 10;
    
    /**
     * Parametrized Constructor
     * @param s Book Name
     */
    public Book(String s) {
    }
    
    /**
     * Issue a Book to a student
     * @param roll roll number of a student
     * @throws Exception if book is not available, throws Exception
     */
     
    public void issue(int roll) throws Exception {
    }
    /**
     * check if book is available or not
     * @param str Book name
     * @return if book is available returns true else false
     */
    public boolean available(String str){
        return true;
    }
    
    /**
     * Get Book name
     * @param id book id
     * @return returns book name
     */
    public String getName(int id){
        return "";
    }
    
    /**
     * Main Method starts here
     * @param args 
     */
    public static void main(String[] args) {

    }
}
```



## Output:
[https://ibb.co/NsZ2xmB]
[https://ibb.co/d7wZMJc]
[https://ibb.co/PmWjZVg]

## Generating Javadoc for a Java File

Follow these steps to generate Javadoc for your Java file:

1. **Open Terminal or Command Prompt:**
   Open a terminal (on macOS or Linux) or Command Prompt (on Windows) on your computer.

2. **Navigate to the Directory Containing Your Java File:**
   Use the `cd` command to navigate to the directory that contains your Java file. Replace `path/to/your/directory` with the actual path. For example:
   ```bash
   cd path/to/your/directory 
   ```
   
3. **Generate javadoc:**
   Run the javadoc command followed by the name of your Java file or package. For example:
   ```bash
   javadoc YourClaas.java
   ```
   If your Java file is part of a package, specify the package name instead of the file name:
   ```bash
   javadoc your/package/name
   ```

4. **View the generated javadoc:**
   Once the Javadoc generation process is complete, you'll see a new directory named `docs` in your current directory. Open the `index.html` file located inside the docs directory in a web browser to view the generated Javadoc.

    That's it! You've successfully generated Javadoc for your Java file.

