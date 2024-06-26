#include <iostream>
using namespace std;
int main () {
	int number, row = 1;
	cout << "Enter number of rows: ";
	cin >> number;
	while ( row <= number ){
		int space = row - 1;
		while ( space ) {
			cout << " ";
			space -= 1;
		}
		int column = row;
		while ( column <= number ){
			cout << column ;
			column += 1;
		}
		cout << endl;
		row += 1;
	}
	return 0;
}

/*

write a code to print this pattern in C++ :
1234
234
23
4

You suck at this pattern, practice often

*/
