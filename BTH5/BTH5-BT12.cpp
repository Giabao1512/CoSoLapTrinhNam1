#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	char a;
	string b = "12.";
	while (b=="12.")
	{
		cout << b;
		cout << "cau ";
		cin >> a;
		cout << "nhap chieu cao: ";
		cin >> n;
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
		case'd':
			for (int i = 1;i <=n;i++)
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
		case'c':
			for (int i = 1;i <= n;i++)
			{
				for (int j = 1;j <= n;j++)
				{
					if (i<=j)
						cout << "*";
				}
				cout << endl;
			}
			break;
		case'b':
			for (int i = 1;i <= n;i++)
			{
				for (int j = 1;j <= n;i++)
				{
					if (i<j&&j ==n )
					{
						cout << "*";
					}
					else
						cout << " ";
				} 
				cout << endl;
			}
			break;
		
		}
	}
}