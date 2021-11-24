#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cout << "chuoi: "; cin >> a;
	getline(cin, a);
	cout << "chieu dai: " << a.length() << endl;
	return 0;
}