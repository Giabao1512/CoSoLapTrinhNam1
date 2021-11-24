#include <iostream>
using namespace std;
int main()
{
	int n;
	int sumL(0), sumC(0);
	int i = 1;
	cout << "nhap so nguyen: ";
	cin >> n ;
	while (n <= 1)
	{
		cout << "ban da nhap sai dieu kien, vui long nhap lai: ";
		cin >> n;
	} while(i<=n)
	{
		if (i % 2 == 0 && i <= n)
		{
			sumC += i;
		}
		else 
		{
			sumL += i;
		}
		i++;
	}
	cout << "tong cac so chan = " << sumC << endl;
	cout << "tong cac so le = " << sumL << endl;
	return 0;
}