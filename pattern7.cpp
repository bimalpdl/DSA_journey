#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Please enter the number of rows: ";
	cin >> number ;
	int row = 1;
	while( row <= number){
		int column = 1 ;
		while( column <= number ){
			cout << number - column +1;
			column ++ ;
			
		}
		row++;
		cout << endl ;
		number--;
	}
	return 0;
}
/*
4321
321
21
1
*/