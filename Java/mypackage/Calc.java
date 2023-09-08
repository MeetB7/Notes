package mypackage;

public class Calc {
    public int add(int num1, int num2){
        return num1+num2;
    }
    public int sub(int num1, int num2){
        return num1-num2;
    }
    public int mult(int num1, int num2){
        return num1*num2;
    }
    public double div(double num1, double num2){
        if(num2 == 0){
            System.out.println("Division by 0 is not possible");
            return -1;
        }
        return num1/num2;
    }
}   
