#include <iostream>
using namespace std ;
int main () {
	int number ;
	cout << "Enter number of rows : " ;
	cin >> number ;
	int row = 1;
	while ( row <= number ) {
		int space = number - row ;
		while ( space ) {
			cout << " ";
			space -= 1;
		}
		int column = 1;
		while ( column <= row ){
			cout << "*";
			column ++;
		}
		row ++;
		cout << endl ;
	}
	return 0;
}
