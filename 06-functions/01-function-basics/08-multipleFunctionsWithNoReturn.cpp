#include <iostream>
#include <string>
using namespace std;

void greetMsg(string name){
  cout << "Hi, " << name << endl;
}

void exitMsg (string name){
  cout << "Bye, " << name << endl;
  cout << "Hope you have enjoyed our services \n";
}

int main (){
  string name;
  cout << "Enter your name: ";
  getline(cin, name);

  greetMsg(name);
  cout << "How you doing Today? \n";
  cout << "Hope you're enjoying the flight \n";
  exitMsg(name);

  return 0;
}