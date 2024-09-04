class Animal {
    public void eat() {
        System.out.println("Animal is eating");
    }
}
class Dog extends Animal {
    public void bark() {
        System.out.println("Dog is barking");
    }
}
class German extends Dog {
    public void color() {
        System.out.println("German Sephard is black");
    }
}
public class Assignment4_15 {
    public static void main(String[] args) {
        German gs = new German();
        gs.eat();   
        gs.bark();  
        gs.color(); 
    }
}
