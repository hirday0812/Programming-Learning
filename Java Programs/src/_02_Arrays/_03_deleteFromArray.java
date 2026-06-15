package _02_Arrays;

import Utilities.ArrayUtility;

import java.util.Scanner;

public class _03_deleteFromArray {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] myarr = ArrayUtility.inputArray();
        System.out.print("Enter the number you want to delete : ");
        int n = input.nextInt();
        int[] newArr = deleteFromArray(myarr , n);
        System.out.println("The new array is : " );
        ArrayUtility.dispArr(newArr);


    }

    public static int[] deleteFromArray(int[] arr , int num){
        int occ = ArrayUtility.noOfOccurrences(arr , num);
        if (occ == 0){
            return arr;
        }
        int newSize = arr.length - occ;
        int[] newArr = new int[newSize];
        int j = 0;
        for (int i = 0 ; i < arr.length ; i++){
            if (arr[i] != num){
                newArr[j] = arr[i];
                j++;
            }
        }
        return newArr;
    }

}
