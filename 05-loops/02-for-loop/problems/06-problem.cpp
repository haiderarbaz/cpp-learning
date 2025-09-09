#include <iostream>
using namespace std;

int main(){

  int n, num, sum = 0, add=0;

  cout << "Enter a number: ";
  cin >> n;

  // first way

  cout << "Factors of number " << n << " is:" << endl;

  for(int i=1; i<=n; i++){
    if(n%i==0){
      cout << i << endl;
      sum += i;
    }
  }
  cout << "Sum of " << n << " is: " << sum << endl;

  if(2*n==sum){
    cout << n << " is a Perfect Number." << endl;
  } else {
    cout << n << " is not a Perfect Number." << endl;
  }

  // second way

  cout << "Enter a number: ";
  cin >> num;

  cout << "Factors of number " << num << " is:" << endl;

  for(int i=1; i<num; i++){
    if(num%i==0){
      cout << i << endl;
      add += i;
    }
  }
  cout << "Sum of " << num << " is: " << add << endl;
  if(add==num){
    cout << num << " is a Perfect Number." << endl;
  } else {
    cout << num << " is not a Perfect Number." << endl;
  }

  return 0;
}