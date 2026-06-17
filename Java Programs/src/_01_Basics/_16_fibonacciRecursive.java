package _01_Basics;

import java.util.Scanner;

class FibonacciRecursive {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of terms : ");
        int term = input.nextInt();
        for (int i= 1 ; i <= term ; i++){
            System.out.print(fibonacci(i) + " ");
        }
    }

    public static int fibonacci(int num){
        if (num == 1){
            return 0;
        }
        if (num == 2){
            return 1;
        }
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
