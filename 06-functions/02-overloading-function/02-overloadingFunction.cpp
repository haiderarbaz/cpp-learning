#include <iostream>
using namespace std;

    //1. sum() function here to add 2 integer
    int sum(int a, int b){
        return a+b;
    }
    //2. sum() function here to add 2 floats
    float sum(float a, float b){
        return a+b;
    }
    //3. sum() function here to add 3 integer
    int sum(int a, int b, int c){
        return a+b+c;
    }

    int main(){

      int a, b, c;

      int result1 = sum (4, 6);
      int result2 = sum (5.6f, 9.9f);
      int result3 = sum (65, 87, 54);

      cout << "Result1 is: " << result1 << endl;
      cout << "Result2 is: " << result2 << endl;
      cout << "Result3 is: " << result3 << endl;

      return 0;
    }