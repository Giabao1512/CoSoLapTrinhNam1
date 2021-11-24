#include <iostream>
using namespace std;
int main() {
    int n, i=2;
    cout << "Nhap so n= ";
    cin >> n;
    while (n <= 0)
    {
        cout << "nhap sai, nhap lai: ";
        cin >> n;
    }
    if (n == 1)
    {
        cout << n << " khong co thua so nguyen to.";
    }
    else 
    cout << n << " co cac thua so nguyen to la: ";
    while(i<=n) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
        i++;
    }
    return 0;
}