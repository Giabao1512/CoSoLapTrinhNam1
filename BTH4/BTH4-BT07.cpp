#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;
int main() 
{
	char a;
	int c,b;
	string e, f="" ;
		cout << "Chon phep tinh hay ket thuc? ";
		getline(cin, e);
		cout << f;
		if (e == "phep tinh"||e=="Phep tinh"||e=="Phep Tinh")
		{
			while (f == "") 
			{
				cout << "Phep tinh ban can(+ - * /) hoac thoat: ";
				cin >> a;
				if (a == '+' || a == '-' || a == '*' || a == '/')
				{
					cout << "2 so a va b lan luot la: ";
					cin >> c >> b;
					switch (a)
					{
					case '+':
						cout <<"Ket qua cua: "<<c << " + " << b << " = " << c + b << endl;
						break;
					case '-':
						cout << "Ket qua cua: " << c << " - " << b << " = " << c - b << endl;
						break;
					case '*':
						cout << "Ket qua cua: " << c << " * " << b << " = " << c * b << endl;
						break;
					case '/':
						if (b == 0)
						{
							cout << "  Loi chia cho 0." << endl;
						}
						else
						{
							cout << "Ket qua cua: " << c << " / " << b << " = " << fixed << setprecision(2) << c*1.0 / b << endl;
						}
						break;
					}
					_getch();
					system("cls");
					
				}
				else
				{
					cout << "Ban da chon thoat.";
					return 0;
				}
			} 
		
		}
		else
		{
			cout << "Ban da chon ket thuc.";
		}
		return 0;
		
	}
	