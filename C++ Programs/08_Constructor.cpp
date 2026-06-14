#include <iostream>
using namespace std;
class Teacher{
    public : 
    //name dept salary age
    string name , dept;
    int salary , age , Tid;
    Teacher(){
        cout << "I am non parametriced constructor\n";
    }
    Teacher( string name, int Tid){
        cout << "I am parametriced constructor\n";
        this -> name = name;
        this -> Tid = Tid;
    }
    Teacher (Teacher & obj){ 
        this -> name = obj.name;
        this -> dept = obj.dept;
        cout << "I am copy constructor";
    }
    ~Teacher(){
        cout << "\nI am destructor";
    }

};
int main()
{
    Teacher T1;
    Teacher T2("Avi",102);
    Teacher T3(T2);
    
    return 0;
}