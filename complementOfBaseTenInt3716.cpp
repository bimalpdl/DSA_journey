#include <iostream>
using namespace std;
int main () {
	int temp, number, mask = 0;
	cout << "Enter a number" << endl;
	cin >> number;
	temp = number;
	if (number == 0 ){
		cout << "The binary compliment of given number is: 1\n";
	}
	else {
		while ( temp != 0 ){
			mask = (mask << 1) | 1 ;
			temp = temp >> 1;
		}
		int result = (~number) & mask;
		cout << "Result of binary compliment of " << number << " is:" << result << endl;
	}
	return 0;
}

