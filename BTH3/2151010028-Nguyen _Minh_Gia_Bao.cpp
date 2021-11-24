#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long double a, b, c;
	cout << "nhap 3 canh: ";
	cin >> a >> b >> c;
	int a1 = round(b * b + c * c), b1 = round(a * a + c * c), c1 = round(a * a + b * b), a0 = a * a, b0 = b * b, c0 = c * c;
	if (abs(c - b) < a && a < b + c)
	{
		cout << "Tam giac hop le va la ";

		if (a == b && c == a)
		{
			cout << "tam giac deu.";
		}
		else
		{
			if (a == b && b != c || a == c && b != c || b == c && a != b)
			{
				if (a1 == a0 || b1 == b0 || c1 == c0)
				{
					cout << "tam giac vuong can.";
				}
				else
				{
					cout << "tam giac can.";
				}
			}
			else
			{
				if (a1 == a0 || b1 == b0 || c1 == c0)
				{
					cout << "tam giac vuong.";
				}
				else
				{
					cout << "tam giac thuong.";
				}
			}
		}
	}
	else
	{
		cout << "tam giac khong hop le.";
	}
	return 0;
}