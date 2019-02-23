#include <iostream>;

using namespace std;

int main(void)
{
	float xA, yA;
	float xB, yB;
	float xC, yC;
	float a_b_distance, b_c_distance, c_a_distance;
	float area, perimeter, semi_perimeter;

	cout << "Coordenadas dos pontos do triangulo:" << endl;
	cout << "A x ? ";
	cin >> xA;
	cout << "A y ? ";
	cin >> yA;
	cout << "B x ? ";
	cin >> xB;
	cout << "B y ? ";
	cin >> yB;
	cout << "C x ? ";
	cin >> xC;
	cout << "C y ? ";
	cin >> yC;


	a_b_distance = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));
	b_c_distance = sqrt(pow((xC - xB), 2) + pow((yC - yB), 2));
	c_a_distance = sqrt(pow((xA - xC), 2) + pow((yA - yC), 2));

	//cout << "1 - " << a_b_distance << endl << "2 - " << b_c_distance << endl << "3 - " << c_a_distance << endl;

	perimeter = a_b_distance + b_c_distance + c_a_distance;
	semi_perimeter = perimeter / 2;
	
	//Heron formula to calculate the triangle area
	area = sqrt(semi_perimeter*(semi_perimeter - a_b_distance)*(semi_perimeter - b_c_distance)*(semi_perimeter - c_a_distance));

	cout << "Area:" << area << endl;
}