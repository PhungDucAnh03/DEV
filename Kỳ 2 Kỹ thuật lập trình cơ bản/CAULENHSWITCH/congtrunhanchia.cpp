/*
Viết chương trình nhập vào 2 số x, y và 1 trong 4
toán tử +,-,*,/ Nếu là + thì in ra kết quả x + y, nếu là – thì in
ra x – y, nếu là * thì in ra x * y, nếu là / thì in ra x / y 
(nếu y = 0 thì thông báo không chia được)
*/

#include<iostream>

using namespace std;

int main()
{
    int x, y ;
    char luachon ;
    cout << "nhap so x :";
    cin >> x;
    cout << "nhap so y :";
    cin >> y;
    cout << "===============" << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cout << "Nhap lua chon de tinh : ";
    cin >> luachon;
    switch(luachon)
    {
        case '1':
        cout << "x + y = " << x+y << endl;
        break;
        case '2':
        cout << "x - y = " << x-y << endl;
        break;
        case '3':
        cout << "x * y = " << x*y << endl;
        break;
        case '4':
        if (y == 0)
        {
            cout << "khong chia duoc ban a";
        }
        else
        {
            cout << "x / y = " << (float)x/y << endl;
        }
        break;
    }
    return 0;
}