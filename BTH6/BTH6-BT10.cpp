#include <iostream>
using namespace std;
void numbers(long int x)
{ 
	int j = 0;
	for (int i = 1;i < x;i++)
	{
		if (x % i == 0)
		{
			j += i;
		}
	}
	if (j == x)
	{
		cout << x << " la so hoan thien.";
	}
	else
		cout << x << " khong la so hoan thien.";
}
int main()
{
	int n;
	cout << "nhap so nguyen: ";
	cin >> n;
		numbers(n);
	return 0;
}