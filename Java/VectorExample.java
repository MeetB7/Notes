import java.util.Vector;
import java.util.Iterator;

public class VectorExample {
    public static void main(String[] args) {
        // Creating a Vector of Strings
        Vector<String> vector = new Vector<>();

        // Adding elements to the Vector
        vector.add("Apple");
        vector.add("Banana");
        vector.add("Mango");

        // Accessing elements
        System.out.println("Elements in the Vector:");
        for (String fruit : vector) {
            System.out.println(fruit);
        }
        System.out.println();

        // Removing an element
        if(vector.remove("Banana")){
            System.out.println("Banana was removed.\n");
        };

        // Checking if an element exists
        if (vector.contains("Meet")) {
            System.out.println("Meet is in the Vector.\n");
        }
        else System.out.println("Meet is not in the Vector.\n");

        // Getting the size of the Vector
        System.out.println("Vector size: " + vector.size() + "\n");

        // Iterating through the Vector using an Iterator
        System.out.println("Using Iterator:");
        Iterator<String> iterator = vector.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }
}
