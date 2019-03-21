#include <iostream>;
#include <iomanip>;

using namespace std;

int main()
{
	double a, b, c, solutionsTest;
	
	cout << "Equation (a b c): ";
	cin >> a >> b >> c;

	solutionsTest = pow(b, 2) - 4 * a * c;

	if (solutionsTest > 0) {
		cout << "2 real solutions: " << (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a) << " e " << (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
	}
	else if (solutionsTest == 0){
		cout << "1 real solution: " << (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
	}
	else {
		double real, complex;

		real = -b / (2 * a);
		complex = sqrt(-(pow(b, 2) - 4 * a*c)) / (2 * a);

		cout << "2 complex solutions: ";
		cout << fixed << setprecision(3) << real << "+" << fixed << setprecision(3) << complex << "i e ";
		cout << fixed << setprecision(3) << real << "-" << fixed << setprecision(3) << complex << "i ";

	}
	return 0;
}