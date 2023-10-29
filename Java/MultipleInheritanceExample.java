// Interface 1
interface Swimmer {
    void swim();
}

// Interface 2
interface Jumper {
    void jump();
}

// Class implementing both interfaces
class Athlete implements Swimmer, Jumper {
    public void swim() {
        System.out.println("Athlete is swimming.");
    }

    public void jump() {
        System.out.println("Athlete is jumping.");
    }

    void run() {
        System.out.println("Athlete is running.");
    }
}

public class MultipleInheritanceExample {
    public static void main(String[] args) {
        Athlete athlete = new Athlete();
        athlete.swim(); // Method from Swimmer interface
        athlete.jump(); // Method from Jumper interface
        athlete.run();  // Method from Athlete class
    }
}
