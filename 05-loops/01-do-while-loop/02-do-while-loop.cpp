// Print number 0 to n.

#include <iostream>
using namespace std;

int main(){
  int n, i=0;
  cout << "Enter a number: ";
  cin >> n;

  do{
    cout << i << endl;
    i++;
  }while(i<n);

  return 0;
}