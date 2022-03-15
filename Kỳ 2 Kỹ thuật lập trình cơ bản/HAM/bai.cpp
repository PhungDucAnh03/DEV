/*
Viết hàm tìm số lớn nhất trong 2 số. 
Áp dụng tìm số lớn nhất trong 4 số nhập vào từ bàn phím.
*/
#include <iostream>

using namespace std;

void Max()
{
    int a,b,c,d, Max;
    cout << "Nhap vao 4 so : ";
    cin >> a >> b >> c >> d ;
    Max = a;
    if (b > Max)
    {
        Max = b;
    }
    if (c > Max)
    {
        Max = c;
    }
    if (d > Max)
    {
        Max = d;
    }
    cout << "So lon nhat trong 4 so " << a << " " << b << " " << c << " " << d << " la : " << Max << endl; 
}

int main()
{
    Max();
    return 0;
}