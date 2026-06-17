package _03_OOPS;

import java.util.Scanner;

class BankAccount {
    Scanner input = new Scanner(System.in);
    private long accountNumber;
    private String accountHolderName;
    private double balance = 0;

    public void depositMoney(String name){
        System.out.printf("Welcome %s , Please enter the amount you want to deposit : " , name);
        balance += input.nextLong();
        System.out.printf("Your balance is now : %f" , balance);
    }

    public void withdrawMoney(long acc){
        System.out.printf("Welcome %s , Please enter the amount you want to withdraw : " , accountHolderName);
        long amount = input.nextLong();
        if (amount <= balance){
            balance -= amount;
            System.out.println("You have successfully withdraw the amount ");
            System.out.printf("Your balance is now : %f " , balance);
        }
        else{
            System.out.print("!! Your bank balance is lower than the amount to withdraw !!");
        }
    }

    public BankAccount(long accountNumber, String accountHolderName, double balance) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }
}
