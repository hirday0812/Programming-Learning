// #include<iostream>
// using namespace std;
// class Number{
//     private : 
//     int x;
//     public :
//     Number(int i){
//         x = i;
//     }
//     void operator++(){
//         ++x;
//     }
//     void show(){
//         cout << x;
//     }
// };
// int main(){
//     Number n1(10);
//     ++n1;
//     n1.show();
//     return 0;

// }

#include<iostream>
using namespace std;
class Number{
    private : 
    int x;
    public :
    Number(int i){
        x = i;
    }
    Number operator++(int){
        Number temp = *this;
        x++;
        return temp;
    }
    void show(){
        cout << x << endl;
    }
};
int main(){
    Number n1(10);
    Number n2 = n1++;
    n1.show();
    n2.show();
    return 0;

}