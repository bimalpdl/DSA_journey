#include <iostream>
using namespace std;
int main () {
	int number ;
	cout << "Enter a number to find whether it's prime or not: " << endl;
	cin >> number ;
	bool isPrime = 1;
	for ( int i = 2; i < number ; i++ ) {
		if ( number % i == 0 ) {
			isPrime = 0;
			break; // if ' number % i == 0 ' then the loop will break and control goes after the loop body
		}
	}
	if ( isPrime == false ) {
		cout << "The given number " << number << " is not a prime number." << endl;
	}
	else {
		cout << "The given number " << number << " is a prime number.";
	}
	return 0;
}
