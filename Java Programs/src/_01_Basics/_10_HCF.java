package _01_Basics;

import java.util.Scanner;

public class _10_HCF {
    public static void main(String[] args) {

        System.out.println(findHCF(getNum() , getNum()));

    }

    public static int getNum(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number : ");
        return input.nextInt();
    }

    public static int findHCF(int a , int b){
        // entire logic was made by me
        while (true){
            int q = b % a;
            if (q == 0){
                return a;
            }
            else {
                int c =q;
                b = a;
                a = c;
            }
        }
    }
}
