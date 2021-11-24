#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float r, chuvi, dientich;
	const double PI = 3.141593;
	cout << "ban kinh =";
	cin >> r;
	chuvi = 2 * PI * r;
	cout << "chu vi = " << fixed << setprecision(2) << chuvi << " cm" << endl;
	dientich = PI * PI * r;
	cout << "dien tich =" << fixed << setprecision(2) << dientich << " cm^2" << endl;
	return 0;
	
}