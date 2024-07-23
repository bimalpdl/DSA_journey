// Nested switch statement
#include <iostream>
using namespace std;
int main (){
	int num1, num2, result = 0;
	char operation;
	cout << "Enter first operand, operator and then second operand\nOR press 'c' to check whether the oparand is odd or even." << endl;
	cin >> num1 >> operation >> num2;
	switch (operation){
		case '+' : result = num1 + num2 ;
			   break;
		case '*' : result = num1 * num2 ;
			   break;
		case '-' : result = num1 - num2 ;
			   break;
		case '/' : result = num1 / num2 ;
			   break;
		case '%' : result = num1 % num2 ;
			   break;
		case 'c' : { 
				   int num;
				   cout << "This will check if the operand is odd or even " << endl;
				   cout << "Press 1 to check " << num1 << " or press 2 to check " <<  num2 << endl;
				   cin >> num;
				   switch (num){
					   case 1: if (num1 % 2 == 0 ){
							   cout << num1 << " is even." << endl;
						   }
						   else {
							   cout << num1 << " is odd." << endl;
						   }
						   break;
					   case 2: if (num2 % 2 == 0 ){
							   cout << num2 << " is even." << endl;
						   }
						   else {
							   cout << num2 << " is odd." << endl;
						   } 
						   break;
					   default : cout << "Invalid operand" << endl;
				   }

			   }
		default : "Invalid operator";
			  break;
	}
	cout << "The result is : " << result << endl;
	return 0;
}
