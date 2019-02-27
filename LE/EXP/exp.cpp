
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const unsigned RESULT_PRECISION = 3;

	double operand1, operand2;
	char operation;
	double result;
	bool validOperation = true;

	//input 2 numbers
	cout << "x op y" << endl;
	cin >> operand1 >> operation >> operand2;

	//checks what operation 
	switch (operation)
	{
		case '+':
			result = operand1 + operand2;
			break;
		case '-':
			result = operand1 - operand2;
			break;
		case 'x':
			result = operand1 * operand2;
			break;
		case '/':
			result = operand1 / operand2;
			break;
		default:
			validOperation = false;
	}

	//show the result or invalide operation
	if (validOperation)
	{
		cout << operand1 << ' ' << operation << ' ' << operand2 << " = ";
		cout << fixed << setprecision(RESULT_PRECISION) << result << endl;
	} 
	else 
		cerr << "Invalid operation !\n";
	return 0;
}