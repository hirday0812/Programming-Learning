#include <iostream>
#include <string>
using namespace std;
int main(){
  string nam ;
  int last;
  cout << "Enter the full nam : ";
  getline (cin, nam);
  last =  nam.find(" ");
  nam[last] = '\n';
  cout << nam;
  
  return 0;
}