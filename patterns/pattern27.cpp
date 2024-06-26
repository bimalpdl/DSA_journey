#include <iostream>
using namespace std;
int main () {
	int number;
	cout << "Enter the number of rows: ";
	cin >> number;
	int row = 1;
	while ( row <= number ){
		int space = row - 1;
		while ( space ){
			cout << " ";
			space -= 1;
		}
		int column = 0;
		while ( column != number - row + 1) {
			cout << row;
			column += 1;
		}
		cout << endl;
		row +=1;
	}
	return 0;
}
/*
 
1111
 222
  33
   4
*/




