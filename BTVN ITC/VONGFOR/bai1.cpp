/*
1. Viết chương trình tính tính tích P=2*4*6*...*2n.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    long P = 1;
    cout << "Nhap n : ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        P = P * (2*i);
    }
    cout << "Tich P = " << P << endl;
    return 0;
}