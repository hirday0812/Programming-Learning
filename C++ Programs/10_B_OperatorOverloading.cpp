// Wap to demonstrate operator overloading
#include<iostream>
using namespace std;
class Complex{
    public:
    int real , img ;
    Complex(){
        real = 0;
        img = 0;
    }
    Complex(int r , int i){
        real = r;
        img = i;

    }
    Complex operator + (Complex &obj){
        Complex temp; //variable bana li temp naam ki ab class me class chalayenge
        temp.real = real + obj.real;
        temp.img = img + obj.img ;
        return temp;
    }
    void display(){
        cout << real << "+" << img <<"i";
    }
};
int main(){
    Complex c1(3,5);
    Complex c2(2,10);
    Complex c3();
    Complex c4 = c1 + c2;
    c4.display();
    
}