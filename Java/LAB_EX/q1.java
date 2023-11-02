import java.util.Scanner;

class Employee{

    private String name;
    private int salary;
    private int joinYear;
    private String address;

    Employee(String name, int salary, int joinYear, String address){
        if(salary <= 0){
            throw new IllegalArgumentException("Salary should be greater than zero");
        }
        if(joinYear <= 0 || joinYear > 2023){
            throw new IllegalArgumentException("Joining Year should be greater than zero and not more than current year");
        }

        this.name = name;
        this.salary = salary;
        this.joinYear = joinYear;
        this.address = address;
    }

    public void displayEmployee(){
        System.out.println("");
        System.out.println("Employee Details :-");
        System.out.println("Name : "+name);
        System.out.println("Salary: "+salary);
        System.out.println("Year of Joining: "+joinYear);
        System.out.println("Address: "+address);
    }
}

public class q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Employee e1  = null;
        try {
            System.out.println("Enter Details--");

            System.out.print("Name: ");
            String name = sc.nextLine();

            System.out.print("Salary: ");
            int salary = sc.nextInt();

            System.out.print("Year of joining: ");
            int joinYear = sc.nextInt();

            sc.nextLine();
            System.out.print("Address: ");
            String address = sc.nextLine();

            e1 = new Employee(name, salary, joinYear, address);
        } catch (Exception e) {
            System.out.println("INVALID INPUT");
        } finally {
            sc.close();
        }
        
        if(e1 != null){
            e1.displayEmployee();
        } 
    }
}
