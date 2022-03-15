/*
Viết chương trình nhập vào 3 số a, b, c. In ra màn hình số
lớn nhất, nhỏ nhất trong 3 số đó.
*/

#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    int max = a;
    if (b > max)
    {
        max = b;
    } 
    if (c > max)
    {
        max = c;
    }
    cout << "Max = "<< max << endl;
    
    int min = a;
    if (b < min)
    {
        min = b;
    } 
    if (c < min)
    {
        min = c;
    }
      cout << "Min = "<< min << endl;
    return 0;
}