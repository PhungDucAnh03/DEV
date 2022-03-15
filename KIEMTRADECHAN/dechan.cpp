/*
Một cặp số nguyên dương được gọi là bạn bè nếu tổng các ước số
của số này bằng chính số kia và ngược lại. Hãy viết chương trình kiểm
tra xem 2 số nguyên dương nhập vào từ bàn phím có phải là bạn bè
không?
Ví dụ: 220 và 284 là cặp số bạn bè vì:
Tổng các ước của 220 là 1+2+4+5+10+11+20+22+44+55+110=284
Tổng các ước của 284 là 1+2+4+71+142=220
*/
#include<iostream>

using namespace std;

int main()
{
    cout << "KIEM TRA BAN BE " << endl;
    int A, B;
    cout << "Nhap so A : "; 
    cin >> A;
    cout << "Nhap so B : "; 
    cin >> B;
    long Tong_Uoc_A = 0;
    cout << "Tat ca cac uoc cua so " << A << " la : ";
    for (int i = 1; i < A; i++ ) 
    {
        if(A % i == 0) 
        {
            cout << i << " ";
            Tong_Uoc_A = Tong_Uoc_A + i;
        }
    }
    cout << endl;
    cout << "Tong cua tat ca cac uoc so " << A << " la : " << Tong_Uoc_A << endl;
    long Tong_Uoc_B = 0;
    cout << "Tat ca cac uoc cua so " << B << " la : ";
    for( int i = 1; i < B; i++ ) 
    {
        if ( B % i == 0 ) 
        {
            cout << i << " ";
            Tong_Uoc_B = Tong_Uoc_B + i;
        }
    }
    cout << endl;
    cout << "Tong cua tat ca cac uoc so " << B << " la : " << Tong_Uoc_B << endl;
    if ( Tong_Uoc_A == B && Tong_Uoc_B == A )
    {
        cout << "------------------------------------------------" << endl;
        cout << "Vi vay " << A << " va " << B << " la 2 so ban be ";
    }
    else
    {
        cout << "----------------------------------------------------" << endl;
        cout << "Vi vay " << A << " va " << B << " khong phai ban be ";
    }
    return 0;
}