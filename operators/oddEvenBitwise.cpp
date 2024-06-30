#include <iostream>
using namespace std;
int main () {
  int number;
  cout << "Enter a number to find whether the number is Odd or Even : ";
  cin >> number;
  int org = number;
  number = number&1; //performs 'AND' operation with last binary bit of given number
  //if O/P is 1 then it is ODD else Even
  ( number == 0 ) ?
    cout << "The " << org << " is an even number.\n":
    cout << "The " << org << " is an odd number.\n";

  return 0;
}
