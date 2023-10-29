import java.util.Scanner;

public class ExceptionHandling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            System.out.print("Enter a number: ");
            int num = Integer.parseInt(scanner.nextLine());
            int result = 10 / num; // Attempt to divide by the user's input
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            // Catch and handle ArithmeticException (division by zero)
            System.err.println("Error: Division by zero is not allowed.");
        } catch (NumberFormatException e) {
            // Catch and handle NumberFormatException (invalid input)
            System.err.println("Error: Invalid input. Please enter a valid number.");
        } finally {
            // This block is executed no matter what, even if an exception occurs or not
            System.out.println("Execution finished.");
            scanner.close();
        }
    }
}
