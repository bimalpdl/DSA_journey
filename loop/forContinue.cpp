#include <iostream>
using namespace std;
int main () {
	cout << "Enter a number to find  table of given number excluding each multiple of 2 : ";
	int number;
	cin >> number;
	for ( int i = 1; i <= 20; i++ ) {
		if ( i % 2 == 0){
			continue; 
		}

		cout << number << " x " << i << " = " << number * i << endl;
	}
	return 0;
}
