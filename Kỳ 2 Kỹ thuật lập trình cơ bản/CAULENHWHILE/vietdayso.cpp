/*
Viết chương trình sinh dãy số theo dạng sau:
1
12
123
1234
12345
123456
…
123456...n
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;
    int i = 1;
    while (i<=n)
    { 
        int j = 1;
        while (j <= i)
            { 
                cout << j << "";
                j++; 
            }
        cout << "\n";
        i++; 
    }
    return 0;
}