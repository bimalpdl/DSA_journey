#include <iostream>
using namespace std;
void swapAlternate(int arr[], int size){
	for(int i = 0; i < size ; i += 2){
		if(i < size - 1 ){
			swap(arr[i],arr[i+1]);
		}
	}
}
void input(int arr[],int size){
	cout << "Enter "<< size << " integers: " << endl;
	for(int i = 0; i < size; i++ ){
		cin >> arr[i];
	}
	cout << endl;
}
void display(int arr[],int size){
	for(int i = 0; i < size; i++ ){
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main(){
	int arr[10];
	int arr1[9];

	input(arr,10);
	cout << "Before swapping: " << endl;
	display(arr,10);

	input(arr1,9);
	cout << "Before swapping: " << endl;
	display(arr1,9);

	cout << "After swapping: " << endl;
	swapAlternate(arr,10);
	display(arr,10);

	cout << "After swapping: " << endl;	
	swapAlternate(arr1,9);
	display(arr1,9);
return 0;
}
