/*
Problem 3: 
  Area of Rectangle
Task: 
  Write a function area() that takes length and breadth.

    If breadth is not provided, 
      assume it’s a square (breadth = length by default).
      Return the area.
*/

#include <iostream>
using namespace std;

int area(int length, int breadth = 0);

int area(int length, int breadth){
  if(breadth <= 0){
    breadth = length;
  }
  return length * breadth;
}

int main(){
  int areaOfFirstRectangle = area(6);
  cout << "Area of first Rectangle is: " << areaOfFirstRectangle << "\n";

  int areaOfSecondRectangle = area(8, 6);
  cout << "Area of second Rectangle is: " << areaOfSecondRectangle << "\n";

  return 0;

}