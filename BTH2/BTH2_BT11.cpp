#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x, rad;
	const float PI = 3.14159265; 
	cout << "nhap gia tri cua x: "; cin >> x; 
	rad = (x * PI) / 180;
	cout << "chuyen sang: "
		<< "sin(x)= " << fixed << setprecision(3) << sin(rad) << endl
		<< "cos(x)= " << fixed << setprecision(3) << cos(rad) << endl
		<< "tan(x) =" << fixed << setprecision(3) << tan(rad) << endl;
	return 0;

}