// Custom exception class
class CustomException extends Exception {
    public CustomException(String message) {
        super(message);
    }
}

// Example class that uses the custom exception
class MathUtility {
    public static int divide(int dividend, int divisor) throws CustomException {
        if (divisor == 0) {
            throw new CustomException("Division by zero is not allowed.");
        }
        return dividend / divisor;
    }
}

public class UserDefinedException {
    public static void main(String[] args) {
        try {
            int result = MathUtility.divide(10, 2);
            System.out.println("Result: " + result);
            
            // Attempting to divide by zero
            int invalidResult = MathUtility.divide(5, 0);
            System.out.println("Result: "+invalidResult);
            System.out.println("This won't be reached.");
        } catch (CustomException e) {
            System.err.println("Custom Exception Caught: " + e.getMessage());
        }
    }
}