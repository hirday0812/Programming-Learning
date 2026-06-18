package _03_OOPS._03_Abstraction;

public class Square extends Shape{
    private double side;

    public Square(double side) {
        this.side = side;
    }

    @Override
    public double calculateArea() {
        return Math.pow(side , 2);
    }
}
