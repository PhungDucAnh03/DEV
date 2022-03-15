/*
Viết chương trình hiển thị một menu có các lựa chọn để tính diện
tích các hình vuông, hình chữ nhật, hình thang, hình bình hành và
thực hiện công việc tương ứng. In kết quả ra màn hình
*/

#include<iostream>

using namespace std;

int main()
{
    char lua_chon;
    cout <<"MENU tinh dien tich" << endl;
    cout <<"1.Tinh dien tich hinh vuong " <<endl;
    cout <<"2.Tinh dien tich hinh chu nhat " << endl;
    cout <<"3.Tinh dien tich hinh thang " << endl;
    cout <<"4.Tinh dien tich hinh binh hanh" << endl;
    cout <<"Nhap lua chon :" ;
    cin >> lua_chon;
    switch(lua_chon)
    {
        case '1':
        int canh;
        cout << "Nhap canh hinh vuong :";
        cin >> canh;
        cout << "Dien tich hinh vuong = " << canh*canh << endl;
        break;
        case '2':
        int chieu_dai , chieu_rong;
        cout << "Nhap chieu dai va chieu rong hinh chu nhat:";
        cin >> chieu_dai >> chieu_rong;
        cout << "Dien tich hinh chu nhat = " << chieu_dai * chieu_rong << endl;
        break;
        case '3':
        int canh_day_be , canh_day_lon , chieu_cao;
        cout << "Nhap canh day be , canh day lon , chieu cao cua hinh thang :";
        cin >> canh_day_be >> canh_day_lon >> chieu_cao ;
        cout << "Dien tich hinh thang = " << (float)(canh_day_be + canh_day_lon) * chieu_cao/2<< endl;
        break;  
        case '4':
        int canh_day , h;
        cout << "Nhap canh day va chieu cao :";
        cin >> canh_day >> h ; 
        cout << "dien tich hinh binh hanh = "<< h * canh_day << endl;
        break;
    }
    return 0;
}