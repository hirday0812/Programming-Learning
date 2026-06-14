#include <iostream>
using namespace std;
void sortarr(int arr[] , int n);
void disparr(int arr[] , int n);
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter number " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << "Your list is : ";
    disparr(arr , n);
    
    sortarr(arr , n);
    cout << endl;
    cout << "Sorted list is : ";
    disparr(arr , n);
    return 0;
}
void sortarr(int arr[] , int n){
    int temp;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n-1 ; j++){
            if ( arr[j] > arr [j+1]){
                temp = arr [j];
                arr [j] = arr [j+1];
                arr[j+1]= temp;
            }
        }
    }
    
}
void disparr(int arr[] , int n){
    cout << "[ ";
    for (int j = 0 ; j < n-1 ; j++){
        cout << arr[j] <<" , " ;
    }
    cout << arr[n-1] << " ] ";
}