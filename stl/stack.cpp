// stack follows LIFO (Last-in-first-out) principle
#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> num;
	num.push(10);   // 10 will be on the bottom
	num.push(21);
	num.push(26);
	num.push(37);    // 37 will be on the top
	cout << "Is the stack empty? " << num.empty() << endl;
	cout << "Size of the stack initally is :" << num.size() << endl;
	cout << "Elements are pushed in the order of 10,21,26,37 respectively. " << endl;
	cout << "The element on the top is: " << num.top() << endl;
	num.pop();
	num.pop();
	cout << "After 2 pops, the element on the top is: " << num.top() << endl;
	num.pop();
	num.pop();
	cout << "Performed 2 more pop() operations." << endl;
	cout << "Is the stack empty now? " << num.empty() << endl;
	return 0;
}
