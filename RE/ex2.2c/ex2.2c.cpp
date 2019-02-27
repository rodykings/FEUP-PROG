#include <iostream>;

using namespace std;

int main()
{
	double x, y, z;

	cout << "x y z" << endl;
	cin >> x >> y >> z;

	if (x > y) {
		if (x > z) {
			if (y > z)
			{
				if (y + z <= x)
					cout << "Podem ser lados de um trinangulo!";
				else
					cout << "Nao podem ser lados de um trinangulo!";
			}
		}
		else {
			if (x + y <= z)
				cout << "Podem ser lados de um trinangulo!";
			else
				cout << "Nao podem ser lados de um trinangulo!";
		}
	}
	else {
		if (y > z) {
			if (x+z <= y)
				cout << "Podem ser lados de um trinangulo!";
			else
				cout << "Nao podem ser lados de um trinangulo!";
		}
		else
			if (x + y <= z)
				cout << "Podem ser lados de um trinangulo!";
			else
				cout << "Nao podem ser lados de um trinangulo!";
	}

	return 0;
}