#include  <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "thang: ";
	cin >> b;
	cout << "nam: ";
	cin >> a; 
	if (a <= 0 || b < 1 || b > 12)
	{
		cout << "so lieu khong hop le.";
	}
	else
	{
		if (b == 2)
		{
			if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
			{
				cout << "so ngay cua thang " << b << " nam " << a << " la 29 ngay";
			}
			else
			{
					cout << "so ngay cua thang " << b << " nam " << a << " la 28 ngay";
			}
		}

		if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
		{
			cout << "so ngay cua thang " << b << " nam " << a << " la 31 ngay";
		}
		else
		{
			if (b != 2)
			{
				cout << "so ngay cua thang " << b << " nam " << a << " la 30 ngay";
			}
		}


	}
	return 0;
}
