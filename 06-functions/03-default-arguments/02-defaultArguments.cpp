/*
Problem 2: 
  Greeting Function
Task: 
  Write a function greet() that takes a name and an optional greeting word (default = "Hello").

    If user passes both, print: Good Morning, John!

    If user passes only name, print: Hello, John!
*/

#include <iostream>
using namespace std;

// void greet(string userGreetings = "Hello", string userName, );
// Compiler error: As we know default arguments should appear at the end.

void greet(string userName, string userGreetings = "Hello"); // Function Declaration

void greet(string userName, string userGreetings){ // Function Definition
  cout << userGreetings << ", " << userName << "\n";
}

int main(){
  greet("John");
  greet("Good Morning!", "Hussain");
  greet("Assallamo Alaikum!", "Hasan");

  return 0;
}