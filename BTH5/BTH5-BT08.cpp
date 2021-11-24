#include <iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout << "so nguyen duong: ";
	cin >> n;
	for (int i = 0;i <= n;i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	} cout << "tong cac so le: " << sum;
	return 0;
}