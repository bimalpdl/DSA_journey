#include <iostream>
using namespace std;
int main () {
int number, remainder, reverse = 0;
	cout << "Enter a number to check whether it's palindrome or not: ";
	cin >> number;
	int temp = number;
	while ( number != 0 ) {
	remainder = number % 10;
	reverse = ( reverse * 10 ) + remainder;
	number = number / 10;
	}
	cout << "The reverse of " << temp << " is: " << reverse <<endl;

	if ( temp == reverse) {
cout << temp << " is palindrome.\n";
	}
	else cout << temp << " is not palindrome\n";
	/* ( number == reverse )?
	"The number is palindrome."  :
	"The given number is not a palindrome." << endl; */
	return 0;
}
