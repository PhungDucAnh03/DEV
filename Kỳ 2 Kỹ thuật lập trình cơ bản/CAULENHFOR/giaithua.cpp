/*
Viết chương trình tính giai thừa n 
(n nguyên dương nhập vào từ bàn phím).
        P = 1*2*3 * … * n = n
*/

#include<iostream>

using namespace std;
int main()
{
    int n;
    int P = 1;
    cout << "Nhap n : ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        P = P * i;
        cout << "1 * 2 * 3 *...* n = " << P << endl;
    return 0;
}