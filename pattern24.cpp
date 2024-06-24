#include <iostream>
using namespace std;
int main () {
	int number ;
	cout << "Enter number of rows :";
	cin >> number;
	int row = 1;
	while ( row <= number ){
		int column = 0;
		while ( column != number - row + 1){
			cout << "*";
			column ++;
		}
		cout << endl;
		row ++ ;
	}
	return 0;
}

