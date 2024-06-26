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
			cout << alphabet ;

			column ++ ;
		}
		cout << endl ;
		row ++ ;
		alphabet ++ ;
	}

}
/*
AAA
BBB
CCC
*/
