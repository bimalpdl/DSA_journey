#include <iostream>
#include <queue>
using namespace std;
int main() {
    // the default, the priority queue is maximum priority queue (i.e the element with maximum value is removed first when popped)
    // but it can be changed to minimum priority (to pop the element with minimum value first.)

    priority_queue<int> maxip;
    maxip.push(10);
    maxip.push(-5);
    maxip.push(25);
    maxip.push(1);
    maxip.push(-78);
    int currentSize = maxip.size();
    cout << "Size of the priority queue is: " << currentSize << endl;
    cout << "This is maximum priority queue so the element with highest value will be popped first." << endl;
    for (int i = 0; i < currentSize; i++) {
        cout << "The element " << maxip.top() << " popped." << endl;
        maxip.pop();
        cout << "Now the queue size is: " << maxip.size() << endl;
    }
cout << endl;

    // declaration of minimum priority queue

    priority_queue <int, vector<int>, greater<int> > minip;
    minip.push(10);
    minip.push(-5);
    minip.push(35);
    minip.push(5);
    minip.push(-78);
    minip.push(100);
    currentSize = minip.size();
    cout << "Current size of minimum priority queue is: " << minip.size() << endl;
    cout << "Elements in the queue are: \n";
    cout << "This is minimum priority queue so the element with minimum value will be popped first." << endl;
    for (int i = 0; i < currentSize; i++){
        cout << "Element " << minip.top() << " popped." << endl;
        minip.pop();
        cout << "Now the queue size is: " << minip.size() << endl;
    }
}
