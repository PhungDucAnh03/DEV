/*
Viết chương trình in ra màn hình bảng nhân của một
số n nhập từ bàn phím.
Ví dụ: với n = 6 thì in ra bảng nhân 6.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;
    cout << "\t"<<"BANG NHAN " << n << endl; 
    for(int i = 1; i <= 10 ; i++)
    cout << "\t" << n << "x" << i << "= " << n * i << endl;
    return 0;
}