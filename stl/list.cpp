#include <iostream>
#include <list>
using namespace std;

// it uses doubly linked list so can insert/delete from both directions

int main() {
// we can't use at() and indexed access method i.e a[] methods to access the list element
// we must traverse the linked list to access the element

	list<int> lis;     // list of int type
	lis.push_back(1);
	lis.push_back(2);
	lis.push_back(3);
	lis.push_front(4);
	lis.push_front(5);
	lis.push_back(6);
	cout << "Size of the list is: " << lis.size() << endl;
	cout << "The elements in the list are: " << endl;
	for ( int i : lis ) {
	cout << i << " ";
	}

	cout << endl;

	// begin(), end(), empty() functions are also supported
	// time complexity of erase() is O(n) since we need to find the element in the list first 
	lis.erase(lis.begin());
	lis.pop_back();
	cout << "Elements in the list after deletion of first element and \nand performing pop_back() operation on front element : " << endl;
	for ( int i : lis ) {
	cout << i << " ";
	}
	cout << "Size of the list after some deletion: " << lis.size() << endl;

	// to copy the entire list,
	list<int> newList(lis);    // newList(oldList)
	cout << "Elements in the new list are: " << endl;
	for (int i : newList) {
	cout << i << " ";
	}

	list<int> newList1(8,49);    //  size of the list = 8 ; each initialized with the value of 49
	cout << "List elements, each initialized with the value 49\n";
	for (int i : newList1) {
	cout << i << " ";
	}
	cout << endl;
	return 0;
}
