#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Please enter the number of rows: ";
	cin >> number ;
	int row = 1;
	while( row <= number){
		int column = 1 ;
		while( column <= row ){
			cout << row - column +1 ;
			column ++ ;
		}
		row++;
		cout << endl ;
	}
	return 0;
}

/*
1
21
321
4321
54321

*/
