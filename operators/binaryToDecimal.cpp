#include <iostream>
#include <math.h>
using namespace std;
int main () {
  cout << "Enter a binary number to find it's decimal equivalent: ";
  int number , digit = 0, i = 0, answer = 0, temp;
  cin >> number;
  temp = number;
  int a = 0;
  while ( number != 0 ) {
    digit  = number % 10;
    while ( a != 1 ) {

     if (digit == 1 ){
       cout << "The number is odd \n"; 
      }
      else   cout << "The number is even \n";
      a += 1;
    }
    if ( digit == 1) {  // if binary bit is 1 then applies 2^n each time
      answer = answer + pow(2, i);
    }
    i ++;
    number = number / 10;
  }
  cout << "Binary equivalent of " << temp << " is " << answer << endl;
  return 0;
}
