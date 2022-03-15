/*
Viết chương trình nhập vào 3 số a, b, c nguyên dương. In ra menu
chọn thực hiện các công việc sau:
1) Giải bpt ax + b > c
2) Giải phương trình ax2 + bx + c = 0
3) Kiểm tra chúng có tạo thành 3 cạnh tam giác hay không? Nếu
có thì đó là tam giác gì (đều/cân/vuông/thường)?
*/

#include<iostream>  
#include<cmath>

using namespace std;

int main()
{
    float a, b, c, delta, x1, x2;;
    char lua_chon;
    cout << "Nhap vao 3 so nguyen duong : ";
    cin >> a >> b >> c;
    cout << "***************************************" << endl;
    cout << "****************MENU*******************" << endl;
    cout << "1.Giai bat phuong trinh ax + b > c " << endl;
    cout << "2.Giai phuong trinh ax2 + bx + c = 0 " << endl;
    cout << "3.Kiem tra tam giac " << endl;
    cout << "Vui long nhap lua chon : ";
    cin >> lua_chon;
    switch(lua_chon)
    {
        case '1':
        {
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
            break;
        }
        case '2':
        {
            if(a == 0) 
            {
                if(b == 0) 
                {
                    if (c == 0) 
                    {
                        cout << "Phuong trinh vo so nghiem" << endl;
                    } 
                    else 
                    {
                        cout << "Phuong trinh vo nghiem" << endl;
                    }
                }
                else 
                {
                    cout << "Phuong trinh co nghiem duy nhat: " << -c/b << endl;
                }
            }
            else
            {
                delta = b*b - 4*a*c;
                if(delta > 0) 
                {
                    x1 = (-b+sqrt(delta))/(2*a);
                    x2 = (-b-sqrt(delta))/(2*a);
                    cout << "Nghiem thu nhat x1 = " << x1 << endl;
                    cout << "Nghiem thu hai x2 = " << x2 << endl;
                } 
                else if ( delta == 0) 
                {
                    cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a << endl;
                } 
                else 
                {
                    cout << "Phuong trinh vo nghiem" << endl;
                } 
            }
            break;
        }    
        case '3':
        {
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
            break;
        }
    }
    return 0;
}