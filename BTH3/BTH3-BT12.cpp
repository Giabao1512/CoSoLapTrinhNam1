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
			cout << "pt ax+b=0 vo so nghiem \n";
		}
		else
		{
			cout << "pt ax+b=0 vo nghiem \n";
		}

	}
	else {
		x = (double)-b / a;
		cout << "phuong trinh ax+b=0 co nghiem la: " << x;
	}
}