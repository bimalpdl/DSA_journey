#include <iostream>

using namespace std;

int main() {
  int rows = 4;

  // Outer loop for rows
  for (int i = 1; i <= rows; i++) {
    // Inner loop to print digits in descending order
    for (int j = i; j <= rows; j++) {
      cout << j;
    }
    cout << endl; // Move to the next line
  }

  return 0;
}

