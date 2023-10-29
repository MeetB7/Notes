interface Play {
    void play();
}

class Animal {
    void eat() {
        System.out.println("Animal is eating.");
    }
}

// Single Inheritance
class Reptile extends Animal{
    @Override
    void eat(){
        System.out.println("Reptile is eating.");
    }
}

// Hierarchical  Inheritance (from Animal)
class Mammal extends Animal{
    @Override
    void eat(){
        System.out.println("Mammal is eating.");
    }
}

//Multiple inheritance through iterfaces AND Multilevel inheritance (HYBRID)
class Human extends Mammal implements Play{
    @Override
    void eat(){
        System.out.println("Human is eating");

    }
    @Override
    public void play(){
        System.out.println("Human is Playing");
    }
}

public class Inheritance {
    public static void main(String[] args) {
        Reptile r = new Reptile();
        Mammal m = new Mammal();
        Human h = new Human();

        r.eat(); // Single Inheritance
        m.eat(); // Hierarchical  Inheritance
        h.eat(); // Multilevel inheritance
        h.play(); // Multiple inheritance through iterfaces
    }
}
