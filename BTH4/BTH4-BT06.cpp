//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int so = 0;
//	cout << "nhap so nguyen n: ";
//	cin >> n;
//	if (n < 2)
//	{
//		cout << n << " khong la so nguyen to";
//	}
//	else
//	{
//		for (int i = 2;i <= sqrt(n);i++)
//		{
//			if (n % i == 0)
//			{
//				so++;
//			} 
//		}
//	}
//	if (so != 0) 
//	{
//		cout << n << " khong phai la so nguyen to";
//	}
//	else
//	{
//		cout << n << " la so nguyen to";
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so nguyen: ";
	cin >> n;
	//bool nt = true;
	int i = 2;
	if (n < 2)
	{
		cout << n << " khong la so nguyen to.";
	}
	else
	{
		if (n == 2)
		{
			cout << n << " la so nguyen to.";
		}
		else
		{
			while (i <= sqrt(n))
			{
				if (n % i == 0)
				{
					//nt = false;
					cout << n << " khong la so nguyen to.";
					return 0;
				}
				else {
					cout << n << " la so nguyen to.";
				}return 0;
			}
		}
	}
}