/*
Viết chương trình nhập vào một tháng và một năm. In ra số
ngày của tháng đó.
Chú ý: Tháng 2 của năm nhuận có 29 ngày.
Tháng 1, 3, 5, 7, 8, 10, 12: 31 ngày
Tháng 4, 6, 9, 11: 30 ngày
Tháng 2: năm nhuận 29 ngày , năm không nhuận 28 ngày
*/
#include<iostream>

using namespace std;

int main()
{
    int Thang , Nam ;
    cout << "Nhap Thang : ";
    cin >> Thang;
    cout << "Nhap Nam : ";
    cin >> Nam;
    switch (Thang)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: 
                cout << " 31 ngay"; 
            break;
        case 4:
        case 9: 
        case 11:
                cout << "30 ngay"; 
            break;
        case 2:
            if (Nam%4 == 0 && Nam%100 != 0 || Nam%400 == 0)
            {
                cout << "29 ngay";
            }
            else
            {
                cout << "28 ngay";
            }
            break;
    }
    return 0;
}