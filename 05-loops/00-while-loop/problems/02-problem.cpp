#include <iostream>
using namespace std;

int main(){

  int num, temp, count=0;

  cout << "Enter a number: ";
  cin >> num;

  if(num == 0) {
    cout << "Number of digts present in " << num << " is " << 1 << endl;
    return 0;
  }

  temp = abs(num); //if number is -ve then we change it into absolute value and assigned to temp.

// 1st version
  while(temp>0){
    count++;
    temp = temp / 10;
    
  }

// 2nd version

// while(temp>0){
//     count++;
//     temp = temp / 10;
    
//   }

// Both version will work but 1st version is more


  cout << "Number of digts present in " << num << " is " << count << endl;

  return 0;
}
