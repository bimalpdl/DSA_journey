#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int number, count = 0;
    cin >> number;

    // Convert the number to its absolute value for bit counting
    unsigned int unsignedNumber = static_cast<unsigned int>(number);

    while (unsignedNumber != 0) {
        if (unsignedNumber & 1) {
            count++;
        }
        unsignedNumber >>= 1;
    }

    cout << "Number of ones in the given number is " << count << endl;
    return 0;
}

