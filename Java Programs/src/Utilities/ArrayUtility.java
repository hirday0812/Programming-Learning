package Utilities;

import java.util.Scanner;

public class ArrayUtility {
//    yaha code likho fir jaha chahe waha use kar sakte hain

    public static int[] inputArray(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of elements : ");
        int size = input.nextInt();



        int[] nums = new int[size];
//        declaration of an array
        for (int i = 0 ; i < size ; i++){
            System.out.print("Enter element no. " + (i+1) + " : ");
            nums[i] = input.nextInt();
        }
        return nums;
    }

    public static int noOfOccurrences(int[] numArr, int num) {
        int occ = 0;
        int i = 0;
        while (i < numArr.length) {
            if (numArr[i] == num) {
                occ++;
            }
            i++;
        }
        return occ;
    }

    public static void dispArr(int[] arr){
        for (int i = 0 ; i < arr.length ; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
