#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, b, c, a;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = a * x * x + b;
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = x / c;
		x += dx;
	}
	cout << " F = " << F << endl;
	return 0;
}