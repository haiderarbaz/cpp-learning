#include<iostream>
using namespace std;
int main(){

  int n;

  cout << "Enter a Number: ";
  cin >> n;

  cout << "Factors of " << n << " is: " << endl;

  for(int i=1; i<=n; i++){
    if(n%i==0){
      cout << i << endl;
    }
  }

  return 0;
}
