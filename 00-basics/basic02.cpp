#include <iostream>
using namespace std;

// we can also create cutomize namespace like below and we can use it like we use it in main

// cutomize namespace
namespace myName{
    void display(){
        cout << "Hi Arbaz Haider" << endl;
    }
}

// cutomize namespace
namespace HappyCoding{
    void display(){
        cout << "Happy Coding !" << endl;
    }
}

int main() {
    myName::display();
    cout << "✅ Hello from C++! Your setup works! 🎉" << endl;
    HappyCoding::display();
    return 0;
}
