#include <iostream>
using namespace std;
int main () {
	int amount ,remaining , notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes5 = 0, notes2 = 0, notes1 = 0;
	cout << "Enter amount: ";
	cin >> amount;

	if (amount < 0 ){
		cout << "Amount can't be negative.";
	}

	remaining = amount;

	while (  remaining > 0){
		if ( remaining >= 100){
			notes100 = remaining /100;
			remaining %= 100 ;
		}

		else if ( remaining >= 50){
			notes50 = remaining /50;
			remaining %= 50 ;
		}

		else if ( remaining >= 20){
			notes20 = remaining /20;
			remaining %= 20 ;
		}

		else if ( remaining >= 10){
			notes10 = remaining /10;
			remaining %= 10 ;
		}

		else if ( remaining >= 5){
			notes5 = remaining /5;
			remaining %= 5 ;
		}

		else if ( remaining >= 2){
			notes2 = remaining /2;
			remaining %= 2 ;
		}
		else if ( remaining >= 1){
			notes1 = remaining /1;
			remaining %= 1 ;
		}
		else {
			cout << "Invalid input" << endl;

			break;
		}
	}
	cout << "Required notes of 100 : " << notes100 << endl;
	cout << "Required notes of 50 : " << notes50 << endl;
	cout << "Required notes of 20 : " << notes20 << endl;
	cout << "Required notes of 10 : " << notes10 << endl;
	cout << "Required notes of 5 : " << notes5 << endl;
	cout << "Required notes of 2 : " << notes2 << endl;
	cout << "Required notes of 1 : " << notes1 << endl;
	return 0;
}
