#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	int n;
	char a;
	do
	{
		cout << "Cau: ";
		cin >> a;
		cout << "Nhap chieu cao: ";
		cin >> n;
		while (n < 0)
		{
			cout << "Nhap sai, nhap lai: ";
			cin >> n;
		}
		switch (a)
		{
		case'a':
			for (int i = 1;i <= n;i++)
			{
				for (int j = 1;j <= i;j++)
				{
					if (j == 1 || j == i || i == n)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case'b':
			for (int i = 1; i <= n;i++)
			{

				for (int j = 1;j <= n;j++)
				{
					if (abs(n - j) <= (i - 1))
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
			}
			break;
		case'c':
			for (int i = 1;i <= n;i++)
			{
				for (int j = 1;j <= n;j++)
				{
					if (i <= j)
						cout << "*";
				}
				cout << endl;
			}
			break;
		case'd':
			for (int i = 1;i <= n;i++)
			{
				for (int j = 1;j <= n;j++)
				{
					if (i > j)
						cout << " ";
					else
						cout << "*";
				}
				cout << endl;
			}
			break;
		case'e':
			int trai = n, phai = n;
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					if (j >= trai && j <= phai)
					{
						cout << "*" << " ";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
				trai--;
				phai++;
			}
			break;
		}
		_getch();
		system("cls");
	} while (n > 0);
	return 0;
}

