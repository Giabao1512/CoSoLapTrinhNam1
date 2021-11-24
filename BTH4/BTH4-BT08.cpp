#include <iostream>
using namespace std;
int main()
{
	long int n, sum=0, a=0;
	cout << "nhap so nguyen: ";
	cin >> n;
	while (n>0)
	{
		a = n % 10;
		n /= 10;
		if (a % 2 != 0)
		{
			sum += a;
		}
	}
	cout << "tong cac so le cua so " << n << " la: " << sum << endl;
	return 0;

}