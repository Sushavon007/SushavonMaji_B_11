import java.util.Scanner;
class Grader {
    private int score;
    public Grader(int score) {
        this.score = score;
    }
    public String letterGrade() {
        if (score < 0 || score > 100) {
            return "Invalid Score";
        } else if (score >= 90) {
            return "O"; 
        } else if (score >= 80) {
            return "E"; 
        } else if (score >= 70) {
            return "A"; 
        } else if (score >= 60) {
            return "B"; 
        } else if (score >= 50) {
            return "C"; 
        } else {
            return "F"; 
        }
    }
}
public class Assignment3_27 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the score: ");
        int score = scanner.nextInt();
        if (score < 0 || score > 100) {
            System.out.println("Invalid score. Score must be between 0 and 100.");
        } else {
            Grader grader = new Grader(score);
            System.out.println("The letter grade is: " + grader.letterGrade());
        }
        scanner.close();
    }
}
