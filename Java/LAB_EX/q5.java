class Rectangle{
    private double len;
    private double br;

    public Rectangle(){
        this.br = 0;
        this.len = 0;
    }

    public Rectangle(double a){
        this.br = a;
        this.len = a;
    }

    public Rectangle(double len, double br){
        this.len = len;
        this.br = br;
    }

    public double calArea(){
        return len*br;
    }

}

public class q5 {
    public static void main(String[] args) {
     Rectangle r1 = new Rectangle();
     Rectangle r2 = new Rectangle(4);
     Rectangle r3 = new Rectangle(9,4 );
     
     System.out.println("Area of Rect 1 = "+r1.calArea() );
     System.out.println("Area of Rect 2 = "+r2.calArea() );
     System.out.println("Area of Rect 3 = "+r3.calArea() );
    }
}