#include <iostream>
using namespace std;
int main() 
{
	int a;
	cout << "diem tich luy: "; cin >> a;
	if (a >= 0 && a <= 10)
	{
		if (a >= 9)
		{
			cout << "xuat sac";
		}
		else {
			if (a >= 8 && a < 9)
			{
				cout << "gioi";
			}
			else
			{
				if (a >= 7 && a < 8)
				{
					cout << "kha";
				}
				else
				{
					if (a >= 6 && a < 7)
					{
						cout << "trung binh, kha";
					}
					else
					{
						if (a >= 5 && a < 6)
						{
							cout << "trung binh";
						}
						else
						{
							cout << "yeu";
						}
					}
				}
			}
		}
	}
	else
	{
		cout << "ban da nhap sai.";
	}
	return 0;
}