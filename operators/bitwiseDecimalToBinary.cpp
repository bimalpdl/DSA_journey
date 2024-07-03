#include <iostream>
#include <math.h>
using namespace std;
int main () {
  int number, result = 0, bit = 0, i = 0;
  cout << "Enter a decimal number to find it's binary value: ";
  cin >> number;
  int temp = number;
  while ( number != 0 ) {
  bit = number & 1;
    result = ( bit * pow(10,i)) + result;
    number = number >> 1;
    i ++;
      }
  cout << " The Binart equivalent of " << temp << " is " << result <<endl;
  return 0;
}
