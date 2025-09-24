#include <iostream>
#include <string>
using namespace std;

string greetMsg(string name){
  cout << "Hi, " << name << " Good Morning ! \n";
  cout << "How you doing today \n";
  return "Greeting completed";
}

string exitMsg(string name){
  cout << "Hope you have enjoyed your session today.\n";
  cout << "Bye, " << name;
  return "Exit Completed";
}

int main(){
  string userName, subject;
  cout << "Enter your name: ";
  getline(cin, userName);

  greetMsg(userName);
  cout << "What do you want to learn today? \n";
  getline (cin, subject);
  exitMsg(userName);

  return 0;
}