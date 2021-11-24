#include  <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "nam: ";
	cin >> a;
	cout << "thang: ";
	cin >> b;
	if (a % 100 != 0 && b == 2 && a % 4 == 0 || a % 100 != 0 && b == 2 && a % 400) {
		cout << "so ngay cua thang " << b << " nam " << a << " la 29 ngay";
	}
	else {
		if (b == 2 && a % 4 != 0 && a % 400 != 0) {
			cout << "so ngay cua thang " << b << " nam " << a << " la 28 ngay";
		}
		else {
			if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) {
				cout << "so ngay cua thang " << b << " nam " << a << " la 31 ngay";
			}
			else {
				cout << "so ngay cua thang " << b << " nam " << a << " la 30 ngay";
			}
		}
	}
	return 0;
}
