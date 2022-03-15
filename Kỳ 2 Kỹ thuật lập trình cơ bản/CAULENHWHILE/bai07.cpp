/*
Viết chương trình nhập vào hai số nguyên dương m, n. Tìm và in ra
UCLN và BCNN của 2 số đó
*/

#include <iostream>

using namespace std;

int main()
{ 
    int m, n, x, y, UCLN;
    cout << "Nhap 2 so nguyen duong m, n: ";
    cin >> m >> n;
    x = m; y = n;
    while ( x != y )
    { 
        if ( x > y )
        { 
            x = x - y;
        }
        else 
        {
            y = y - x;
        }    
    }
    UCLN = x;
    cout<<"\nUoc chung lon nhat la "<<UCLN<<endl;
    cout<<"Boi chung nho nhat la "<<(m*n)/UCLN<<endl;
}
