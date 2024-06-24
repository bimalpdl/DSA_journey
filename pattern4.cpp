#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter number of lines: ";
	cin>>n;
	int count = 1;
	int row = 1;
	while(row <= n ){
		int column = 1;
		while( column <= row ){
			cout<<count;
			count++;
			column++;
		}
		cout<<endl;
		row++;
	}
	return 0;
}
