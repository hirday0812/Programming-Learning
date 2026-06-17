package _01_Basics;

import java.util.Scanner;

class _15_factorialRecursive {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int num = input.nextInt();
        System.out.print(factorial(num));


    }

    public static long factorial(int num){
        if (num == 1 ){
            return 1;
        }
        return num * factorial(num -1);
    }
}
