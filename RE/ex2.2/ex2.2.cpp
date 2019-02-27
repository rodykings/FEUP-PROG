#include <iostream>;

using namespace std;

int main()
{
	int x, y, z;

	cout << "x y z" << endl;
	cin >> x >> y >> z;

	if (x > y) {
		if (x > z) {
			if (y > z)
				cout << "max: " << x << ' ' << " min: " << z;
			else
				cout << "max: " << x << ' ' << " min: " << y;
		}
		else
			cout << "max: " << z << ' ' << " min: " << y;
	}
	else {
		if (y > z) {
			if (x > z)
				cout << "max: " << y << ' ' << " min: " << z;
			else
				cout << "max: " << y << ' ' << " min: " << x;
		}
		else
			cout << "max: " << z << ' ' << " min: " << x;
	}

	return 0;
}