package _01_Basics;

import java.util.Scanner;

public class _09_LCM {
    public static void main(String[] args) {

        System.out.print("The LCM of the numbers is : " + getLCM(getNum() , getNum()));

    }

    public static int getLCM(int a , int b){
        int i = 1;
        while (true){
            if ((a * i) % b ==0){
                return a*i;
            }
            i++;
        }
    }


    public static int getNum(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number : ");
        return input.nextInt();
    }
}
