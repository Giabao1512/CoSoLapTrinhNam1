#include <iostream>
using namespace std;
int main()
{
	//128 64 32 16 8 4 2 1
	// 2^7    2^6   2^5   2^4  2^3  2^2  2^1 2^0
	//10011011 = 155
	int n;
	int a = 0;
	int b = 0;
	cout << "so o dang nhi phan: ";
	cin >> n;
	while (n > 0)
		if (n % 10 > 1)
		{
			cout << "ban da nhap sai, vui long nhap lai: ";
			cin >> n;
		}
		else
		{
			{
				a += (n % 10) * pow(2, b);
				b++;
				n /= 10;
			}
		}
	cout << "so o dang thap phan: " << a << endl;
	return 0;
	
}