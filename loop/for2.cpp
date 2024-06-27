#include <iostream>
using namespace std;
int main () {
	int number;
	cout << "Enter a number to count: " << endl;
	cin >> number;
	int i = 0;
	cout << "\nFor loop without any parameter but break statement within.\n" << endl;
	for (;;){
		if ( i <= number ){
			cout << "The value of 'i' is : " << i << endl;
			i += 1;
		}
		else break;
	}
	return 0;
}
