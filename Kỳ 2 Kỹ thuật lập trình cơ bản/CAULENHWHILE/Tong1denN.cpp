/*
Viết chương trình tính tổng các số nguyên từ 1 đến n.
S = 1 + 2 + 3 + … + n
*/
#include <iostream>

using namespace std;

int main()
{
    int i ,n;
    int S = 0;
    cout << "Nhap n : ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        S = S + i;
        i++;
    }
    cout << "Tong tu 1 den "<< n << " la : " << S << endl; 
    return 0;
}