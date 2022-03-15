/*
1. Viết chương trình cho phép nhập vào thứ (1->7) trong tuần,
nếu thứ không hợp lệ thì cho nhập lại. 
Sau đó cho biết thứ đã nhập có tên là gì và 
xuất kết quả ra màn hình. (1: Sunday, 2: Monday, …)
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhap vao thu(2->8): ";
        cin >> n;
        if (2 > n || n > 8)
        {
            cout << "Nhap sai vui long nhap lai !!\n";
        }
    } while (2 > n || n > 8);
            if(n == 2)
            {
                cout << "THU 2 ";
            }
            if (n == 3)
            {
                cout << "THU 3 ";
            }
            if (n == 4)
            {
                cout << "THU 4 ";
            }
            if (n == 5)
            {
                cout << "THU 5 ";
            }
            if (n == 6)
            {
                cout << "THU 6 ";
            }
            if (n == 7)
            {
                cout << "THU 7 ";
            }
            if (n == 8)
            {
                cout << "CHU NHAT ";
            }
    return 0;
}