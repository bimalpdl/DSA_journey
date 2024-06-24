#include<iostream> 
using namespace std;
int main(){
	int number;
	cout << "Entre number of rows: ";
	cin >> number;
	char alphabet = 65 ;
	int row = 1;
	while ( row <= number ) {
		int column = 0 ; 
		while ( column < number ) {
			char result = alphabet + column ;
			cout << result ;
			column ++ ;
		}
		cout << endl ;
		row ++ ;
		alphabet ++ ;
	}

}


/*

ABC
BCD
CDE


*/
