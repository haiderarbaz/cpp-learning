#include <iostream>
using namespace std;

void funct(){
  cout << "funct() called\n";
}

int main(){
  cout << "Before calling funct()\n";
  funct();
  funct();
  funct();
  cout << "After calling funct()\n";

  return 0;

}