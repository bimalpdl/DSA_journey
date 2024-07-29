#include <iostream>
using namespace std;
void displayArray(int arr[], int size){
	for (int i = 0 ; i < size; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void userInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
void reverseArray(int arr[], int size){
	int start = 0, end = size - 1;
	while (start <= end){
		swap(arr[start], arr[end]);
		start += 1;
		end -= 1;
	}
}
int main(){
	int oddArray[7];
	int evenArray[10];

	cout << "Enter 7 array elements: " << endl;
	userInput(oddArray,7);

	cout << "Enter 10 array elements: " << endl;
	userInput(evenArray,10);

	cout << "Before swapping: " << endl;
	displayArray(oddArray,7);
	displayArray(evenArray, 10);

	reverseArray(oddArray, 7);
	reverseArray(evenArray, 10);

	cout << "After swapping: " << endl;
	displayArray(oddArray,7);
	displayArray(evenArray, 10);

	return 0;
}
