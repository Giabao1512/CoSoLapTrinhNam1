
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	int x1, x2;
	double y1, y2, d;
	cout << "nhap toa do diem thu nhat: ";
	cin >> x1 >> y1;
	cout << "nhap toa do diem thu hai: ";
	cin >> x2 >> y2;
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "khoang cach giua 2 diem la: " << fixed << setprecision(1) << d << endl;
	system("pause");
	return 0;
}