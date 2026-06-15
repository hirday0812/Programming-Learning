package _01_Basics;

import java.util.Scanner;

public class _13_fibonacci {
    public static void main(String[] args) {

        printFib(getNum());

    }

    public static int getNum(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter The number : ");
        return input.nextInt();
    }

    public static  void printFib(int num){
        int first = 0 , second = 1;
        System.out.print("0 ");
        System.out.print("1 ");
        while( first + second <= num){
            int third =first + second;
            System.out.print(third + " ");
            first = second;
            second = third;
        }
    }
}
