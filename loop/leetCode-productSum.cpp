// subtract the product and sum of digits of an integer

#include <iostream>
using namespace std;
int main () {
	int number, mul = 1, sum = 0, result, digit;
	cout << "Enter a number : " << endl;
	cin >> number;
	while ( number != 0 ) {
		digit = number % 10;
		mul *= digit;
		sum += digit;
		number = number / 10;
	}

	result = mul - sum;
	cout << "The result of subtraction of product and sum of a given integer is:" << result <<endl;

	return 0;
}
