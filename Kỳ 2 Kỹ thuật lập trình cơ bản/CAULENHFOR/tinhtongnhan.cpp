/*
Viết chương trình tính tổng
S = 2 + 4 + 6 + … + 2n
  = 2.1 + 2.2 + … + 2.n
*/
 
#include<iostream>

using namespace std;

int main()
{
    int n;
    int S = 0;
    cout << "Nhap n : ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        S = S + (i * 2) ;
        cout << "2 + 4 + 6 + ... + 2n = "<< S << endl;
    return 0;
}