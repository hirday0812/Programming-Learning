package _01_Basics;

import java.util.Scanner;

public class _11_primeNo {
    public static void main(String[] args) {

        isPrime(getNum());

    }

    public static int getNum(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter The number : ");
        return input.nextInt();
    }

    public static void  isPrime(int num){
        if (num <= 1){
            System.out.print("The number is not prime !!");
        }
        else {
            int flag = 0;
            for (int i = 2 ; i <= num/2 ; i++){
                if (num % i == 0){
                    System.out.println("The number is not a prime number");
                    return;
                }
                else {

                    System.out.print("The number is a prime number ");
                    return;
                }
            }
        }
    }
}
