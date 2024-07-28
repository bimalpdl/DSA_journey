// simple function example
#include <iostream> 
using namespace std;

int fact(int num){

	int factorial = 1;
	for ( int i = 1 ; i <= num; i++) {
		factorial = factorial * i;
	}
	return factorial;
}


int combination(int n , int r){
	int nFacto = fact(n);
	int rFacto = fact(r);
	int nMinusRfacto = fact(n-r);
	return nFacto / ( rFacto * nMinusRfacto );;
	}


	int main (){
		int N, R, result;
		cout << "Enter the value of N: " << endl;
		cin >> N;
		cout << "Enter the value of R: " << endl;
		cin >> R;
		result = combination(N,R);
		cout << "The factorial of " << N << " and " << R << " is " << result << endl;

		return 0;
	}

