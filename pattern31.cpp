#include <iostream>
using namespace std;
int main () {
	int number, row = 1, num = 1;
	cout << "Enter number of rows";
	cin >> number;
	while (row <= number ){
		int space = number - row;
		while ( space ) {
			cout << " ";
			space -= 1;
		}
		int column = 1;
		while (column <= row ) {
			cout << num ;
			num += 1;
			column += 1;
		}
		cout << endl;
		row += 1;
	}
	return 0;
}
