/*
Viết chương trình giải phương trình bậc nhất ax + b = 0
*/
#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cout <<"Nhap a va b : ";
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh vo so nghiem" << endl;
        }
        else
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
    else
    {
        cout << "Phuong trinh co nghiem :" << (float) -b/a << endl;
    }
    return 0;
}