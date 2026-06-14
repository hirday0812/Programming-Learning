import java.util.Scanner;

class _01_userInput {
//    user input
 public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
     System.out.print("Enter your name : ");
     String name = input.nextLine();
     System.out.println("Good Morning " + name);
}
}
