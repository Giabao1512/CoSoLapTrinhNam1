#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap canh hinh vuong: ";
    cin >> n;
    cout << "cau a: \n";
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j<=n;j++)
        {
            cout << "*";
            
        }
            cout << "\n";
    }
    cout << "cau b:\n";
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";    
            }

        } cout << "\n";
    }
    return 0;
}