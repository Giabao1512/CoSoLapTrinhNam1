#include <iostream>
using namespace std;
int main() 
{
	double n, tich = 1;
	int i = 1;
	cout << "nhap sp nguyen: ";
	cin >> n;
	while (n <= 1) 
	{
		cout << "so ban da nhap sai dieu kien, vui long nhap lai: ";
		cin >> n;
	}
	while(i<=n)
	{
		tich *= i;
		i += 2;
	} 

 cout << "tich cac so le = " << tich << endl;
	return 0;
}
 