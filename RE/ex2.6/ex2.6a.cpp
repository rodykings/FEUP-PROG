#include <iostream>

using namespace std;

int main()
{
	int num;
	bool prime = false;
	
	cout << "Input a number: ";
	cin >> num;

	if (num == 2 && num == 3){
		prime = true;
	}
	else
	{
		for (int i = 2; i <= sqrt(num); i++) {
			if (num % i == 0) {
				prime = false;
				break;
			}
			else
				prime = true;
		}
	}
	

	cout << prime;

	return 0;
}