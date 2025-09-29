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
  string userMessage;
  getline(cin, userMessage);
  cout << "That's good to hear. \n";
  cout << "Hope you're enjoying the flight \n";
  string userReply;
  getline(cin, userReply);
  exitMsg(name);

  return 0;
}