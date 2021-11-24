#include <iostream>
using namespace std;

int main()
{
	int so, tong(0), so1, so2, so3, soN;
	/*int soN = 0, a;*/
	{
		cout << "nhap so co 3 chu so "; cin >> so;
		//	 for(int i = so;i >0 ;)
		//	 {
		//		
		//		 tong += i % 10;
		//		 i /= 10;
		//		 i;
		//		}
		//	 cout << "tong cac so = " << tong << endl;
		//	 
		//	 while (so > 0) {
		//		 a = so % 10;
		//		 soN = soN * 10 + a;
		//		 so /= 10;
		//		 
		//	 }
		//	 cout << "so dao nguoc la: " << soN << endl;
		//		
		//	}	



		so1 = so % 10;
		so /= 10; // so = so / 10;
		so2 = so % 10;
		so /= 10;
		so3 = so;
		tong = so1 + so2 + so3;
		cout << "tong cac so = " << tong << endl;
		soN = so1 * 100 + so2 * 10 + so3;
		cout << "so dao nguoc la: " << soN << endl;
		return 0;

	}
}

