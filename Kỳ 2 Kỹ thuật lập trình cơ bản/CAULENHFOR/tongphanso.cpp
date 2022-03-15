/*
Viết chương trình tính tổng
S = 1 + 1/2 + 1/3 + ... + 1/n
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    float S = 0;
    cout << "Nhap n : ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        S = S + (float) 1/i;
        cout << "1 + 1/2 + 1/3 + ... + 1/n = " << S << endl;
    return 0;
}