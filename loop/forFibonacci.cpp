#include <iostream>
using namespace std;
int main () {
	int number ;
	cout << "Enter number of iterations: " << endl;
	cin >> number;
	int a = 0 , b = 1;
	cout << a << " " << b ;
	for ( int i = 0; i < number; i++ ) {

		int sum = a + b;
		cout << " " << sum;
		a = b; //order of swapping a and b matters here. if we swap ' b = sum ' first, the result won't be as per desired
		b = sum;


	}
	cout << endl;
	return 0;
}
