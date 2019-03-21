#include <iostream>;

using namespace std;

bool isPrime(int num){

	if (num == 1)
	{
		return false;
	}
	else if (num == 2)
	{
		return true;
	}
	else
	{
		for (int i = 2; i <= sqrt(num); i++)
		{
			if ((num % i) == 0)
				return false;
		}
		return true;
	}
	
}

int main()
{
	cout << isPrime(2);
	return 0;
}

