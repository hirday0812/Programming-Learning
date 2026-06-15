package _01_Basics;

import java.util.Scanner;

public class _02_swapping {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number A : ");
        int a = input.nextInt();
        System.out.print("Enter the number B : ");
        int b = input.nextInt();

        int c = a;
        a = b;
        b = c;
        System.out.println("The numbers after swapping are :");
        System.out.println("A : " + a);
        System.out.println("B : " + b);


    }
}
