//tang dan
//#include <iostream> 
//using namespace std;
//int main() 
//{
//	int a, b, c;
//	cout << "3 so nguyen lan luot la: "; cin >> a >> b >> c;
//	if (a - b > 0 && a - c > 0 && b - c > 0) 
//	{
//		cout << "thu tu tang dan: " << c << " " << b << " " << a;
//	}
//	else
//	{
//		if (a - b > 0 && a - c > 0 && b - c < 0)
//		{
//			cout << "thu tu tang dan: " << b << " " << c << " " << a;
//		}
//		else
//		{
//			if (b - a > 0 && b - c > 0 && a - c > 0)
//			{
//				cout << "thu tu tang dan: " << c << " " << a << " " << b;
//			}
//			else
//			{
//				if (b - a > 0 && b - c > 0 && a - c < 0)
//				{
//					cout << "thu tu tang dan: " << a << " " << c << " " << b;
//				}
//				else
//				{
//					if (c - a > 0 && c - b > 0 && a - b > 0)
//					{
//						cout << "'thu tu tang dan: " << b << " " << a << " " << c;
//					}
//					else
//					{ 
//						if (c - a > 0 && c - b > 0 && a - b < 0)
//						{
//							cout << "thu tu tang dan: " << a << " " << b << " " << c;
//						}
//
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
// 

//giam dan
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cout << "nhap 3 so nguyen: ";
//	cin >> a >> b >> c;
//	if (a > b)
//	{
//		if (b > c)
//		{
//			cout << a << " " << b << " " << c;
//		}
//		else
//		{
//			if (a > c)
//			{
//				cout << a << " " << c << " " << b;
//			} else
//			{
//				cout << c << " " << a << " " << b;
//			}
//		}
//	}
//	else
//	{
//		if (a > c)
//		{
//			cout << b << " " << a << " " << c;
//
//		}
//		else
//		{
//			if (b > c)
//			{
//				cout << b << " " << c << " " << a;
//			}
//			else
//			{
//				cout << c << " " << b << " " << a;
//			}
//		}
//	}
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	int d;
//	cout << "nhap vao 3 so nguyen: ";
//	cin >> a >> b >> c;
//	if (a > b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	} 
//	if (a > c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b > c)
//	{
//		d = b;
//		b = c;
//		c = d;
//
//	}
//	cout << a << " " << b << " " << c;
//}