/* 
Xây dựng hàm kiểm tra một số có phải là số hoàn hảo không
(Số hoàn hảo là một số có tổng các ước của nó (không kể
nó) bằng chính nó. Ví dụ: Số 6 là số hoàn hảo vì tổng các
ước 1+2+3=6. Áp dụng tìm ra các số hoàn hảo trong phạm vi
n.
*/

#include <iostream>

using namespace std;

bool KT_so_hoanhao(int n)
{
    int sum = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(n % i == 0)
        sum = sum + i;
    }
    if(sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }  
}

int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;
    cout << "Cac so hoan hao khong vuot qua gia tri n la : " << endl;
    for (int i = 1 ; i <= n ; i++)
    {
        if (KT_so_hoanhao(i) == true)
        {
            cout << i << "\t" ;
        }
    }
    return 0;
}