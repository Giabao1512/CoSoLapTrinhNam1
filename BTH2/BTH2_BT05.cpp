#include <iostream>
using namespace std;
//#include <iomanip>
int main()
{
	double a, b, c, nchuvi, dientich;
	cout << "a= ";
	cin >> a;
	cout<< "b= ";
	cin >> b;
	cout	<< "c=";
	cin >> c;
	nchuvi = (a + b + c) / 2;
	cout << "chu vi = " << nchuvi << "cm" << endl;
		dientich = sqrt(nchuvi * (nchuvi - a) * (nchuvi - b) * (nchuvi - c));
	cout << "dien tich = " << dientich << " cm^2"<<endl;
	
	return 0;
}