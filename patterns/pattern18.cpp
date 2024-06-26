#include <iostream>
using namespace std ;
int main () {
	int number ;
	cout << "Enter number of rows : " ;
	cin >> number ;
	int row = 1;
	char alphabet = 65 ;
	while ( row <= number ) {
		int column = 1;
		while ( column <= number ) {
			char result = alphabet + row + column - 2 ;
			cout << result ;
			column ++;
		}
		cout << endl ;
		row ++ ;
	}
	return 0;

}

