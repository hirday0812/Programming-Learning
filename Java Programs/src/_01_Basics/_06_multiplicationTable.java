package _01_Basics;

import java.util.Scanner;

public class _06_multiplicationTable {
    public static void main(String[] args) {
        int n = getNum();
        printTable(n);

    }

    public static void printTable(int num){
        for (int i = 1 ; i <= 10 ; i++){
            System.out.println(num + " x " + i + " = " + num*i);
        }
    }

    public static int getNum(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number : ");
        return input.nextInt();
    }
}
