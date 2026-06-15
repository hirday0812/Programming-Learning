package _01_Basics;

import java.util.Scanner;

public class _08_sumOfDigits {
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
        int sum = 0;
        while (n > 0){
            sum+= n % 10;
            n/= 10;
        }
        System.out.println("The sum of the digits of " + num + " is : " + sum);
    }
}
