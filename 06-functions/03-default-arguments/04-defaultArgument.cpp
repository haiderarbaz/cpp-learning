/* 
Problem 4: 
  Student Grade Display
Task: 
  Write a function displayGrade() that prints student information.

    Parameters: name, marks, subject
    Default value for marks should be 50
    Default value for subject should be "Math"
    Function should print: "Student [name] scored [marks] in [subject]"
*/


#include <iostream>
using namespace std;

void displayGrade(int studentId, string studentName, int subjectMarks = 50, string subjectName = "Math");

void displayGrade(int studentId, string studentName, int subjectMarks, string subjectName){
  cout << "Id no: " << studentId << ", " << studentName << " " << "scored " << subjectMarks << " in " << subjectName;
};

int main(){
  displayGrade(101, "Arbu");
  cout << "\n";
  displayGrade(102, "Arbaz", 80);
  cout << "\n";
  displayGrade(103, "Ahmad", 90, "Physics");

  return 0;
}