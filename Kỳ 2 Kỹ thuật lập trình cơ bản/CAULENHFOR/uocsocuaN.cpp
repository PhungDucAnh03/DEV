/*
Viết chương trình nhập vào 1 số nguyên dương n. In ra màn
hình tất cả các ước số của n.
Ví dụ: Nhập n = 20, thì chương trình in ra:
Các ước số của 20 là:
1 2 4 5 10 20
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;
    cout << "Cac uoc cua so nguyen la : ";
    for(int i = 1 ; i <= n ; i++)
    if (n % i == 0)
    {
        cout << i << "\t";
    }
    return 0;
}