#include <iostream>
using namespace std ;
int main () {
int number;
cout << "Enter number of rows : " ;
cin >> number ;
char alphabet = 'A' ;
int row = 1 ;
while ( row <= number ) {
	int column = 1 ;
	while ( column <= row ) {
		char result = alphabet + row + column -2 ;
 cout << result ;
 column ++ ;
 	}
cout << endl ;
row ++ ;
}
return 0;
}
