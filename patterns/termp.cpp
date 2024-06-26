#include <iostream>
using namespace std;
int main (){
	int number = 4 ;
	int row = 1;
	while ( row <= number ) {
		int column = 1;
		while ( column <= row ) {
			cout << column;
			column ++;
		}
		row ++;
	cout << endl;	
	}
}

