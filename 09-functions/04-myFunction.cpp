// Lambda Function

// Syntax

// auto functionHold = [](parameters){
    // function body;
// };

// functionHold(arguments)

#include <iostream>

using namespace std;

int main(){

    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea." << endl;
    };
    preparedChai(4);

    return 0;
}