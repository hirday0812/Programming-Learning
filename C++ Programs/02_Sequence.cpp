#include <iostream>
#include <math.h>
using namespace std;
void AP(int frst , int diff , int last){
    int terms;
    for (int i = 0 ; i < last ; i++){
         terms = frst +(i * diff);
         cout << terms << " ";

    }
}
void GP(int frst , int diff , int last){
    int terms;
    for (int i = 1 ; i < last ; i++){
         terms = frst *pow(diff,i);
         cout << terms << ",";

    }
}
int main()
{
    int first, diffrence , end;
    string seq;
    cout << "Do you want the sequence to be AP or GP : " ;
    cin >> seq;
    if (seq == "AP" || seq == "ap" || seq == "Ap"){
        cout << "Enter the first element and common diffrence  and end of the AP : ";
        cin >> first >>  diffrence >> end;
        cout << "The sequence is : ";
        AP(first , diffrence , end);
        
        
    }
    else if (seq == "GP" || seq == "gp" || seq == "Gp"){
        cout << "Enter the first element and common ratio and end of the GP : ";
        cin >> first >>  diffrence >> end;
        cout << "The sequence is : " << first << ",";
        GP(first , diffrence , end);
    }
    
    return 0;
}