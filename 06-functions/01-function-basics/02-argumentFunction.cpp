#include<iostream>
using namespace std;

float add(float x, float y){
  float z;
  z = x + y;
  return z;
}

// int main(){
//   float a = 2.3, b = 7.9, c;
//   c = add(b, c);
//   cout << "Sum is: " << c << endl;

//   return 0;
// }

int main(){
  float x = 2.3, y = 7.9, z;
  z = add(x, y);
  cout << "Sum is: " << z << endl;

  return 0;
}