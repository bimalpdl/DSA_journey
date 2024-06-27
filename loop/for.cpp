#include <iostream>
using namespace std;
int main () {
	int number ;
	cout << "Enter a number : ";
	cin >> number;
	cout << "Counting from 0 to " << number << endl;
	for ( int i = 0; i <= number; i++){
		cout << i << endl;
	}
	return 0;
}
