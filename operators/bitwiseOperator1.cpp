#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int b = 6;
	/*NOTE :
	 * The operator precedence of the bitwise operators when combined with the insertion operator (<<).
	 * The bitwise AND (&), OR (|), and XOR (^) operators have lower precedence than the insertion operator (<<),
	 * so the expressions are being evaluated incorrectly.
	 * You need to add parentheses to ensure that the bitwise operations are evaluated first.*/





  cout << "a & b: " << (a & b) << endl;		 //this performes AND operation between binary value of 'a' and 'b'
  cout << "a | b: " << (a | b) << endl;		//this performes OR operation between binary value of 'a' and 'b'
  cout << "~a: " << (~a) << endl;	/*this performes not opetation on 'a' then performes 1's compliment then performs 2's complement to the resultent,
					the resultant after not + 1's compliment + 2's complement will negative 'for small integers -this last fact is unsure (-;' */
  cout << "a ^ b: " << (a ^ b) << endl;		//this performes XOR operation between binary value of 'a' and 'b'

  return 0;
}

