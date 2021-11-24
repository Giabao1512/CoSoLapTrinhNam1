#include  <iostream>
using namespace std;
int main()
{
	int n;
	int sum(0);
	cout << "nhap so nguyen n: ";
	cin >> n;
	for (int i = 1; i <= n;i++)
	{
		sum += i;
	}
	cout << "tong cac chu so tu 1 den n: " << sum;
	return 0;
} 