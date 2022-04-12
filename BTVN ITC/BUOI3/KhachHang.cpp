/*
Câu 1: Xây dựng lớp khách hàng KH gồm các thuộc tính họ tên ht (kiểu char[30]), 
ngày sinh ns (kiểu struct NS(ngày, tháng, năm)), số chứng minh thư cmt (kiểu char[10]), 
hộ khẩu k (kiểu char[50]) là các thuộc tính riêng. Trong lớp có định nghĩa các hàm công cộng sau:
-	Hàm toán tử nhập >> đi với cin để nhập dữ liệu cho các thông tin trên của 1 khách hàng
-	Hàm toán tử xuất << đi với cout để xuất các thông tin trên của khách hàng ra màn hình
-	Hàm toán tử “>” so sánh 2 khách hàng (khách hàng lớn hơn  là khách hàng có tuổi lớn hơn)
Viết chương trình nhập vào n(n nguyên dương nhập từ bàn phím) khách hàng. In ra màn hình:
-	Danh sách các khách hàng có hộ khẩu “Hà Nội”.
-	Danh sách khách hàng đã sắp xếp theo thứ tự giảm dần của tuổi.
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
        int Tuoi;
        Ngay_Sinh ns;
    public:
        friend istream& operator >> (istream& is, Khach_Hang &KH)
            {
                cout << "Nhap ho ten cua khach hang : ";
				is.getline(KH.Ho_Ten , 30);
				cout << "Nhap so CMT : ";
				is.getline(KH.So_CMT , 10);
				cout << "Nhap ho khau : ";
				is.getline(KH.Ho_Khau , 50);
				cout << "Nhap ngay sinh : ";
				is >> KH.ns.Ngay;
				cout << "Nhap thang sinh : ";
				is >> KH.ns.Thang;
				cout << "Nhap nam sinh : ";
				is >> KH.ns.Nam;
                cout << "Tuoi : ";
                is >> (KH.Tuoi);
            }
        friend ostream& operator << (ostream& os, Khach_Hang &KH)
            {
                os << "Ho Ten Khach Hang : " << KH.Ho_Ten << endl; 
				os << "So CMT Khach Hang : " << KH.So_CMT << endl;
				os << "Ho Khau Khach Hang : " << KH.Ho_Khau << endl;
				os << "Ngay Sinh : " << KH.ns.Ngay << endl;
				os << "Thang Sinh : " << KH.ns.Thang << endl;
				os << "Nam Sinh : " << KH.ns.Nam << endl;
				os << "So Tuoi : " << KH.Tuoi << endl;
            }

        char *getHo_Khau()
        {
            return Ho_Khau;
        }

        int getTuoi()
        {
            return Tuoi;
        }
};

int main()
{
    
    int n;
    cout << "Nhap so Khach Hang : ";
    cin >> n; 
    Khach_Hang arr[1000];
    for( int i = 0; i < n; i++)
	{
		cout << "Khach hang thu " << i+1 << endl;
		fflush(stdin) ;
		cin >> arr[i];
	}

    for( int i = 0; i < n; i++)
    {
        fflush(stdin) ;
		cout <<  arr[i];
    }

    cout<<"------------------Danh sach khach hang co ho khau o Ha Noi-----------------"<<endl;
    for( int i = 0; i < n; i++)
    {
		if(strcmp(arr[i].getHo_Khau(),"Ha Noi")==0)
		cout << arr[i];
    }

    cout<<"--------------Danh sach khach hang sap xep giam dan theo tuoi--------------"<<endl;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++)
		{
			if(arr[i].getTuoi() < arr[j].getTuoi())
			{
				Khach_Hang tg;
				tg = arr[i];
				arr[i] = arr[j];
				arr[j] = tg;
			}
		}
		cout<<arr[i];
	}
    return 0;
}


