#include <iostream>;

using namespace std;


double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double side1 = distance(x1, y1, x2, y2);
	double side2 = distance(x2, y2, x3, y3);
	double side3 = distance(x3, y3, x1, y1);
	double semiPerimeter = (side1 + side2 + side3) / 2;

	return sqrt(semiPerimeter*(semiPerimeter -side1)*(semiPerimeter - side2)*(semiPerimeter - side3));
}

int main()
{
	cout << "Area: " << area(0, 2, 1, 4, 3, 2);
	return 0;
}

