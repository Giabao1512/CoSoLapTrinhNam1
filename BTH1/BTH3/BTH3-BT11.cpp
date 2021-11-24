#include <iostream> 
using namespace std;
int main() {
	int a;
	cout << "nhap so: "; cin >> a;
	if (a > 0) {
		cout << a << " la so duong";
	}
	else {
		if (a == 0) {
			cout << "so " << a;
		}
		else {
			cout << a << " la so am";
		}
	} return 0;
}