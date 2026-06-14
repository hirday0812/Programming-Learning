#include <iostream>
using namespace std;
int sumdigits(int n){
    int sum = 0,remainder;
    while (n != 0){
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int digit;
    cout << "Enter the number : ";
    cin >> digit ;
    cout << "The sum is of the digits of the number "<< digit << " is : " << sumdigits(digit); ;


    return 0;
}