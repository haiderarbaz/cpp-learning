#include<iostream>
using namespace std;
int main(){

  int n, sum = 0;

  cout << "Enter a Number: ";
  cin >> n;

  cout << "Factors of " << n << " is: " << endl;

  for(int i=1; i<=n; i++){
    if(n%i==0){
      cout << i << endl;
      sum += i;
    }
    
  }
  cout << "Sum of factors of " << n << " is: " << sum << endl;

  return 0;
}