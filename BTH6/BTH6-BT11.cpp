#include <iostream>
using namespace std;
int num(int a)
{
	int b = 0;
	while (a)
	{
		b = b * 10 + a % 10;
		a /= 10;
	}
	return b;
}
int main()
{
	int n;
	cout << "so nguyen: ";
	cin >> n;
	int result = num(n);
	if (result == n)
	{
		cout << n << " la so dao nguoc.";
	}
	else
	{
		cout << n << " khong la so dao nguoc.";
	}
	return 0;
}