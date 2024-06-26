#include <iostream>
using namespace std;
int main() {
	int a = 1200; 
	cout << "Bitwise shift right operation ( >> ) ;" << endl << "performes division by 2 for small integers ; may not work for large integers "<<endl;
	cout << "original number: " << a <<endl;
	cout << (a>>1) <<endl; // binary left shift by one bit.
	cout << (a>>2) <<endl; // binary left shift by two bits.
	cout << (a>>3) <<endl; // binary left shift by two bits.
	cout << (a>>4) <<endl; // binary left shift by two bits.
	cout << (a>>5) <<endl; // binary left shift by two bits.
	cout << (a>>6) <<endl; // binary left shift by two bits.
	cout << (a>>7) <<endl; // binary left shift by two bits.
	cout << (a>>8) <<endl; // binary left shift by two bits.
	cout << (a>>9) <<endl; // binary left shift by two bits.
	cout << (a>>10) <<endl; // binary left shift by two bits.
	cout << (a>>11) <<endl; // binary left shift by two bits.
	return 0;
}

// Generally right operation performs division by 2 on current input for small integers,
// but may not be applied for higher value integers and may produce negative number as output
