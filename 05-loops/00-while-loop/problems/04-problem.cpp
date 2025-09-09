#include<iostream>
using namespace std;

int main(){
  int num, temp, r, sum=0;
  
  cout << "Enter a number: ";
  cin >> num;

  temp = num;
  while(num>0){
    r = num % 10;
    num = num / 10;
    sum = sum + r * r * r;
  }
  if(sum == temp){
    cout << temp << " is Armstrong number" << endl; 
  } else{
    cout << temp << " is Not a Armstrong number." << endl; 
  }

  return 0;
}

