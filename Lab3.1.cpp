#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << "x = "; cin >> x;

	A = 2. / x + abs(x);

	if (x < 0)
		B = 1 + 4 * (x * x);
	if (0 <= x && x <= 2)
		B = (exp(x) + abs(x)) * (exp(x) + abs(x));
	if (x > 2)
		B = 5 * sin(x * x + 1);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;

}