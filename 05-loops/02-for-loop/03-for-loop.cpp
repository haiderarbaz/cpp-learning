// infinite loop

#include <iostream>
using namespace std;

int main(){
  int i=0;
  for(;;){
    cout << i << " Hello World \n";
    i++;

    // To exit from loop
    if(i>10)
      break;
  }

  return 0;
}