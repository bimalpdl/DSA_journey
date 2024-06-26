#include <iostream>
using namespace std;
int main () {
	int number ;
	cout << "Enter number of rows :";
	cin >> number;
	int row = 1;
	while ( row <= number ){
		int column = 0;
		int space = row - 1;
		while ( space ) {
			cout << " ";	
			space--;
		}
		while ( column != number - row + 1){
			cout << row;
			column ++;
		}
		cout << endl;
		row ++ ;
	}
	return 0;
}

