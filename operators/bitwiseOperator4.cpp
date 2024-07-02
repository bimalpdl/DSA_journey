#include <iostream>
#include <math.h>
using namespace std;
int main () {
  cout << "Enter a number : ";
  int number, result = 0,i = 0 , digit , result1 = 0;
  cin >> number;
  while ( number != 0 ) {
    digit = number % 10;
    result1 = ( pow(10,i) * digit ) + result1;  //to print original number
    result = ( 10 * result ) + digit; //to reverse the number.
    number /= 10;
    i += 1;
  }
  cout << "The reverse of " << result1 << " is " << result 
    << " and the reverse of " << result << " is " << result1 << "." << endl;
  return 0;
}
