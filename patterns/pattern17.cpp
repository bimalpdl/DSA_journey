#include <iostream>
using namespace std;
int main (){
	int number ;
	cout << "Enter number of rows: ";
	cin >> number ;
	int row = 1;
	while ( row <= number ) {
		int result = number - row + 1;
		int column = 1;
		while ( column <= row ){
			cout << result;
			result = result + 1;
			column ++;
		}
		cout << endl ;
		row ++;


	}
	return 0;
}
/*
 
5
45
345
2345
12345

You suck at this pattern, practice this often
*/
