#include<iostream>
#include<string>
using namespace std;
class student{
private : 
int roll;
string name;
public:
student (int r, string n){
    roll = r;
    name = n;
}
student (const student &s){
    roll = s.roll;
    name = s.name;

}
void show (){
    
}
};