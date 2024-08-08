#include<iostream>
#include<deque>
using namespace std;
int main() {

    deque<int> deq;
    deq.push_back(5);    // can accent only 1 argument/element
    deq.push_front(10);
    deq.push_back(15);
    cout << "Element at front: " << deq.front() << endl;
    cout << "Element at back: " << deq.back() << endl;
    cout << "Element at first index: " << deq.at(0) << endl;    // accesses element at index 0
    cout << "Is empty? " << deq.empty() << endl;    // 0 = false, 1 = true
    cout << "Size is: " << deq.size() << endl;     // size will increase/decrease according to number of element stored/removed
    // but max size we declared remains the same even if we add/remove the elements

    // to print all the elements:
    for(int i:deq) {
        cout << i << endl;
    }

    deq.erase(deq.begin(), deq.begin() + 1);     // takes 2 range parameter (starting from, upto), in this case deletes first element
    for(int i:deq) {
            cout << i << endl;
        }
    deq.pop_front();     // pops element from front
    deq.pop_back();     // pops element from back


cout << "After pop operation: ";
    for(int i:deq) {
            cout << i << endl;
        }
    return 0;
}
