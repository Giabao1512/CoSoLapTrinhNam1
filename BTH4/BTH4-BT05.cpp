#include <iostream>
using namespace std;
int main()
{
	int n, soN=0, a;
	cout << "nhap so nguyen:";
	cin >> n;
	while (n <= 0)
	{
		cout << "ban da nhap sai gia tri, vui long nhap lai: ";
		cin >> n;
	} while (n > 0)
	{
		a = n % 10;
		soN = soN*10 + a;
		n /= 10;
	} 
	cout << "so dao nguoc la: " << soN << endl;
	return 0;
}