
#include <iostream>;

using namespace std;

int main()
{
	int first, last;
	
	//input the counter statements (fist last)
	cout << "first last" << endl;
	cin >> first >> last;

	for (int i=first; i<=last; i++)
	{
		cout << " " << i;
	}
	return 0;
}