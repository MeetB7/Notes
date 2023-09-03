import java.lang.Math;
import java.util.Scanner;

class area {
    public static float calArea(float i) {
        // sq
        return i * i;
    }

    public static double calArea(double r) {
        // circle
        return Math.PI * r * r;
    }

    public static float calArea(float l, float b) {
        // rect
        return l * b;
    }

    public static double calArea(double b, double h) {
        return 0.5 * b * h;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Find area of -\n1.Rectangle\n2.Square\n3.Circle\n4.Triangle\n5.Exit");
        while (true) {
            System.out.println("Enter your choice: ");
            int c = sc.nextInt();
            switch (c) {
                case 1://rect
                    System.out.println("Enter length and breadth: ");
                    float l = sc.nextFloat();
                    float b = sc.nextFloat();
                    System.out.println("Area of the rect is " + calArea(l, b) + " sq units");
                    break;
                case 2://sq
                    System.out.println("Enter length of side: ");
                    float s = sc.nextFloat();
                    System.out.println("Area of the sq is " + calArea(s) + " sq units");
                    break;
                case 3://c
                    System.out.println("Enter radius: ");
                    double r = sc.nextDouble();
                    System.out.println("Area of the circle is " + calArea(r) + " sq units");
                    break;
                case 4://tr
                    System.out.println("Enter base and heigth: ");
                    double h = sc.nextDouble();
                    double base = sc.nextDouble();
                    System.out.println("Area of the triangle is " + calArea(h, base) + " sq units");
                    break;
                case 5:
                    sc.close();
                    break;
                default:
                    System.out.println("INVALID INPUT");
            }
            if ( c == 5) break;
    }
    }
}