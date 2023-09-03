import java.util.Scanner;

public class Prime {
    int ul;
    int ll;

    public void setUpper(int n) {
        this.ul = n;
    }

    public void setLower(int n) {
        this.ll = n;
    }

    public int printPrime() {
        int count = 0;
        for (int i = ll; i <= ul; i++) {
            int flag = 0;
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                count++;
                System.out.println(i + " Is A prime Number");
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int u, l, count;
        System.out.println("Name:Meet Brijwani Roll no:14 ");
        Prime obj = new Prime();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Lower Limit");
        l = sc.nextInt();
        obj.setLower(l);
        System.out.println("Enter Upper Limit");
        u = sc.nextInt();
        obj.setUpper(u);
        count = obj.printPrime();
        System.out.println("Total number of prime numbers in given range is " + count);
        sc.close();
    }
}