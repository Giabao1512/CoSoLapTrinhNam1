#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	int a;
	char c;
	double b;
	cout << "2 so nguyen lan luot la: "; cin >> a >> b;
	cout << "ban muon lam gi voi 2 so do: "; cin >> c;
	switch (c)
	{
	case  '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		if (b == 0) 
		{
			cout << "loi chia 0.";
		}
		else
		{
			cout << fixed << setprecision(2) << a / b;
		}
		break;
	default: cout << "khong ho tro phep tinh.";
	} 
	return 0;
}