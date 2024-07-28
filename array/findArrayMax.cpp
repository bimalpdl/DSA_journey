#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int maximum(int arr[], int size) {
	int max = INT_MIN;
	cout << "Given array is: " << endl;
	for (int i = 0; i < size ; i++ ){
		cout <<  arr[i] << "\t";
	}
		cout << "\nThe maximum number in given array is : ";

	for ( int  i = 0; i < size ; i++ ){
		if ( arr[i] > max ) {
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int number [8] ;
	cout << "Enter 8 elements in array: \n";
	for ( int i = 0; i < 8 ; i++ ){
		cin >> number[i];
	}
	cout << maximum(number, 8);
	cout << endl;
	return 0;
}
