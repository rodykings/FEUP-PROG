#include <iostream>;

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	int x, y;

	cout << "a ? ";
	cin >> a;
	cout << "b ? ";
	cin >> b;
	cout << "c ? ";
	cin >> c;
	cout << "d ? ";
	cin >> d;
	cout << "e ? ";
	cin >> e;
	cout << "f ? ";
	cin >> f;

	//x = (c·e - b·f) / (a·e - b·d) 
	x = (c*e - b * f) / (a*e - b * d);

	//y = (a·f - c·d) / (a·e - b·d)
	y = (a*f - c*d) / (a*e - b*d);

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;
}