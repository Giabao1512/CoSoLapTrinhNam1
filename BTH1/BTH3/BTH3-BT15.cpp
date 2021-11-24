#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cout << "3 canh cua tam giac lan luot la: "; cin >> a >> b >> c;
	if (abs(b-c)<a<b+c) {
		cout << " hop  le va la ";
	}
	else {
		cout << "khong hop le";
	}
	if (a == b && a == c && b == c) {
		cout << "tam giac deu";
	}
	else {
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			cout << "tam giac vuong";
		}
		else {
			if (a != c && a == b || a != b && a == c || b != a && b == c) {
				cout << "tam giac can";
			}
			else {
				cout << "tam giac thuong";
			}
		}
	}
	return 0;
}