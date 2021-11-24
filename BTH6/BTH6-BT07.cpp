#include <iostream>
using namespace std;
int check(int n)
{
	int dem = 0;
	for (int i = 2; i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	int n;
	cout << "nhap so nguyen: ";
	cin >> n;
	int nt = check(n);
	if (nt >= 1)
	{
		cout << "False";
	}
	else
		cout << "True";
	return 0;

}