package _01_Basics;

import java.util.Scanner;

public class _04_Grades {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter Marks of 5 numbers : ");
        int m1 = input.nextInt();
        int m2 = input.nextInt();
        int m3 = input.nextInt();
        int m4 = input.nextInt();
        int m5 = input.nextInt();

        int grades = (m1+m2+m3+m4+m5) / 5;

        if(grades <= 100 && grades > 90){
            System.out.println("A Grade");
        } else if (grades <= 90 && grades > 75) {
            System.out.println("B Grade");
        } else if (grades <= 75 && grades > 60) {
            System.out.println("C Grade");
        } else if (grades <= 60 && grades > 30) {
            System.out.println("D Grade");
        } else {
            System.out.println("Fail");
        }

    }
}
