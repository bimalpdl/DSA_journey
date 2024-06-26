#include <iostream>
using namespace std;
int main (){
	int number, row = 1;
	cout << "Enter number of rows :";
	cin >> number;
	while ( row <= number ) {
		int column = 1;
		while ( column <= number - row + 1 ) {
			cout << column ;
			column += 1;
		}
		int scolumn = 0;
		while (scolumn != 2 * row -2) {
			cout << "*";
			scolumn += 1;
		}
		int tcolumn = number - row + 1 ;
		while ( tcolumn  > 0 ) {
			cout << tcolumn;
			tcolumn -= 1;
		}
		cout << endl;
		row += 1;
	}
	return 0;
}

