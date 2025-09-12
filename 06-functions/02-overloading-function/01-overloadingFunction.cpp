#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0){
  return a+b+c+d;
}

int main(){
  int a, b, c, d;

  int result1 = sum (2, 3);
  int result2 = sum (2, 3, 4);
  int result3 = sum (2, 3, 4, 5);

  cout << "Result1 is: " << result1 << endl;
  cout << "Result2 is: " << result2 << endl;
  cout << "Result3 is: " << result3 << endl;

  return 0;

}