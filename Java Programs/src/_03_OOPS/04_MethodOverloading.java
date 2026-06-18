package _03_OOPS;

class MethodOverloading {
    public static class Calculator{
        public int add(int x , int y){
            return x+y;
        }
        public int add(int x , int y , int z){
            return x+y+z;
        }
        public double add(double x , double y){
            return x+y;
        }

    }

    public static void main(String[] args) {
        Calculator c = new Calculator();
        System.out.println(c.add(5,4));
        System.out.println(c.add(5,4,10));
        System.out.println(c.add(5 , 9.8));
    }
}
