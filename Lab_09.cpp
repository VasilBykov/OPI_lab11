#include <iostream>

using namespace std;

int main()
{
	double a, b, x, e = 1e-4;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	do
	{
		x = (a + b) / 2;

		if ((5 * x - 1 + pow(x, 3)) * (5 * a - 1 + pow(a, 3)) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	} while (abs(a - b) > 2 * e);

	cout << "Answer - x: " << x;

	return 0;
}