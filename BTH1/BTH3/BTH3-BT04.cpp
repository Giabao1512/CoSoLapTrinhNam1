#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "2 so lan luot la: "; cin >> a >> b;
	if (a > b) {

		cout << "a lon hon b";

	}
	else {
		if (a == b) {
			cout << "a bang b";
		}
		else {
			cout << "a be hon b";
		}
	}
	return 0;
}