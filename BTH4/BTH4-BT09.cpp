#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n1, n2;
	int dem = 0;
	cout << "2 so nguyen duong lan luot la: ";
	cin >> n1 >> n2; //n1<n2
	while (n1 < 0 || n2<0 || n1>n2)
	{
		cout << "nhap sai, nhap lai: ";
		cin >> n1 >> n2;
	}
	int i = n1;
	while (i <= n2)
	{
		if (10 % i == 0)
		{
			dem++;
		}
		i++;

	}
	cout << "co " << dem << " so la uoc cua 10 trong pham vi n1 den n2." << endl;

	return 0;
}
