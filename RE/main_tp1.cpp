/*
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(void)
{
	string input;
	static string init = "Welcome to Calculate 1.0";
	static string consoleReference = ">>>";
	
	cout << init << endl;

	while (input != "exit") {
		cout << consoleReference;
		cin >> input;

		if (input == "sum")
		{
			double op1, op2;
			double result;
			cout << "Indique o primeiro numero:";
			cin >> op1;
			cout << "Indique o segundo numero:";
			cin >> op2;
			result = op1 + op2;
			cout << "Resultado:" << result << endl;
		}
	
	}
	return 0;
}

*/