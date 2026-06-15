package _02_Arrays;

import Utilities.ArrayUtility;

public class _01_sumAndAverage {
    public static void main(String[] args) {
        int[] arr = ArrayUtility.inputArray();
        System.out.println("The sum and average of the array are : " + sumOfArray(arr) + " and " + averageOfArray(arr));
    }


    public static long sumOfArray(int[] arr){
        long sum = 0 ;
        for (int i = 0 ; i < arr.length ; i++){
            sum += arr[i];
        }
        return sum;
    }

    public static double averageOfArray(int[] arr){
        long sum = sumOfArray(arr) / arr.length;
        return (double) (sum);
    }
}
