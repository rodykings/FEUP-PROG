#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double operand1, operand2, result;
	char operation;
	bool invalidOperation = false;

	cout << "Calculator 1.0" << endl;
	cout << "operand1 operation operand2" << endl;
	cin >> operand1 >> operation >> operand2;

	switch (operation)
	{
		case '+':
			result = operand1 + operand2;
			break;
		case '-':
			result = operand1 - operand2;
			break;
		case '*':
			break;
			result = operand1 * operand2;
		case '/':
			result = operand1 / operand2;
			break;
	default:
		invalidOperation = true;
		break;
	}

	if (invalidOperation)
	{
		cerr << "Invalid Operation!";
	}
	else
	{
		cout << endl << operand1 << ' ' << operation << ' ' << operand2 << " = ";
		cout << fixed << setprecision(3) << result;
	}
	
	return 0;
}