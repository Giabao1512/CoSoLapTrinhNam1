#include <iostream>
using namespace std;
int main()
{
	int d, r;
	cout << "nha chieu dai va chieu rong: ";
	cin >> d >> r;
	for (int i = 1;i <= d;i++)
	{
		for (int k = 1;k <= r;k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}