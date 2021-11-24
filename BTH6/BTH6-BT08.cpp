//#include <iostream>
//using namespace std;
//void S(int x, int& s, int& c)
//{
//	{
//		s = pow(x, 2);
//		c = 4 * x;
//	}
//}
//void shape(int a)
//{
//		for (int i = 1;i <= a;i++)
//		{
//			for (int j = 1;j <= a;j++)
//			{
//				if (i == 1 || j == 1 || i == a || j == a)
//					cout << "*";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//} 
//int main()
//{
//	int x, a, b;
//	cout << "Do dai canh: ";
//	cin >> x;
//	if (x > 0)
//	{
//		S(x, a, b);
//		cout << "Dien tich: " << a << " cm^2." << endl;
//		cout << "Chu vi: " << b << " cm." << endl;
//		shape(x);
//	}
//	else
//		cout << "sai gia tri.";
//	return 0;
//}

#include <iostream>
using namespace std;
void math(int x, int& s, int& c)
{
	s = pow(x, 2);
	c = 4 * x;
	for (int i = 1;i <= x;i++)
	{
		for (int j = 1;j <= x;j++)
		{
			if (i == 1 || j == 1 || i == x || j == x)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n, a, b;
	cin >> n;
	if (n > 0)
	{
		math(n, a, b);
		cout << "dien tich hinh vuong voi do dai canh bang " << n << " la: " << a << " cm^2." << endl;
		cout << "chu vi hinh vuong voi do dai canh bang " << n << " la: " << b << " cm." << endl;
	}
	else
	{
		cout << "so lieu khong hop le.";
	}
	return  0;
}