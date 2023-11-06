class shape {
    public double Area(int side) {
        return side * side;
    }

    public double Area(int len, int br) {
        return br * len;
    }
}

public class q6 {
public static void main(String[] args) {
    shape sq = new shape();
    shape rect = new shape();
    System.out.println(sq.Area(5));
    System.out.println(rect.Area(10 , 5));
}
}
