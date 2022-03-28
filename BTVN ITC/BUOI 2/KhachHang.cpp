/*
Câu 1: Xây dựng lớp khách hàng KH gồm các thuộc tính họ tên ht (kiểu char[30]), 
ngày sinh ns (kiểu struct NS(ngày, tháng, năm)), số chứng minh thư cmt (kiểu char[10]), 
hộ khẩu k (kiểu char[50]) là các thuộc tính riêng. Trong lớp có định nghĩa các hàm 
công cộng sau:
-	Hàm nhập dữ liệu cho các thông tin trên của 1 khách hàng
-	Hàm xuất các thông tin trên của khách hàng ra màn hình
Viết chương trình nhập vào n(n nguyên dương nhập từ bàn phím) khách hàng. In ra màn hình:
-	Danh sách khách hàng theo thứ tự tăng dần của họ tên.
-	Danh sách các khách hàng có sinh nhật tháng 12.
*/

#include<iostream>
#include<cstring>

using namespace std;

struct Ngay_Sinh
{
    int Ngay;
    int Thang;
    int Nam;
};

class Khach_Hang
{
    private:
        char Ho_Ten[30];
        char So_CMT[10];
        char Ho_Khau[50];
        Ngay_Sinh ns;
    public: 
        void Nhap()
        {
            fflush(stdin);
            cout << "Nhap Ho Ten : ";
            cin.getline(Ho_Ten, 30);
            cout << "Nhap Ngay Sinh : ";
            cin >> ns.Ngay;
            cout << "Nhap Thang Sinh : ";
            cin >> ns.Thang;
            cout << "Nhap Nam Sinh : ";
            cin >> ns.Nam;
            fflush(stdin);
            cout << "Nhap So CMT : ";
            cin.getline(So_CMT, 10);
            cout << "Nhap Ho Khau : ";
            cin.getline(Ho_Khau, 50);
            fflush(stdin);
        }   

        void Xuat()
        {
            cout << "Ho Ten : "<< Ho_Ten << endl;
            cout << "Ngay Sinh : " << ns.Ngay << "/" << ns.Thang << "/" << ns.Nam << endl;
            cout << "So CMT : " << So_CMT << endl;
            cout << "Ho Khau : " << Ho_Khau << endl;                                          
        }
        
        char * getHo_Ten()
        {
            return Ho_Ten;
        }

        void Sinh_Nhat_T12()
        {
            if(ns.Thang == 12)
            {
                cout << "Ho Ten : "<< Ho_Ten << endl;
                cout << "Ngay Sinh : " << ns.Ngay << "/" << ns.Thang << "/" << ns.Nam << endl;
                cout << "So CMT : " << So_CMT << endl;
                cout << "Ho Khau : " << Ho_Khau << endl;
            }
        }
};

int main()
{
    int KH;
    cout << "Nhap so Khach Hang : ";
    cin >> KH; 
    Khach_Hang arr[1000];
    //Nhap
    for(int i = 0; i < KH; i++)
	{
		cout << "Khach Hang Thu "<< i+1 << endl;
		arr[i].Nhap();
        fflush(stdin);
	}
    //Xuat
    for(int i = 0; i < KH; i++)
	{
        cout << "==========================="<< endl;
        cout << "Khach Hang Thu "<< i+1 << endl;
        arr[i].Xuat();
    }
    //Khach Hang Sinh Thang 12
    cout << "============================="<< endl;
    cout << "Khach Hang Sinh Thang 12 : " << endl;
    for(int i = 0; i < KH; i++)
    {
        arr[i].Sinh_Nhat_T12();
    }

    cout << "============================="<< endl;
    cout << "Sap xep ten Khach Hang tang dan : " << endl;
    for(int i = 0; i < KH; i++)
    {
	    for(int j = i+1; j < KH; j++)
         {
	        if(strcmpi(arr[i].getHo_Ten(), arr[j].getHo_Ten()) > 0)
            {
		        Khach_Hang tg = arr[i];
		        arr[i] = arr[j];
		        arr[j] = tg;	
	        }
	    }
	    arr[i].Xuat();
	}
  
    return 0;
}