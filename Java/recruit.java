import java.util.Scanner;

class Employee {
    String name;
    int courseWorkMarks;
    int aptitudeMarks;
    int technicalMarks;
    int interviewMarks;

    Employee(String name, int courseWorkMarks, int aptitudeMarks, int technicalMarks, int interviewMarks) {
        this.name = name;
        this.courseWorkMarks = courseWorkMarks;
        this.aptitudeMarks = aptitudeMarks;
        this.technicalMarks = technicalMarks;
        this.interviewMarks = interviewMarks;
    }

    int getTotalMarks() {
        return courseWorkMarks + aptitudeMarks + technicalMarks + interviewMarks;
    }
}

public class recruit {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter employee name: ");
        String name = scanner.nextLine();

        System.out.print("Enter role (1 for Programmer, 2 for Team Leader): ");
        int role = scanner.nextInt();

        if (role == 1) {
            System.out.print("Enter Course Work marks: ");
            int courseWorkMarks = scanner.nextInt();

            System.out.print("Enter Aptitude Test marks: ");
            int aptitudeMarks = scanner.nextInt();

            System.out.print("Enter Technical Test marks: ");
            int technicalMarks = scanner.nextInt();

            System.out.print("Enter Interview marks: ");
            int interviewMarks = scanner.nextInt();

            Employee employee = new Employee(name, courseWorkMarks, aptitudeMarks, technicalMarks, interviewMarks);
            int totalMarks = employee.getTotalMarks();

            if (totalMarks >= 80) {
                System.out.println("Congratulations! You have been selected as a Programmer.");
            } else {
                System.out.println("Sorry, you have not met the selection criteria for Programmer.");
            }
        } else if (role == 2) {
            System.out.print("Enter Technical Test marks: ");
            int technicalMarks = scanner.nextInt();

            System.out.print("Enter Interview marks: ");
            int interviewMarks = scanner.nextInt();

            Employee employee = new Employee(name, 0, 0, technicalMarks, interviewMarks);
            int totalMarks = employee.getTotalMarks();

            if (totalMarks >= 85) {
                System.out.println("Congratulations! You have been selected as a Team Leader.");
            } else {
                System.out.println("Sorry, you have not met the selection criteria for Team Leader.");
            }
        } else {
            System.out.println("Invalid role selection.");
        }

        scanner.close();
    }
}
