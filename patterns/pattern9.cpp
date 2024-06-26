#include<iostream>
using namespace std;
int main(){
char alphabet = 65;
	int number ; 
	cout << "Please enter number of rows : ";
	cin >> number ;
	int row = 1;
	while(row <= number ) {
		int column  = 1; 
		while (column <= number ) {
			char result = alphabet + column -1 ;
			cout << result ;

			column ++ ;
		}
		cout << endl ;
		row ++ ;
	
	}

}
/*
ABCD
ABCD
ABCD
ABCD
*/