#include <iostream>
using namespace std;
int main()
{
	int n1, n2, dem = 0, dem1 = 0, dem2 = 0;
	//n1<n2
	cout << "nhap vao 2 so nguyen: ";
	cin >> n1 >> n2;
	while (n1 >= n2 || n1 < 0 || n2 < 0)
	{
		cout << "ban da nhap sai, vui long nhap lai: ";
		cin >> n1 >> n2;
	}
	for (int i = 1;i >= n1 && i <= n2;i++)
	{
		if (i % 2 == 0)
		{
			dem++;
		} 
		else
		{
			dem1++;
		}
		if (10 % i == 0)
		{
			dem2++;
		}
	}
	cout << "tu " << n1 << " den " << n2 << " co: " << dem << " so chan." << endl
		<< "tu " << n1 << " den " << n2 << " co: " << dem1 << " so le." << endl
		<< "tu " << n1 << " den " << n2 << " co: " << dem2 << " la uoc cua 10.";
	return 0;
}