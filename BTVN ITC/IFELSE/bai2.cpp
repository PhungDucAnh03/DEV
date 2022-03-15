/*
Viết chương trình cho phép nhập số KW điện tiêu thụ từ bàn phím. 
Sau đó tính tiền điện và xuất kết quả ra màn hình. 
Nếu số KW: 0 -> 100: đơn giá 2000 đồng/KW.
Nếu số KW: 101 -> 200: đơn giá 2500 đồng/KW. 
Nếu số KW: 201 -> 300: đơn giá 3000 đồng/KW. 
Nếu số KW: > 300: đơn giá 5000 đồng/KW.
*/

#include <iostream>

using namespace std;

int main()
{
    int KW;
    do
    {
    cout << "Nhap so KW dien tieu thu = ";
    cin >> KW;
    if (KW < 0)
    {
        cout << "Vui long nhap lai !!\n";
    }
    } while (KW < 0);
    if (KW < 100)
    {
        int don_gia = 2000;
        cout << "Tien Dien la : " << don_gia * KW << endl;
    }
    if (KW > 101 && KW < 200)
    {
        int don_gia = 2500;
        cout << "Tien Dien la : " << don_gia * KW << endl;
    }
    if (KW > 201 && KW < 300)
    {
        int don_gia = 3000;
        cout << "Tien Dien la : " << don_gia * KW << endl;
    }
    else
    {
        int don_gia = 5000;
        cout << "Tien Dien la : " << don_gia * KW << endl;
    }
    return 0;
}