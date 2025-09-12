#include <iostream>
using namespace std;

    //1 write a min() function here to Min of 2 integers
    int min(int a, int b){
        if(a<b){
            return a;
        } else {
            return b;
        }
    }
    //2 min() function here to Min of 3 integers
    int min(int a, int b, int c){
        if(a<b && a<c){
            return a;
        } else if (b<c) {
            return b;
        } else {
            return c;
        }
    }
    //3 min() function here to Min of 2 floats
    float min(float a, float b){
        if(a<b){
            return a;
        } else {
            return b;
        }
    }

    int main(){

      int a, b, c;
      float x, y;

      int result1 = min(34, 76);
      int result2 = min(34, 76, 13);
      float result3 = min(34.4f, 76.4f);

      cout << "Result1 is: " << result1 << endl;
      cout << "Result2 is: " << result2 << endl;
      cout << "Result3 is: " << result3 << endl;

      return 0;
    }