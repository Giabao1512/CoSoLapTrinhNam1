#include <iostream>
using namespace std;
int main()
{
	double n, sum1=0, sum2=0, sum3=0;
	cout << "nhap so nguyen: ";
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		sum1 += pow(i, 2);
		sum2 += 1 / (i*1.0);
		sum3 += 1 / (2*1.0 * i - 1);
	}
	cout << "S1= " << sum1 << endl;
	cout << "S2= " << sum2 << endl;
	cout << "S3= " << sum3 << endl;
	return 0;
}