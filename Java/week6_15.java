
interface Mango {
    void displayType();
}
class Winter implements Mango {
    public void displayType() {
        System.out.println("This is a Winter Mango.");
    }
}

class Summer implements Mango {
    public void displayType() {
        System.out.println("This is a Summer Mango.");
    }
}

public class week6_15{
    public static void main(String[] args) {
        Winter winterMango = new Winter();
        Summer summerMango = new Summer();
        winterMango.displayType();
        summerMango.displayType();
    }
}
