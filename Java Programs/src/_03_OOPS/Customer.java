package _03_OOPS;

public class Customer {

    public static void main(String[] args) {

        BankAccount customer = new BankAccount(001 , "Haddi" , 100000);
        customer.depositMoney("Haddi");
        customer.withdrawMoney(001);
        customer.withdrawMoney(002);
    }
}
