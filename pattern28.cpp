#include <iostream>
using namespace std;
int main () {
	int  row = 1, number;
	cout << "Enter number of rows: ";
	cin >> number;
	while ( row <= number ){
		int space = number - row;
		while (space) {
			cout << " ";
			space --;
		}
		int column = 1;
		while ( column <= row ) {
			cout << row;
			column += 1;
		}
		cout << endl ;
		row += 1;
	}
	return 0;

}

/*

   1
  22
 333
4444


*/

