#include <iostream>
using namespace std;

int factorial(int a){
  int fact = 1;
  for(int i = 1; i<=a; i++){
    fact = fact * i;
  }
  return fact;
}

int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int result = factorial(n);

  cout << "Factorial of " << n << " is: "  << result << endl;

  return 0;

}