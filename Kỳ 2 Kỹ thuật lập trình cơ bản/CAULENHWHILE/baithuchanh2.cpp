/*
Viết chương trình nhập vào một ký tự cho đến khi dấu * được nhập
vào và thực hiện các công việc sau:
a) Đếm số ký tự đã nhập không kể dấu *
b) Trong đó có bao nhiêu ký tự ‘k'
*/

#include <iostream>

using namespace std;

int main()
{
    char ky_tu;
    int n = 0 , k = 0;
    do
    {
        cout << "nhap vao 1 ky tu : ";
        cin >> ky_tu;
        if(ky_tu != '*')
        {
            n++;
        }
        if(ky_tu == 'k')
        {
            k++;
        }
    } while (ky_tu != '*');
    cout << "So ky tu da nhap la : " << n << endl;
    cout << "So ky tu K la : " << k << endl;
    return 0;
}