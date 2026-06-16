package _02_Arrays;

import Utilities.ArrayUtility;

import java.util.Scanner;

public class _06_search2DArray {
    public static void main(String[] args) {
        int[][] myArr = input2DArray();
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number you want to search : ");
        int num = input.nextInt();
        if (search(myArr , num)){
            System.out.print("Your number was found");
        }else{
            System.out.print("Your number was not found");
        }

    }

    public static boolean search(int[][] arr , int num){
        for (int i = 0 ; i < arr.length ; i++){
            for (int j = 0 ; j < arr[i].length ; j++){
                if (arr[i][j] == num){
                    return true;
                }

            }
        }
        return false;
    }

    public static int[][] input2DArray(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        int rows = input.nextInt();
        System.out.print("Enter the number of columns : ");
        int columns = input.nextInt();
        int[][] newArray = new int[rows][columns];

        for (int i = 0 ; i<rows ; i++){
            int j = 0 ;
            while (j < columns){
                System.out.print("Enter the element in row: "+(i+1) + ", column: " + (j+1) + " : ");
                newArray[i][j] = input.nextInt();
                j++;
            }

        }
        return newArray;
    }
}
