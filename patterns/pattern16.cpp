#include <iostream>
using namespace std ;
int main () {
	int number ;
	cout << "Enter number of rows: " ;
	cin >> number ;
	int row = 1 ;
	while ( row <= number ) {
		char start = 'A' + number  - row ;
		int column = 1 ;
		while (column <= row ) {
			cout << start ;
			start = start + 1 ;
			column ++ ;
		}
		cout << endl ;
		row ++ ;
	}
	return 0;
}

/*

   E
   DE
   CDE
   BCDE
   ABCDE

You suck at this pattern, practice this often

*/




