/*
Viết chương trình vẽ tam giác sao có chiều cao n.
Ví dụ: n=4
****
***
**
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}