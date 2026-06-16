package _02_Arrays;

import Utilities.ArrayUtility;

public class _04_reverseArray {
    public static void main(String[] args) {
        int[] myArr = ArrayUtility.inputArray();
        System.out.println("Your reversed array is : ");
        revArr(myArr);
        ArrayUtility.dispArr(myArr);

    }

    public static void revArr(int[] arr){
        for (int i = 0 ; i < arr.length/2 ; i++){
            int swap = arr[i];
            arr[i] = arr[(arr.length-1) - i];
            arr[(arr.length-1) - i] = swap;
/*            it is same as :
                int c = a;
                a = b;
                b = c;
                kind of same will go with palindrome
 */

        }
    }
}
