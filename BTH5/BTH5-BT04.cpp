#include <iostream>
using namespace std;
int main()
{
	int n, t=1;
	cout << "nhap so nguyen n: ";
	cin >> n;
	if (n == 0)
	{
		cout << "0! = 1";
		return 0;
	}
	else
	{
		for (int i = 1;i <= n;i++)
		{
			t *= i;
		}
	} cout << n << "!= " << t << endl;
	return 0;
}