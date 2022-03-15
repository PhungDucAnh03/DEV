/*
Viết chương trình nhập vào 3 số a, b, c. In ra menu chọn thực hiện
các công việc sau:
1. Tính tổng a+b+c
2. Tính tích a*b*c
3. Tìm max
4. Tìm min
*/

#include<iostream>

using namespace std;
   
int main()
{
    int a,b,c, max , min;
    char lua_chon;
    cout << "nhap vao 3 so a , b , c :";
    cin >> a >> b >> c ;
    cout << "MENU lua chon ";
    cout << "1. Tinh tong a + b + c" << endl;
    cout << "2. Tinh tich a * b * c" << endl;
    cout << "3. Tim Max" << endl;
    cout << "4. Tim Min" << endl;
    cout << "nhap lua chon cua ban : ";
    cin >> lua_chon;
    switch(lua_chon)
    {
        case '1':
            cout << "tong a + b + c la :" << a + b + c << endl;
            break;
        case '2':
            cout << "tich a * b * c la :" << a * b * c << endl;
            break;
        case '3':
            max = a;
            if (b > max)
            {
                max = b;
            } 
            if (c > max)
            {
                max = c;
            } 
            cout << "Max = "<< max << endl;
            break;
        case '4':
            min = a;
            if (b < min)
            {
                min = b;
            } 
            if (c < min)
            {
                min = c;
            }
            cout << "Min = "<< min << endl;
            break;
        default :
            cout << "may k chon cai nao" ;
            break;
    }
    return 0;
}