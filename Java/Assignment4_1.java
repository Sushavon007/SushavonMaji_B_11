class Animal {
    String name;
    public void eat() {
    System.out.println("I can eat");
    }
   }
   class Dog extends Animal {
    public void display() {
    System.out.println("My name is " + name);
    }
   }
   class Assignment4_1 {
    public static void main(String[] args) {
   Dog d = new Dog();
    d.name = "Sunny";
    d.display();
    d.eat();
    }
}
