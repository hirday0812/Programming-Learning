package _05_AdvanceJava;

class Varargs {
    // java have variable jisme apan kitne bhi arguements de sakte hai
    public static void main(String[] args) {

        System.out.println(sum(4,5,6,7,8,9));
        System.out.println(sum());
        System.out.println(add(5,6,19,23));

    }
    public static int sum(int ...a){
        // 'a' will be treated as an array
        int sum = 0;
        for (int i : a) {
            sum += i;
        }
        return sum;
    }

    public static int add(int a , int b , int ...c){
        // isme minimum 2 arguements to dene hi honge
        int sum = a + b;
        for (int i : c) {
            sum += i;
        }
        return sum;
    }
}
