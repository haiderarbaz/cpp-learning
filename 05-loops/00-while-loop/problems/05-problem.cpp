#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int num, copy, temp, sum=0, count=0;
  
  cout << "Enter a number: ";
  cin >> num;
  
  temp = num;
  while(temp>0){
    count++;
    temp = temp/10;
  }

  copy = num;
  while(num>0){

    int lastDigit = num % 10; // Extract the last digit
    sum = sum + pow(lastDigit, count);
    num = num / 10; // remove the last digit from number
  }

  if(copy == sum ){
    cout << copy << " is a Armstrong Number." << endl;
  }else{
    cout << copy << " is not a Armstrong Number." << endl;
  }

  return 0;
}