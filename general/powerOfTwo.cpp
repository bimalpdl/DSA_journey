#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int number, result;
	cout << "Enter a number\n";
	cin >> number;
	int i = 0;
	while (i < 32 ){
		result = pow(2,i);
		if ( number == result){
			cout << "The " << number << " can be expressed as 2^n and the equation is 2^"<< i << endl;
			break;
		}
		i += 1;
	}
	if (number != result) {
		cout << "The " << number << " can't expressed in terms of 2^n " << endl;
		return 0;
	}
}
// This code is inefficient can consumes more memory/resources;
