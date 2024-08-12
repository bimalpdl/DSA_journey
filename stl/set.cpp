#include <iostream>
#include <set>
using namespace std;
int main() {
set<int> set1;
// set only stores unique value, even if we insert multiple duplicate values

//  insert() is used it insert element in the set.
set1.insert(1);
set1.insert(1);
set1.insert(2);
set1.insert(2);
set1.insert(3);
set1.insert(3);
set1.insert(3);
set1.insert(4);
set1.insert(5);
set1.insert(6);

cout << "Elements in the set are: " << endl;
for (int i : set1) {
    cout << i << " ";    // even though we've inserted multiple duplicate elements, it onlys sotres the unique ones.
}
cout << endl;

// erase() function is used to remove element from the set.
set1.erase(set1.begin());

cout << "After removint the first element: " << endl;
for (int i : set1) {
    cout << i << " ";
}
cout << endl;


// to delete the second element:
set<int> :: iterator it = set1.begin();
it++;    // deletes the second element from given set

set1.erase(it);

for(int i : set1) {
    cout << i << " ";
}
cout << endl;

// count() function checks whether the specified element is present in the set or not.
cout << "Is 1 present in the set? " << set1.count(5) << endl;
cout << "Is 7 present in the set? " << set1.count(7) << endl;


// find() function returns the iterator (reference) of specified element
set<int> :: iterator itr = set1.find(3);

for (auto it = itr; it != set1.end(); it++) {
    cout << *it << " ";
}
cout << endl;


return 0;
}
