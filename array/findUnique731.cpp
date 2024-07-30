// Finds any duplicate element in odd array (if exists)
#include <iostream>
using namespace std;
int findUnique(int arr[], int size){
	int result = 0;
	for(int i = 0; i < size ; i ++){
		result = result ^ arr[i];
		}
	return result;
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
	int arr[9];

	input(arr,9);
	display(arr,9);
	cout << "The unique element is: " << findUnique(arr,9) << endl ;
	return 0;
}
