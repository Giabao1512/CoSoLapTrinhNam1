#include <iostream> 
using namespace std;
int main()
{
	int a;
	cout << "thang: "; cin >> a;
	switch (a)
	{
	case 2:
			cout << "so ngay cua thang 2 la 28 hoac 29 ngay";
		break;
	}
	if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) {
		cout << "so ngay cua thang " << a << " la 31 ngay.";
	}
	else
	{
		if (a != 2)
		{
			cout << "so ngay cua thang " << a << " la 30 ngay.";
		}
	} 
	return 0;
}