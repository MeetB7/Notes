import java.util.Scanner;

import mypackage.Calc;

public class UseOfPackage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        Calc calc = new Calc();

        System.out.println("Addition: "+ calc.add(a, b));
        System.out.println("Subtraction: "+ calc.sub(a, b));
        System.out.println("Multiplication: "+ calc.mult(a, b));
        System.out.println("Division: "+ calc.div(a, b));

        sc.close();
    }
}
