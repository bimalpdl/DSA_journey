// There are N elements in the N sized array where the elements value ranges from 1 to  N-1 a. 1 element in the array is duplicate.
//  Find that repeated/duplicate element.
#include <iostream>
using namespace std;
int findDuplicate(int arr[], int size) {
	int answer = 0;
	for (int i = 0; i < size; i++ ){
		answer = answer ^ arr[i];
	}
	for (int i = 1; i < size; i++ ){
		answer = answer ^ i;
	}
	return answer;
}
int main() {
	int arr[10];
	cout << "Enter 10 element such that 1 element repeats atleast once: " << endl;
	for(int i = 0; i < 10; i++)
		cin >> arr[i];
	int result = findDuplicate(arr, 10);
	cout << "The duplicate element in the array is : " << result << endl;
	return 0;
}
