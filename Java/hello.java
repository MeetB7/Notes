import java.util.Scanner;

public class hello{
    public static void main(String[] args) {
        System.out.println("Hello World");
        // System.out.println(args[0]);
        // System is a class
        // out is a object of class PrintStream
        // println is a method in the class PrintStream

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name: ");
        // sc.next() can be used to get string input but will end after a space
        String name = sc.nextLine();
       
        System.out.println("Enter age: ");
        int age = sc.nextInt();

        System.out.println(name + " is " + age+" years old.");
        sc.close();
    }
}
// To run in terminal-
// javac ./hello.java
// java hello arg_1
