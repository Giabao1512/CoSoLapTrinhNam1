#include <iostream>
using namespace std;
int main() {
    long int a;
	cout << " nam: "; cin >> a;
	if (a % 400 == 0 || a % 4 ==0) {
		cout << "la nam nhuan";
	}
	else {
		cout << "la nam khong nhuan";
	} return 0;
}