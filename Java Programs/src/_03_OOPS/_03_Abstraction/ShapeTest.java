package _03_OOPS._03_Abstraction;

public class ShapeTest {
    public static void main(String[] args) {
        Circle circle = new Circle(5);
        Square sq = new Square(10.10);


        System.out.printf("The area of circle is : %.2f\n" , circle.calculateArea());
        System.out.printf("The area of square is : %.2f" , sq.calculateArea());
    }
}
