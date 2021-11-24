#include <iostream>
#include <cmath>
using namespace std;
double MaxOfTwoNumbers(double x, double y)
{
	
	return max(x,y);
}
double MaxOfThreeNumbers(double x, double y, double z, double maxx)
{
	if (x > y && x > z)
	{
		maxx = x;
	}
	else
	{
		if (y > x && y > z)
		{
			maxx = y;
		}
		else
		{
			maxx = z;
		}

	}
	return maxx;
}
int main()
{
	double x = 3, y = 4, z = 5, maxx = 0;
	cout << "so lon nhat trong 2 so nguyen x va y la: " << MaxOfTwoNumbers(x,y) << endl;
	cout << "so lon nhat trong 3 so nguyen x,y,z la: " << MaxOfThreeNumbers(x,y,z);
	return 0;
}