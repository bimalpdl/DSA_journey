#include<iostream>
using namespace std;
int main (){
	cout << "Enter a number : " ;
	int number, count = 0, bit = 0;
	cin >> number;
	if ( number < 0 ) {
		number = number << 1;
		number = number >> 1;
	}
	while ( number != 0 ){
		bit = number & 1;
		if ( bit == 1) {
			count ++;
		}
		number = number >> 1;
	}
	cout << "Number of ones in the given number is " << count << endl;
	return 0;
}





// This code still needs to be improved, and also doesn't work for negative numbers
