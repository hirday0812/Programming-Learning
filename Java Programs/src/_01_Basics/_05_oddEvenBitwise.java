package _01_Basics;

import java.util.Scanner;

public class _05_oddEvenBitwise {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int num = input.nextInt();

        if ((num & 1) == 1){
/*            5 = 0101
                & 0001
                --------
                  0001
 */
            System.out.println("\nThe number is Odd");
        }else {
            System.out.println("The number is Even");
        }
    }
}
