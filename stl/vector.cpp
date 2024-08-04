// vector is a dynamic type of array, that doubles its size itself if we try to insert new element even if it's capacity is already full
// if we add element greater than initial vector size, it will create new vector, that is double in size than the current one
// then it moves the elements of current vector to new vector and deletes the older one
#include <iostream>
#include <vector>  // to include vector header
using namespace std;
int main() {
vector<int> vec1;
// capacity of vector denotes how much elements it can hold at max
// and size of vector denotes how much elements are there in vector currently 
// if capacity is not defined by user, it is 0 by default
cout << "Current capacity of the vector is: " << vec1.capacity() << endl;    // Initially 0 since I haven't initialized vector size

vec1.push_back(5);    // push_back() function is used to add element, now vector capacity is 1
cout << "Current capacity of the vector is: " << vec1.capacity() << endl;


vec1.push_back(35);    // push_back() function is used to add element, now vector capacity is ( 1*2 = 2) ;doubled its size
cout << "Current capacity of the vector is: " << vec1.capacity() << endl;

vec1.push_back(85);    // push_back() function is used to add element, now vector capacity is 4 ( 2*2 = 4 ); doubled
cout << "Current capacity of the vector is: " << vec1.capacity() << endl;

cout << "Current size of the vector is: " << vec1.size() << endl;   // displays number of elements currently sotred in vector

cout << "The element at  index 1 is: " << vec1.at(1) << endl;  // at() perform same operation as in array
							       // Index number also can be used to access the element of given index
							       

cout << "First element of the array is: " << vec1.front() << endl;   // returns first element of the vector
cout << "Last element of the array is: " << vec1.back() << endl;    // returns last element of the vector







}
