package _03_OOPS._03_Abstraction;

public class Circle extends Shape{
//    parent class ka abstract method define karna compulsory hai
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calculateArea() {
        return Math.PI * Math.pow(radius , 2);
    }
}
