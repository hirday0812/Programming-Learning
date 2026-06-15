package _02_Arrays;

import Utilities.ArrayUtility;

public class _02_maxAndMin {
    public static void main(String[] args) {

        int[] arr = ArrayUtility.inputArray();
        maxMinArr(arr);

    }

    public static void maxMinArr(int[] arr){
        int max = arr[0];
        int min = arr[0];

        for (int i = 0 ; i < arr.length ; i++){
            if (max < arr[i]){
                max = arr[i];
            }
            if (min > arr[i]){
                min = arr[i];
            }
        }
        System.out.print("The max and min elements are : " + max + " and " + min);
    }
}
