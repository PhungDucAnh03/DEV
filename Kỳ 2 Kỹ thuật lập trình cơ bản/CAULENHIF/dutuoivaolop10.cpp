/*
Viết chương trình nhập tuổi và in ra kết quả nếu tuổi
học sinh đó không đủ điều kiện vào học lớp 10. Biết tuổi
vào lớp 10 của học sinh là 16.
*/
#include<iostream>

using namespace std;

int main()
{
    int tuoi;
    cout << "Nhap tuoi cua hs : ";
    cin >> tuoi;
    if (tuoi < 16)
    {
        cout << "Hoc sinh khong du tuoi de vao lop 10" << endl;
    }
    else
    {
        cout << "Hoc sinh du tuoi de vao lop 10" << endl;
    }
    return 0;
}