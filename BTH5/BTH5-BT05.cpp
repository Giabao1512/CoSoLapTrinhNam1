#include <iostream>
using namespace std;
int main()
{
	int n1, n2, dem = 0;
	cout << "2 so nguyen lan luot la: ";
	cin >> n1 >> n2;
	while (n1 < 0 || n2<0 || n1>n2)
	{
		cout << "nhap sai, nhap lai: ";
		cin >> n1 >> n2;
	}
	for (int i = 2;i <= n2;i++) //1->10 : 2 3 5 7
	{
		bool nt = true;
		for (int b = 2;b <= sqrt(double(i));b++)
		{
			if (i % b == 0)
			{
				nt = false;
			}
		}
		if (nt)
		{
			dem++;
		}
	}
	cout << "tu " << n1 << " den " << n2 << " co " << dem << " so nguyen to." << endl;
	return 0;
}	