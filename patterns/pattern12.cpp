#include <iostream>
using namespace std ;
int main () {
	int number;
	char alphabet = 'A';
	cout << "Please enter number of rows : " ;
	cin >> number ;
	int row = 1;
	while ( row <= number ) {
		int column = 1;
		while ( column <= row ) {
			char result = alphabet + row -1 ;
			cout << result ;
			column ++ ;
		}
		cout << endl ;
		row ++ ;
	}
}
