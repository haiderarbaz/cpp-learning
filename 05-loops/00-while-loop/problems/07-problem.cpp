#include<iostream>
using namespace std;

int main(){

  int num, rev=0;

  cout << "Enter a number: ";
  cin >> num;

  int temp=num;
  while(temp>0){
    int lastDigit = temp%10;
    rev = rev * 10 + lastDigit;
    temp = temp/10;
  }

  if(rev == num){
    cout << num << " is a Palindrome number" << endl;
  }else {
    cout << num << " is Not a Palindrome number" << endl;
  }

  return 0;
}