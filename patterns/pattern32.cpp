#include <iostream>
using namespace std;
int main () {
	int number, row =1 ;
	cout << "Enter number of rows: ";
	cin >> number;
	while ( row <= number ) {
		int space = number - row;
		while ( space ) {
			cout << " ";
			space -= 1;
		}
		int column = 1;
		while ( column <= row ){
			cout << column;
			column += 1;
		}
		int columnn = 2;
		while (columnn <= row ){
			cout << row - columnn + 1;
			columnn += 1;
		}
		cout << endl ;
		row += 1;
	}
	return 0;
}

/*
 
   1
  121
 12321
1234321

 
 */



