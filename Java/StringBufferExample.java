public class StringBufferExample {
    public static void main(String[] args) {
        // Creating a StringBuffer
        StringBuffer stringBuffer = new StringBuffer("Hello, ");

        // Appending text to the StringBuffer
        stringBuffer.append("world");

        // Print the StringBuffer
        System.out.println("StringBuffer: " + stringBuffer);

        // Inserting text at a specific position
        stringBuffer.insert(7, "Meet ");

        // Replacing text
        stringBuffer.replace(0, 6, "I am");

        // Deleting characters
        stringBuffer.delete(9, 15);

        // Printing the modified StringBuffer
        System.out.println("Modified StringBuffer: " + stringBuffer);

        // Reverse the StringBuffer
        stringBuffer.reverse();

        // Print the reversed StringBuffer
        System.out.println("Reversed StringBuffer: " + stringBuffer);
    }
}
