package _02_Arrays;

import Utilities.ArrayUtility;

public class _07_sumOfDiagonal {
    public static void main(String[] args) {
        int[][] myArr = ArrayUtility.input2DArray();
        System.out.print("The sum of the diagonal elements is : " + sumOfDiagonals(myArr));
    }

    public static long sumOfDiagonals(int[][] arr){
        long sum = sumOfLeftDiagonal(arr) + sumOfRightDiagonal(arr);
        if (arr.length % 2 != 0){
            int ind = arr.length / 2;
            sum -= arr[ind][ind];
        }
        return sum;
    }

    public static long sumOfLeftDiagonal(int[][] arr){
        long sum = 0;
        for (int i = 0 ; i < arr.length ; i++){
            sum+= arr[i][i];
        }
        return sum;
    }

    public static long sumOfRightDiagonal(int[][] arr){
        long sum =0;
        for (int i = 0 ; i < arr.length ; i++){
            sum += arr[i][arr.length - 1 - i];

        }
        return sum;
    }
}
