import java.util.Scanner;

public class StringExtraction {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        System.out.print("Enter the starting position (n): ");
        int n = scanner.nextInt() - 1;
        System.out.print("Enter the number of characters to extract (m): ");
        int m = scanner.nextInt();

        if (n >= 0 && n + m <= inputString.length()) {
            String extractedString = "";
            for (int i = n; i < n + m; i++) {
                extractedString += inputString.charAt(i);
            }

            System.out.println("Extracted String: " + extractedString);
        } else {
            System.out.println("Invalid input. The specified substring is out of bounds.");
        }

        scanner.close();
    }
}
