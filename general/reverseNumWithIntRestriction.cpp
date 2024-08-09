#include <iostream>
#include <climits>
using namespace std;
int main () {
	int number , result = 0 , digit;
	cout << "Enter a number to find it's number :";
	cin >> number;
	while ( number != 0 ){
		digit = number % 10;
		if (result < INT_MIN/10 || result > INT_MAX/10){
			result = 0;
			break;
		}
		else {
			result = ( result * 10) + digit;
			number /= 10;
		}
	}
	cout << "The reversed number is : " << result << endl;
	return 0;

}

