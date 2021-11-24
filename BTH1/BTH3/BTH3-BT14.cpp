#include <iostream> 
using namespace std;
int main() {
	int a, b, c;
	cout << "3 so nguyen lan luot la: "; cin >> a >> b >> c;
	if (a - b > 0 && a - c > 0 && b - c > 0) {
		cout << "thu tu tang dan: " << c << " " << b << " " << a;
	}
	else {
		if (a - b > 0 && a - c > 0 && b - c < 0) {
			cout << "thu tu tang dan: " << b << " " << c << " " << a;
		}
		else {
			if (b - a > 0 && b - c > 0 && a - c > 0) {
				cout << "thu tu tang dan: " << c << " " << a << " " << b;
			}
			else {
				if (b - a > 0 && b - c > 0 && a - c < 0) {
					cout << "thu tu tang dan: " << a << " " << c << " " << b;
				}
				else {
					if (c - a > 0 && c - b > 0 && a - b > 0) {
						cout << "'thu tu tang dan: " << b << " " << a << " " << c;
					}
					else { 
						if (c - a > 0 && c - b > 0 && a - b < 0) {
							cout << "thu tu tang dan: " << a << " " << b << " " << c;
						}

					}
				}
			}
		}
	}
	return 0;
}