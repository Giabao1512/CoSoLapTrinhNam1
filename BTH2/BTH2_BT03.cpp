#include <iostream>
#include <string>
using namespace std;
int main()
{
	int s;
	long int c;
	string a;
	cout << "Ho va Ten: ";
	getline(cin, a);
	
	cout << "so ngay lam viec: ";
	cin >> s;
	cout << "tien cong: ";
	cin >> c;
	long int l = s * c;
	cout << "tien nhan duoc: " << l << " vnd" << endl;
	return 0;

}