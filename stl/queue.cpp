// queue follows the principle of FIFO ( first-in-first-out 
#include <iostream>
#include <queue>
using namespace std;
int main() {
	queue<string> str;
	str.push("Bimal");
	str.push("Rohini");
	str.push("Nirmal");
	str.push("Shreewi");
	cout << "Is the queue empty? " << str.empty() << endl;
	cout << "Size of the queue is :" <<  str.size() << endl;
	cout <<"The first element in the queue is: " << str.front() << endl;
	str.pop();
	cout << "After one pop, the first element in the queue is: " << str.front() << endl;
	return 0;
}
