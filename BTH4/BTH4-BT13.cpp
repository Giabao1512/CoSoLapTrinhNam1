#include <iostream>
using namespace std;
int main()
{
	int min = INT_MAX, max = INT_MIN, n, sum=0;
	while (cin >> n)
	{
		if (n > max)
		{
			max = n;
		}
		if (n < min)
		{
			min = n;
		}
		sum += n;
	} cout << "so lon nhat la: " << max << endl;
	cout << "so be nhat la: " << min << endl;	
	cout << "tong cac so la: " << sum << endl;
	return 0;
}