/*
Problem 1:
  Print Details.
Task:
  Write a C++ program to define a function printDetails() that prints the ID, Name, and Address of a person.

    The function should always require the ID.
    The Name and Address should be optional parameters with default values "NA".

    Demonstrate the function by calling it with:
      1. All three arguments (ID, Name, Address)
      2. ID and Name only
      3. Only ID

    Expected Behavior:
      If all arguments are given → print them.
      If only ID and Name are given → Address defaults to "NA".
      If only ID is given → Name and Address default to "NA".
*/

#include <iostream>
using namespace std;
void printDetails(int id, string name = "NA", string address = "NA"){
  cout << "ID is: " << id << "\n";
  cout << "Name is: " << name << "\n";
  cout << "Address is: " << address << "\n";
} 

int main (){
  printDetails(101, "Umar", "Siwan");
  cout << "\n";
  printDetails(102, "Abubakar", "Siwan");
  cout << "\n";
  printDetails(103, "Ali", "Siwan");
  cout << "\n";
  printDetails(104, "Uthman");
  cout << "\n";
  printDetails(105);
  cout << "\n";

  return 0;
}