/*
Viết chương trình nhập vào một số thực cho đến khi số 0 được
nhập vào và thực hiện các công việc sau:
a) Đếm số phần tử đã nhập không kể số 0
b) Tính trung bình cộng các phần tử đã nhập
c) Trong đó có bao nhiêu phần tử âm
*/
#include<iostream>

using namespace std;

int main()
{
    float dem = 0;
    float so_thuc;
    float dem_am = 0;
    float TBC = 0;
    do
    {
        cout << "nhap vao mot so thuc : ";
        cin >> so_thuc;
        if (so_thuc != 0)
        {
            dem++;
            TBC = TBC + so_thuc; 
        }
        if (so_thuc < 0)
        {
            dem_am++;
        }
    } while(so_thuc != 0);
    cout << "So so thuc da nhap la : " << dem << endl;
    cout << "Trung binh cong cac phan tu da nhap la : " << TBC/dem << endl;
    cout << "So cac phan tu am la : " << dem_am << endl;
    return 0;
}