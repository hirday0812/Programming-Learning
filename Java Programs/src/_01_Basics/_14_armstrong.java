package _01_Basics;

import java.util.Scanner;

public class _14_armstrong {
    public static void main(String[] args) {

        if (isArmstrong(getNum())){
            System.out.print("The number is an armstrong number");
        }
        else{
            System.out.println("Not an armstrong number ");
        }

    }

    public static int getNum(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number : ");
        return input.nextInt();
    }

    public static int noOfDigits(int num){
        int count = 0;
        while (num > 0){
            count++;
            num /= 10;
        }
        return count;
    }

    public static int power(int x , int n){
        int result = 1;
        for (int i = 1 ; i <= n ; i++){
            result = result * x;
        }
        return result;
    }

    public static boolean isArmstrong(int num){
        int noOfdigit = noOfDigits(num);
        int finalNumber = 0;
        int numCopy = num;
        while (num > 0){
            int lastDigit = num % 10;
            num /= 10;
            finalNumber += power(lastDigit , noOfdigit);
        }
        return finalNumber == numCopy;

    }
}
