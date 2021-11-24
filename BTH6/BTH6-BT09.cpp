#include <iostream>
using namespace std;
void sum(int& x)
{
	int s = 0, i = 0;
	while(x)
	{
		i = x % 10;
		x /= 10;
		s += i;
	}
	cout << s;
}
int main()
{
	int n;
	cout << "so nguyen: ";
	cin >> n;
	cout << "tong cac chu so cua so nguyen " << n << " la: ";
	sum(n);
	return 0;
}