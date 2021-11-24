#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout << "nhap vao  so nguyen duong: ";
	cin >> n;
	for (int i = 0;i <= n;i++)
	{
		sum += i;
	}
	cout << "tong cac so: " <<  sum << endl;
	return 0;
}