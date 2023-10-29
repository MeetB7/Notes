// Abstract class
abstract class Shape {
    // Abstract method (no implementation)
    public abstract double area();

    // Concrete method
    public void displayArea() {
        System.out.println("Area: " + area());
    }
}

// Concrete subclass 1
class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    // Implement the abstract method
    @Override
    public double area() {
        return Math.PI * radius * radius;
    }
}

// Concrete subclass 2
class Rectangle extends Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Implement the abstract method
    @Override
    public double area() {
        return length * width;
    }
}

public class AbstractMethod {
    public static void main(String[] args) {
        Circle circle = new Circle(5.0);
        Rectangle rectangle = new Rectangle(4.0, 6.0);

        circle.displayArea();
        rectangle.displayArea();
    }
}

