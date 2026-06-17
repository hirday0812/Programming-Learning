package _02_Arrays;

import Utilities.ArrayUtility;

import java.util.Scanner;

class OccurencesForEach {

     public static void main(String[] args) {

          Scanner input = new Scanner(System.in);
          int[] myArr = ArrayUtility.inputArray();
          System.out.print("Enter the number you want to search : ");
          int num = input.nextInt();
          System.out.print("Your number occurred " + noOfOccurences(myArr , num) + " times ");

     }

     public static int noOfOccurences(int[] arr , int num){
          int occ = 0;
          for (int n : arr){
               if (n == num){
                    occ++;
               }
          }
          return occ;
     }


}
