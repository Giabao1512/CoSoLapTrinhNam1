#include <iostream>
using namespace std;
int main()
{
	int n;
	int c, d=0;
	cout << "nhap so nguyen:";
	cin >> n;
	int x = n;
	while (n > 0)
	{
		n /= 10; //n=3456
		d++;//4
	}
		while (d > 0 && x > 0)
		{
			d--; //3
			c = x / pow(10,d); //3456/10^3 ->3
			x = x % int(pow(10,d)); //3456 % 10^3=456
			cout << c << " ";
		}
	return 0;
}