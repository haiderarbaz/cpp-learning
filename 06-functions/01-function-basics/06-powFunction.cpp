#include <iostream>
using namespace std;

int pow(int a, int b){
  if(b == 0){
    return 1;
  }

  int result = 1;
  for(int i =0; i<b; i++){
    result = result*a;
  }
  return result;
}
int main(){
  int m = 5, n = 3;
  int finalResult = pow(m, n);

  cout << "Power of " << m << "^" << n << " is " << finalResult;

  return 0;
}