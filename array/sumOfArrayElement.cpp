#include <iostream>
using namespace std;
int arr(int arr[], int size) {
	int result = 0;
	cout << "The elements of array are: " << endl;
	for (int i = 0; i < 5 ; i++) {
		cout << arr[i] << "\t";
	}
	int number = 0;
	for (int i = 0; i < size ; i++) {
		result += arr[i];
	}
	return result; 
}


int main () {
	int array[5];
	int result;
	cout << "Enter five integer element in an array: " << endl;
	for(int i = 0; i < 5 ; i ++ ){
		cin >> array[i];
	}
	result = arr(array,5);
	cout << "\nSum of the elements in given array is : " << result << endl;
return 0;
}
