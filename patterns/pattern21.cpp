#include <iostream>
using namespace std;
int main () {
	int number;
	cout << "Enter number of rows : " ;
	cin >> number;
	int row = 1 ;
	while ( row <= number ){
		int column = 0 ;
		while ( column != 2*row -1 ){
			cout << "*";
			column += 1 ;      
		}
		cout << endl;
		row ++;
	}
return 0;
}
