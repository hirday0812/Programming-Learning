// WAP to print prime number from 1 to n 
#include <iostream>
using namespace std;
int primeno(){
    int n;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Prime numbers from 1 to " << n << " are: " << endl;
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }jsndjwhduwudhwoqdit8qytdyqxwidigwgqyiyw8tdt8ciuginwouydc9uqewt8wqgjccqowjgduqw8ygwkjbhffffffuihjwnfjhjbmnmdfhkd
    }
    cout << endl;
}
int main() {
    primeno();
    return 0;
}