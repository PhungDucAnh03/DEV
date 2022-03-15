/*
Viết chương trình tính tổng các số nguyên từ 1 đến n.
Với n nhập vào từ bàn phím
            s = 1 + 2 + 3 +...+ n
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    int S = 0;
    cout << "Nhap n : ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        S = S + i;
        cout << "1 + 2 + 3 + ... + n = " << S << endl;
    return 0;
}