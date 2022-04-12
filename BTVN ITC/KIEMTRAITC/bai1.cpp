#include<iostream>

using namespace std;

class PTGT
{
	private:
		char Ma_PT[10];
		char Hang_SX[30];
		int Ngay_XX;
		int Gia_ChuaThue;
	public:
		void Nhap()
		{
			fflush(stdin);
			cout << "Nhap ma phuong tien: ";
            cin.getline(Ma_PT,10);
			cout << "Nhap hang san xuat: "; 
            cin.getline(Hang_SX,30);
			fflush(stdin);
			cout << "Nhap ngay san xuat: ";
            cin >> Ngay_XX;
			cout << "Nhap gia chua thue: ";
            cin >> Gia_ChuaThue;
		}
		void Xuat()
		{
			cout<< "Ma: " << Ma_PT << endl
				<< "Hang san xuat: " << Hang_SX << endl
				<< "Ngay xuat xuong: " << Ngay_XX << endl
				<< "Gia chua thue: " << Gia_ChuaThue <<endl;
		}
};

int main()
{
	int n;
	cout << "\nNhap so PTGT: ";
    cin >> n;
	PTGT a[n];
	for(int i=0 ; i<n ; i++)
	{
		cout << "Nhap thong tin phuong tien " << i+1 << " :" << endl;
		a[i].Nhap();
	}
		for(int i=0;i<n;i++)
	{
		cout<<"\nXuat thong tin phuong tien " << i+1 << " :" << endl;
		a[i].Xuat();
	}
	return 0;
}
