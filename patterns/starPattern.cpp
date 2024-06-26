#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows to print \n";
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		int j = 0;
		while (j <i)
		{
			cout << "*";
			// cout << n-j+1; //this will print the reverse of above code
			j++;
		}
		
		cout << endl;
		i++;
	}

	return 0;
}