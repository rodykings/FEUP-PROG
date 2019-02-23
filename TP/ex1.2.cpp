#include <iostream>;

using namespace std;

int main(void)
{
	int operand1, operand2, operand3;
	double dif1, dif2, dif3;
	double average;

	cout << "A ? ";
	cin >> operand1;
	cout << "B ? ";
	cin >> operand2;
	cout << "C ? ";
	cin >> operand3;

	average = (operand1 + operand2 + operand3) / 3.0;

	cout << "media\t= " << average << endl;
	cout << "A-media\t= " << operand1 - average << endl;
	cout << "B-media\t= " << operand2 - average << endl;
	cout << "C-media\t= " << operand3 - average << endl;

	return 0;
}
