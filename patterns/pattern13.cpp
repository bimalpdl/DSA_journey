#include <iostream>
using namespace std ;
int main () { 
	int number ;
	char  alphabet = 'A' ;
	cout << "Please enter the number of rows to print : " ;
	cin >> number ;
	int row = 1;
	while ( row <= number ){
		int column = 1;
		while ( column <= row ){
			cout << alphabet++ ;
			column ++ ;
		}
		cout << endl ;
		row ++;
	}
	return 0;

}

/*


A
BC
DEF
GHIJ
KLMNO



 */
