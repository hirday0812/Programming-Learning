package _02_Arrays;

import Utilities.ArrayUtility;

public class _05_mergeArray {
//    merge already sorted arrays
    public static void main(String[] args) {
        System.out.println("Please enter two sorted arrays !!");
        int[] arr1 = ArrayUtility.inputArray();
        System.out.println("Your first array is : ");
        ArrayUtility.dispArr(arr1);
        System.out.println();
        int[] arr2 = ArrayUtility.inputArray();
        System.out.println("Your second array is : ");
        System.out.println();
        ArrayUtility.dispArr(arr2);
        System.out.println();
        System.out.println("Your merged array is : ");
        ArrayUtility.dispArr(mergeArr(arr1 ,arr2));
    }

    public static int[] mergeArr(int[] arr1 , int[] arr2){
        int newSize = arr1.length + arr2.length;
        int[] newArr = new int[newSize];

        int i = 0 , j = 0 , k = 0 ;
        while (i < arr1.length || j < arr2.length){
            if (j == arr2.length || (i < arr1.length && arr1[i] < arr2[j])){
                newArr[k] = arr1[i];
                i++;
                k++;
            }else {
                newArr[k] = arr2[j];
                k++;
                j++;
            }
        }
        return newArr;
    }
}
