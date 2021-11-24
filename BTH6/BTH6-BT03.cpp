#include <iostream>
using namespace std;
double pt(double x, double y)
{
	return pow(x, y);
}
int main()
{
	int x = 3, y = 4;
	cout << pt(x, y);
	return 0;
}