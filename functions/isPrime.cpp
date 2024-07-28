// Worst way to find a prime number;
#include <iostream>
using namespace std;

bool isPrime(int number)
{
  for (int i = 2; i < number; i++){
    if (number % i == 0){
        return false;
    }
  }
  return true;
}
int main()
{
    int number;
    cout << "Enter a number to find it's prime: \n";
    cin >> number;
    if (isPrime(number))
    {
        cout << number << " is prime.\n";
    }
    else
    {
        cout << number << " is not a prime.\n";
    }
    return 0;
}