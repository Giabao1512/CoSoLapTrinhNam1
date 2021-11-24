#include <iostream>
using namespace std;
int num(int n)
{
	int a = 0;
	while (n > 0)
	{
		a = a* 10 + n % 10;
		n /= 10;
	}
	return a;
}
int main()
{
	int n;
	cout << "nhap so nguyen duong: ";
	cin >> n;
	int result = num(n);
	cout << "so dao nguoc: " << result << endl;
	return 0;
}