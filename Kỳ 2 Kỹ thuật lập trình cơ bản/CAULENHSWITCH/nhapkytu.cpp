/*
Viết chương trình nhập vào một ký tự. Nếu ký tự đó là a, A thì 
in ra “Xin chao!”. Nếu ký tự đó là b, B thì in ra “Hoan nghenh!”. 
Nếu không phải là các ký tự trên thì in ra “Xin loi!”.    
*/

#include <iostream>

using namespace std; 

int main()
{
    char Nhap;
    cout << "Nhap vao mot ky tu :";
    cin >> Nhap;
    switch(Nhap)
    {
    case 'A':
    case 'a':
            cout << "Xin chao!";
        break;
    case 'B':
    case 'b':
            cout << "Hoan nghenh!";
        break;
    default:
            cout << "xin loi!";
        break;
    }
    return 0;
}