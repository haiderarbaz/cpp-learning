#include<iostream>
using namespace std;

int add(int x, int y){
  return x + y;
}

int main(){
  int a = 14, b = 79, c;
  c = add(a, b);
  cout << "Sum is: " << c << endl;

  return 0;
}