#include<iostream>
using namespace std;
void linearSearch(int arr[], int size, int key){
	cout << "The array elements are " << endl;
	for(int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	for( int i = 0; i < size ; i++ ) {
		if( key == arr[i] ){
			cout << "The element " << arr[i] << " found at index " << i << endl;
			return;
			break;
		}
	}
	cout << "The key " << key << " not found in given array." << endl;
	return;

}


int main (){
	int array[5], key;
	cout << "Enter 5 integer elements in an array." << endl;
	for (int i = 0; i < 5; i++){
		cin >> array[i];
	}
	cout << "Enter the key to find: " << endl;
	cin >> key;
	linearSearch(array, 5 , key);
	cout << "\nHello, World" << endl;
	return 0;
}
