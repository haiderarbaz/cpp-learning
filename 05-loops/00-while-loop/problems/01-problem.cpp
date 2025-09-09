#include<iostream>
using namespace std;
int main(){

  int n, r;
  cout << "Enter a number: ";
  cin >> n;

  if(n == 0) {
    cout << "0" << endl;
    return 0;
  }

  while(n>0){
    r=n%10;
    n=n/10;

    cout << r << endl;
  }

  return 0;

}