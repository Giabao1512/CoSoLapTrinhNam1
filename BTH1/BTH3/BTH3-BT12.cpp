#include <iostream>
using namespace std;

int main()
{
	int a, b;
	double x;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "pt vn \n";
		}
		else
		{
			cout << "pt vs \n";
		}

	}
	else {
		x = (double)-b / a;
		cout << "pt có ng là: " << x;
	}
}