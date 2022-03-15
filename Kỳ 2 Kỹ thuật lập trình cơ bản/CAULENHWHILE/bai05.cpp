/*
Viết chương trình nhập vào 1 số thực a (1<a<2). Tìm và
in ra số n nhỏ nhất sao cho:
S = 1 + 1/2 + 1/3 + ... + 1/n > a
Với n tìm được hãy in ra S
*/
#include<iostream>

using namespace std;

int main()
{
    float a;
    do
    {
        cout << "Nhap vao so thuc a (1 < a < 2) : ";
        cin >> a;
        if (a <= 1 || a >= 2)
        {
            cout << "Nhap lai a !!" << endl;
        }
    } while(a <= 1 || a >= 2);
    int i = 1;
    float S = 0;
    do
    {
        S = S + (float) 1/i;
        i++;
    } while (S <= a);
    cout << "So n nho nhat la : "<< i - 1 << endl;
    cout << "Tong S = " << S << endl;
    return 0;
}