import java.util.Scanner;

public class _03_areaOfTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the base of triangle : ");
        double base = input.nextDouble();

        System.out.print("Enter the height of triangle : ");
        double h = input.nextDouble();

        double area = 0.5 * base * h;

        System.out.print("The area of the triangle is " + area);

    }
}
