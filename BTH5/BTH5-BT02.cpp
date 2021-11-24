#include <iostream>
using namespace std;
int main()
{
	int n, sum=0, a;
	cout << "ban can bao nhieu so: ";
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cout << "nhap so thu " << i << ": ";
		cin >> a;
		sum += a;
	} cout << "tong cac so vua nhap la: " << sum << endl;
	return 0;
}