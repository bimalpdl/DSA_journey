#include <iostream>
using namespace std;
int main () {

	int sum = 0, i, number;
	cout << "Enter a number: ";
	cin >> number;
	for ( i = 1; i <= number ; i++ ) {
		sum += i;
	}
	cout << "Sum of the number is: " << sum << endl;
}
