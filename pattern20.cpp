#include <iostream>
using namespace std ;
int main () {
	int iterations = 2;
	int number;
	cout << "Enter number of rows ;
	cin >> number ;
	while ( iterations ) {
	int row = 1;
	while ( row <= number ) {
		int column = 1;
		while ( column <= row ){
			cout << "*";
			column ++;
		}
		cout << endl ;			
		row++ ;
	}

	iterations -- ;
}

	return 0;


}
