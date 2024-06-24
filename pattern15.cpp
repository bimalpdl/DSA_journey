#include <iostream>
using namespace std ;
int main () {
	int number ;
	cout << "Enter number of rows: " ;
	cin >> number ;
	int row = 1 ;
	while ( row <= number ) {
		int column = 1 ;
		while ( column <= row ) {
			cout << ( row - column + 1 ) ;
			column ++ ;
		}
		cout << endl;
		row ++ ;
	}
	return 0; 
}
