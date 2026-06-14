//Find the largest and smallest elements in an array
#include <iostream>
using namespace std;
int max(int a[] , int m){

    int maxim = a[0];

    for (int i = 0 ; i < m ; i++){

        if (maxim < a[i]){
            maxim = a[i];
        }
    }
    return maxim;
}
int min(int a[] , int m){

    int minim = a[0];

    for (int i = 0 ; i < m ; i++){

        if (minim > a[i]){
            minim = a[i];
        }
    }
    return minim;
}
int main()
{
    int arr[100];
    int n;

    cout << "Enter the number of elements : ";
    cin >> n;
    
    for (int i = 0 ; i < n ; i++){
        cout << "Enter the element " << i+1 << endl;
        cin >> arr[i];

    }
    int maxi = max(arr , n);
    int mini = min(arr , n);
    cout << "The largest element is : " << maxi << endl;
    cout << "The smallest element is : " << mini << endl;


    
    return 0;
}