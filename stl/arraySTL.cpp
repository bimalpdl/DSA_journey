// Array Standard Template Library (STL)
#include <iostream>
#include <array>   // for array stl; to import <array> stl
using namespace std;
int main() {
	//normal array
	int arr1[3] = {100, -293, 638};

	// Array STL declaration
	array<int,4> arr = {25, -43, 100, 250};
	// 'array' keyword is used; <dataType, size> followed by name of the array ('arr' in this case)
	// implementation of array STL is similar to normal array but with additional built-in functions
	// it is fixed sized as normal array


	// to use any built-in functions, use <arrayName.functionName()>

	int size = arr.size();  // size() function is used to findout the size of given array
	cout << "Size of the array is: " << size << endl;

	for(int i = 0; i < size; i++) {
	cout << "Element at index " << i << " = " << arr[i] << endl; // can be accessed as normal array
	}


	cout << "Element at third index is : " << arr.at(3) << endl;    // at() function can be used to access the given index

	cout << "Is empty? " << arr.empty() << endl;    // empty() function is used to check if the given array is empty;
							// it returns boolean value

	cout << "First element of the array is: " << arr.front() << endl;  // first() returns the first element of given array
	cout << "Last element of the array is: " << arr.back() << endl;  // back() returns the last element of given array

	// All these operations are performed on O(1) time complexity.
return 0;
}
