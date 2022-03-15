/*
Viết chương trình nhập vào điểm toán, lý, hóa của một học
sinh. Tính điểm trung bình biết điểm toán hệ số 4, lý hệ số 3,
hóa hệ số 2. Và in ra xếp loại của hs đó biết:
- Nếu dtb >= 9 => Xếp loại Xuất sắc
- Nếu 8 <= dtb <9 => Xếp loại Giỏi
- Nếu 6.5 <= dtb <8 => Xếp loại Khá
- Nếu 5 <= dtb <6.5 => Xếp loại Trung bình
- Nếu dtb < 5 => Xếp loại Yếu
*/

#include<iostream>

using namespace std;

int main()
{
    float Diem_Toan, Diem_Ly, Diem_Hoa;
    cout << "Nhap diem Toan Ly Hoa cua HS" << endl;
    cout << "Diem Toan = "; cin >> Diem_Toan;
    cout << "Diem Ly = "; cin >> Diem_Ly;
    cout << "Diem Hoa = "; cin >> Diem_Hoa;
    float Diem_TB = ((Diem_Toan*4) + (Diem_Ly*3) + (Diem_Hoa*2) ) / 9;
    if (Diem_TB >= 9.0)
    {
        cout << "Xep loai Xuat Sac";
    }
    else
    {
        if (Diem_TB >= 8.0)
        {
            cout << "Xep loai Gioi";
        }
        else 
        {
            if (Diem_TB >= 6.5)
            {
                cout << "Xep loai Kha";
            }
            else
            {
                if (Diem_TB >= 5)
                {
                    cout << "Xep loai Trung Binh";
                }
                else
                {
                    cout << "Xep loai Yeu";
                }
            }
  
        }
    }
    
}