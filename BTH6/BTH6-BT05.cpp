#include <iostream>
using namespace std;
void shape(int& x1)
{
	if (x1 > 0)
	{
		for (int i = 1;i <= x1;i++)
		{
			for (int j = 1;j <= x1;j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	} 
	else {
		cout << "nhap sai gia tri.";
	}
}
int main()
{
	int x;
	cout << "canh cua hinh vuong: ";
	cin >> x;
	shape(x);
	return 0;
}
