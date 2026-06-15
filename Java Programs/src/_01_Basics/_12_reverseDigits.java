package _01_Basics;

import java.util.Scanner;

public class _12_reverseDigits {
    public static void main(String[] args) {

        sumOfDigits(getNum());

    }

    public static int getNum(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number : ");
        return input.nextInt();
    }

    public static void sumOfDigits(int num){
        int n = num;
        int newNum = 0;
        while (n > 0){
            int digit = n % 10;
            newNum = newNum * 10 + digit;
            n/= 10;
        }
        System.out.println("The reverse of  " + num + " is : " + newNum);
    }
}
