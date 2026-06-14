#include<iostream>
using namespace std;
class STUDENT{
    private : 
    double Total = 0.00, Maxmarks = 500.00;
    public:
    string StudentName;
    int Marks[5];

    void assign(){

        
        for (int i = 0 ; i < 5 ; i++){
            
            cout << "Enter the mark of subject " << i+1 << endl;
            cin >> Marks[i];
        }
    }
    
    double compute(){
        
        for (int i = 0 ; i < 5 ; i++){
            Total += Marks[i];
        }
        double avg = Total / 5.00;
        return avg;
        
    }
    void display(double av){
        cout << "\nWelcome " << StudentName << endl;
        cout << "Your total is : " << Total << " out of "<< Maxmarks << endl;
        cout << "Your average is : " << av << endl << endl;

    }

};
int main(){
    STUDENT s;
    cout << "\nEnter your name : ";
    cin >> s.StudentName;
    s.assign();
    s.display(s.compute());
    return 0;

}