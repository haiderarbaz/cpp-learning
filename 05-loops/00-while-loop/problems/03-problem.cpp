#include<iostream>
#include<cmath>
using namespace std;

int main (){
  int num;

  cout << "Enter a number: ";
  cin >> num;
  
  if( num == 0){
    cout << 1 << endl;
  } else {
    int digits = floor(log10(abs(num))+1);
    cout << "Number of digits in " << num << " is " << digits << endl;
  }

  // using tertiary operators

  int numOfDigits = (num == 0) ? 1 : floor(log10(abs(num)) + 1);

  cout << "Number of digits in " << num << " is " << numOfDigits << endl;

  return 0;
}
