#include <iostream>
using namespace std;
int main()
{
	double a, b, c, x, x1, x2, xkep, d;
	cout << "(a !=0) a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	d = (b * b) - (4 * a * c);
	if (a == 0) {
		x = -c / b;
		cout << "pt co nghiem la x =" << x;
	}
	else
	{
		if (b == 0)
		{
			cout << "vn";
		}
		else
		{

			if (d > 0) {
				x1 = ((-b + sqrt(d)) / (2 * a));
				x2 = ((-b - sqrt(d)) / (2 * a));
				cout << "pt co nghiem x1 = " << x1 << " va co nghiem x2 = " << x2;
			}
			else {
				if (d == 0) {
					xkep = -b / 2 * a;
					cout << "pt co nghiem kep x =" << xkep;
				}
				else {
					cout << "vn rui";
				}
			}

		}
	}


}