#include <iostream>
using namespace std;
int main()
{
	long int a;
	cout << " nam: "; cin >> a;
	if (a <= 0)
	{
		cout << "nam khong hop le.";
	}
	else
	{
	if (a % 400 == 0  || a % 4 == 0 && a % 100 != 0)
	{
		cout << a << " la nam nhuan";
	}
	else
	{
		cout << a << " la nam khong nhuan";
	}
}
	return 0;
}