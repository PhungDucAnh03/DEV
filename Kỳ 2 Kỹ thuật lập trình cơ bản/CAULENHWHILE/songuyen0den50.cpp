/*
Viết chương trình nhập vào 1 số nguyên n (0<n<50). Nếu
nhập sai, yêu cầu nhập lại
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhap n(0 < n < 50) : ";
        cin >> n;
        if (n > 0 && n < 50)
        {
            cout << "Ban da nhap dung !" << endl;
            break;
        }
        else
        {
            cout << "ban da nhap sai !! vui long nhap lai 0 < n < 50" << endl;
        }
    } while(0 <= n <= 50);
    return 0;
}