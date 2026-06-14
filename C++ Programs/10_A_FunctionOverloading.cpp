// Wap to demonstrate function overloading
#include <iostream>
#include <string>
using namespace std;
class Shape{
    private:
    int a,b;
    float r;
    public:
    void area(){
        cout << "This is non parametriced function :)";
    }
    int area(int a, int b){
        cout << "Enter the length and width : ";
        cin >> a >> b;
        int area = a * b;
        cout << "The area of rectangle is : " << area;
        return area;

    }
    int area (int a){
        cout << "Enter the length of side : ";
        cin >> a;
        int area = a*a;
        cout << "The area of square is : " << area;
        return area ;
    }
    float area (float r){
        cout << "Enter the radius of circle :";
        cin >> r;
        float area = 3.14 *r *r;
        cout << "The area of circle is : " << area;
        

    }
};
int main()
{
    int x,y;
    float r;
    Shape s;
    string user;
    cout << "What area do you want to calculate : ";
    cin >> user;
    if(user == "rectangle"){
        s.area(x,y);
    }
    else if (user == "square"){
        s.area(x);
    }
    else if (user == "circle"){
        s.area(r);
    }
    else{
        s.area();
    }
    return 0;
}