#include<iostream>
using namespace std;

int max(int a, int b, int c){
  if(a>b && b>c){
    return a;
  } else if (b>c){
    return b;
  } else {
    return c;
  }
}

int main(){
  int x = 12, y = 13, z =10;
  int maxim = max(x, y, z);
  cout << "Maximum is: " << maxim << endl;

  return 0;
}