// Giải bất phương trình ax + b < c
#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap a,b,c"<<endl;
    cout << "a = " ;cin >> a;
    cout << "b = " ;cin >> b;
    cout << "c = " ;cin >> c;
    if (a == 0)
    {
        if(b < c)
        {
            cout << "BPT vo so nghiem";
        }
        else
        {
            cout << "BPT vo nghiem";
        }
    }
    else
    {
        if (a > 0)
        {
            cout << "BPT co nghiem x < " << (float) (c-b)/a << endl;
        }
        else
        {
            cout << "BPT co nghiem x > " << (float) (c-b)/a << endl;
        }
    }
    
}
