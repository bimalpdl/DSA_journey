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
		int nrow = 0;
		while (nrow != 2 * row -2) {
			cout << "*";
			nrow += 1;
		}
		int temp = number - row + 1 ;
		while ( temp > 0 ) {
			cout << temp;
			temp -= 1;
		}
		cout << endl;
		row += 1;
	}
	return 0;
}

