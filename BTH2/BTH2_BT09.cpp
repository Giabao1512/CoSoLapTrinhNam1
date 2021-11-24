#include <iostream>
using namespace std;
int main()
{
	double soTien;
	long int  soSach, thue, ship, tong, tienSach;
	const int tienShip1cuon = 2000;
	cout << "so luong sach can mua: ";
	cin >> soSach;
	cout << "gia cac cuon sach da mua(VND): ";
	cin >> soTien;
	thue = soTien * 0.075;
	ship = soSach * tienShip1cuon;
	tong = soTien + thue + ship;
	cout << "TONG TIEN PHAI TRA: " << tong << " VND" << endl;
	return 0;
	
}