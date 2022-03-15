/*
 Viết chương trình để xử lý tình huống khi người dùng
lựa chọn một tùy chọn nào thì chương trình sẽ in một
dòng thông báo về tùy chọn đó.
Ví dụ:
Chọn 1.Talk
In ra: Bạn đã chọn Talk
*/

#include<iostream>

using namespace std;    

int main()
{
    int luachon;
    cout << "===================" << endl;
    cout << " 1. talk" << endl;
    cout << " 2. eat" << endl;
    cout << "Nhap lua chon cua ban : ";
    cin >> luachon;
    switch (luachon)
    {
        case 1: 
        cout << "Ban da chon talk " << endl;
        break;
        case 2:
        cout << "Ban da chon eat" << endl; 
        break;
        default:
        cout << "Ban khong chon !!";
    }
    return 0;
}