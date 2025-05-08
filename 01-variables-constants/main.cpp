#include <iostream>

using namespace std;

int main(){
    int score; // variable declaration
    score= 110; // variable initialization
    score=230;

    // variable declaration and initialization in one line
    int playerId = 43546;
    playerId = 98797;
    // we can redeclare the variables like above.

    // incase if you want to keep the variable as sane as you declare use const keywords like below

    const int playerOneBalance = 1000;
    const int playerOneUID = 321;

    const int playerTwoBalance = 2000;
    const int playerTwoUID = 435;

    // this is the wrong way becuase here we are using + operator with a string and an integer. And, in C++, you can’t directly add a string and an int.
    // cout << "Player id is: " + playerId << endl;
    // cout << "Score is: " + score << endl;

    // Use << (stream insertion operator) instead of + because << is the operator to "send data to the output stream" in C++.
    cout << "Player id is: " << playerId << endl;
    cout << "Score is: " << score << endl;

    cout << "Player id is: " << playerId << " and Score is: " << score << endl;

    /*
    Example:
    Trying to assign a new value to a const variable causes an error.

    playerTwoBalance = 3000;  // ❌ error: assignment of read-only variable
    */

    cout << "Player One balance: " << playerOneBalance << " and playerOneUID is: " << playerOneUID << endl;
    cout << "Player Two balance: " << playerTwoBalance << " and playerTwoUID is: " << playerTwoUID << endl;
    return 0;

}