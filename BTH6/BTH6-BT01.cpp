#include <iostream>
using namespace std;
int S(int x, double y)
{
	return (x * y);
}
int cv(int x, double y)
{
	return ((x + y) * 2);
}
int main()
{
	int x = 4, y = 5;
	cout << "dien tich: " << S(x, y) << endl;
	cout << "chu vi: "<< cv(x, y);
	return 0;
}