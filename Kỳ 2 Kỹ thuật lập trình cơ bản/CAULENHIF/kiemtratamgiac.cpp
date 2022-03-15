#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap 3 canh a,b,c"<< endl;
    cout << "Canh a = "; cin >> a;
    cout << "Canh b = "; cin >> b;
    cout << "Canh c = "; cin >> c;
    if ((a+b > c) && (b+c > a) && (a+c > b))
    { 
        if ((a==b) && (b==c))
        {
        cout << " Tam giac nay la tam giac deu " <<endl;
        }
        else
        {
            if((a==b)||(a==c)||(b==c))
            {
                cout << "Tam giac nay la tam giac can " << endl;
            }
            else
            {
                if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b))
                {
                    cout <<"Tam giac nay la tam giac vuong" << endl;
                }
                else
                {
                    cout << "Tam giac nay la tam giac thuong" << endl;
                }  
            }
        }
    }
    else
    {
        cout << "Day khong phai la mot tam giac";
    }
    return 0;
}
