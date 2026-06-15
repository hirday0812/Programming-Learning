package _01_Basics;

import java.util.Scanner;

public class _07_oddSum {
    public static void main(String[] args) {

        sum0dd(getNum());
    }

    public static int getNum(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number : ");
        return input.nextInt();
    }

    public static void sum0dd(int num){
        int sum = 0;
        for (int i = 0 ; i <= num ; i++){

            if (i % 2 != 0){
                sum+=i;
            }
        }
        System.out.print("The sum of odd numbers upto "+ num +" is : "+sum);
    }
}
