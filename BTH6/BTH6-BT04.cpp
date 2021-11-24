#include <iostream>
using namespace std;
void summ(int n, int& sum, int& gt)
{
	for (int i = 1;i <= n;i++)
	{
		sum += i;
		gt *= i;
	}
}
int main()
{
	int n;
	int gtr = 1;
	int sum = 0;
	cout << "nhap so nguyen n: ";
	cin >> n;
	summ(n, sum, gtr);
	cout << "tong cac so nguyen tu 1 den " << n << " la: " << sum << endl;
	cout << "giai thua tu cac so 1 den " << n << " la: " << gtr;
	return 0;
}
