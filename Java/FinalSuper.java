// Using the 'final' keyword to create an immutable class
final class ImmutablePerson {
    private final String name;
    private final int age;

    public ImmutablePerson(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}

// Using the 'super' keyword to call superclass constructor
class Parent {
    private String message;

    public Parent(String message) {
        this.message = message;
    }

    public String getMessage() {
        return message;
    }

    public void displayMessage() {
        System.out.println("Parent: " + message);
    }
}

class Child extends Parent {
    public Child(String message) {
        super(message); // Calling superclass constructor
    }

    // Override the displayMessage method
    @Override
    public void displayMessage() {
        System.out.println("Child: " + super.getMessage());
    }
}

public class FinalSuper {
    public static void main(String[] args) {
        // Using the 'final' keyword to create an immutable object
        ImmutablePerson person = new ImmutablePerson("Alice", 30);
        System.out.println("Name: " + person.getName());
        System.out.println("Age: " + person.getAge());

        // Using the 'super' keyword to call superclass constructor and method
        Child child = new Child("Hello, world!");
        child.displayMessage();
    }
}
