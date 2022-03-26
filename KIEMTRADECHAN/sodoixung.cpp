/*
Viết chương trình nhập vào một số nguyên dương 
kiểm tra n có phải số đối xứng không ?
*/
#include<iostream>

using namespace std;

int main()
{
    int n, temp ;
    int so_dao_nguoc = 0;
    cout << "Nhap vao so n : " ;
    cin >> n;
    temp = n;
    while( temp > 0)
    {
        so_dao_nguoc = so_dao_nguoc * 10 + ( temp % 10 );
        temp /= 10;
    }
    if(so_dao_nguoc == n)
    {
        cout << "So " << n << " la so dao nguoc ";
    }
    else
    {
        cout << "So " << n << " khong phai so dao nguoc ";
    }
    return 0;
}