/*
Câu 2: Xây dựng lớp giáo viên GV gồm các thuộc tính họ tên ht (kiểu char[30]), 
tuổi t (kiểu số nguyên), 
bằng cấp cao nhất được đào tạo bc (kiểu char[15])
, chuyên ngành (kiểu char[20]), 
bậc lương bl (kiểu float) là các thuộc tính riêng. 
Trong lớp có định nghĩa các hàm công cộng sau:
-	Hàm nhập dữ liệu cho các thông tin trên của 1 giáo viên
-	Hàm xuất các thông tin trên của giáo  viên ra màn hình
-	Hàm tính tiền lương cơ bản lcb biết rằng lcb = bl *610
Viết chương trình nhập vào n(n nguyên dương nhập từ bàn phím) giáo viên. In ra màn hình:
-	Danh sách các giáo viên có tiền lương nhỏ hơn 2000.
-	Danh sách giáo viên sắp xếp theo chuyên ngành.
*/

#include<iostream>
#include<cstring>

using namespace std;


class Giao_Vien
{
    private:
        char Ho_Ten[30];
        int Tuoi;
        char Bang_Cap[15];
        char Chuyen_Nganh[20];
        float Bac_Luong;
        int Luong_Cb = 0;
    public: 
        void Nhap()
        {
            fflush(stdin);
            cout << "Nhap Ho Ten : ";
            cin.getline(Ho_Ten, 30);
            cout << "Nhap So Tuoi : ";
            cin >> Tuoi;
            fflush(stdin);
            cout << "Nhap Bang Cap : ";
            cin.getline(Bang_Cap, 15);
            cout << "Nhap Chuyen Nganh : ";
            cin.getline(Chuyen_Nganh, 50);
            fflush(stdin);
            cout << "Nhap Bac Luong : ";
            cin >> Bac_Luong;
        }   

        void Xuat()
        {
            cout << "Ho Ten : " << Ho_Ten << endl;
            cout << "So Tuoi : " << Tuoi << endl;
            cout << "Bang Cap : " << Bang_Cap << endl;
            cout << "Chuyen Nganh : " << Chuyen_Nganh << endl;
            cout << "Bac Luong : " << Bac_Luong << endl;                                         
        }

        void Tien_Luong()
        {
            Luong_Cb = Bac_Luong * 610;
            cout << "Ho Ten : " << Ho_Ten << endl;
            cout << "So Tuoi : " << Tuoi << endl;
            cout << "Bang Cap : " << Bang_Cap << endl;
            cout << "Chuyen Nganh : " << Chuyen_Nganh << endl;
            cout << "Bac Luong : " << Bac_Luong << endl;
            cout << "Luong CB : " << Luong_Cb << endl;
        }

        void Luong_Nho()
        {
            if(Luong_Cb < 2000)
            {
                cout << "Ho Ten : " << Ho_Ten << endl;
                cout << "So Tuoi : " << Tuoi << endl;
                cout << "Bang Cap : " << Bang_Cap << endl;
                cout << "Chuyen Nganh : " << Chuyen_Nganh << endl;
                cout << "Bac Luong : " << Bac_Luong << endl;
                cout << "Luong CB : " << Luong_Cb << endl;
            }
        }

        char * getChuyen_Nganh()
        {
            return Chuyen_Nganh;
        }
};        


int main()
{
    int GV;
    cout << "Nhap so Giao Vien : ";
    cin >> GV; 
    Giao_Vien arr[1000];
    //Nhap
    for(int i = 0; i < GV; i++)
	{
        cout << "\n" << endl;
		cout << "Giao Vien Thu "<< i+1 << endl;
		arr[i].Nhap();
        fflush(stdin);
	}
    //Xuat
    for(int i = 0; i < GV; i++)
	{
        cout << "\n" << endl;
        cout << "==========================="<< endl;
        cout << "Giao Vien Thu "<< i+1 << endl;
        arr[i].Xuat();
    }

    cout << "==========================="<< endl;
    cout << "LUONG CO BAN CUA GIAO VIEN" << endl;
    for(int i = 0; i < GV; i++)
    {
        cout << "\n" << endl;
        cout << "Giao Vien Thu "<< i+1 << endl;
        arr[i].Tien_Luong();
    }

    cout << "============================="<< endl;
    cout << "GIAO VIEN CO LUONG NHO HON 2000" << endl;
    for(int i = 0; i < GV; i++)
    {
        arr[i].Luong_Nho();
    }

    cout << "============================="<< endl;
    cout << "SAP XEP GIAO VIEN THEO CHUYEN NGANH " << endl;
    for(int i = 0; i < GV; i++)
    {
	    for(int j = i+1; j < GV; j++)
         {
	        if(strcmpi(arr[i].getChuyen_Nganh(), arr[j].getChuyen_Nganh()) > 0)
            {
		        Giao_Vien tg = arr[i];
		        arr[i] = arr[j];
		        arr[j] = tg;	
	        }
	    }
	    arr[i].Xuat();
	}
    return 0;
}