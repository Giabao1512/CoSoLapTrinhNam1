#include <iostream> 
using namespace std;
int main() {
	int n, so, sum(0), dem = 0, soN=0;
	cout << "nhap so nguyen: ";
	cin >> n;
	while (n <= 0) {
		cout << "ban da nhap sai, vui long nhap lai: ";
		cin >> n;
	} while (n > 0) {
		so = n % 10;
		soN = soN * 10 + so;
		n /= 10;
		sum += so;
		dem++;

	}cout << "so co " << dem << " chu so " << endl;
	cout << "tong cac so trong so nguyen= " << sum << endl;
	cout << "so dao nguoc cua so " << n << " la: " << soN << endl;
	return 0;
}