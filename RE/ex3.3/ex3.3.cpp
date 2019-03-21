//rqn = (rq + n / rq) / 2

#include <iostream>;

using namespace std;

double rqn(double n, double delta, int nMaxIter)
{
	double rqn = 1;
	double rq = 1;

	while ((abs(n - pow(rqn, 2)) > delta) && (nMaxIter != 0))
	{
		nMaxIter -= 1;
		rqn = (rq + n / rq) / 2;
		rq = rqn;
		
	}
	return rqn;
}

int main()
{
	cout << rqn(20, 0.001, 20);
	return 0;
}