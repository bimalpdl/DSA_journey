#include<iostream> 
using namespace std;
int main(){
	int number;
	cout << "Entre number of rows: ";
	cin >> number;
	char alphabet = 65 ;
	int count = 0;
	int row = 1;
	while ( row <= number ) {
		int column = 1 ; 
		while ( column <= number ) {
			cout << alphabet ;
			column ++ ;
			alphabet ++;
		}
		cout << endl ;
		row ++ ;
	}

}


/*

ABCD
EFGH
IJKL
MNOP



*/
