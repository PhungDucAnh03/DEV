#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

struct HangHoa 
{
	string Ma_Hang;
	string Ten_Hang;
	string Don_Vi;
	float Don_Gia;
	int So_Luong;
	float Thanh_Tien;
};

void Nhap_TTMH(HangHoa hh[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin hang hoa thu " << i + 1 << "\n";
		cin.ignore();
		cout << "Nhap MA HH : "; cin >> hh[i].Ma_Hang;
		cout << "Nhap TEN HH : "; cin >> hh[i].Ten_Hang;
		cout << "Nhap DON VI TINH : "; cin >> hh[i].Don_Vi;
		cout << "Nhap DON GIA : "; cin >> hh[i].Don_Gia;
		cout << "Nhap SO LUONG : "; cin >> hh[i].So_Luong;
	}
}

void Thanh_Tien(HangHoa hh[], int n)
{
	for (int i = 0; i < n; i++)
	{
		hh[i].Thanh_Tien = hh[i].So_Luong * hh[i].Don_Gia ;
	}
}

void Tieu_De()
{
	cout << setw(15) << "MA HANG" << setw(4)
		 << setw(18) << "TEN HANG" << setw(6)
		 << setw(17) << "DON VI TINH" << setw(5)
		 << setw(16) << "DON GIA" << setw(5)
		 << setw(15) << "SO LUONG" << setw(2)
		 << setw(15) << "THANH TIEN" << setw(2) << endl;
}

void Xuat_TTMH(HangHoa hh[] ,int n)
{
	Tieu_De();
	for(int i = 0; i < n ;i++)
	{
		cout << setw(15) << hh[i].Ma_Hang << setw(4)
			 << setw(18) << hh[i].Ten_Hang << setw(6)
			 << setw(17) << hh[i].Don_Vi << setw(5)
			 << setw(16) << hh[i].Don_Gia << setw(5)
			 << setw(15) << hh[i].So_Luong << setw(2) 
			 << setw(15) << hh[i].Thanh_Tien << setw(2) << endl;
	}
}

void Sap_Xep_Tang(HangHoa hh[] ,int n)
{
	for(int i = 0; i < n ;i++)
	{
		for(int j = i + 1 ; j < n; j++)
		{
			if(hh[i].So_Luong < hh[j].So_Luong)
			{
				HangHoa temp = hh[i];
						hh[i] = hh[j];
						hh[j] = temp;
			}
		}
	}
}


void Xuat_1_TTMH(HangHoa hh)
{
	cout << setw(15) << "MA HANG" << setw(4)
		 << setw(18) << "TEN HANG" << setw(6)
		 << setw(17) << "DON VI TINH" << setw(5)
		 << setw(16) << "DON GIA" << setw(5)
		 << setw(15) << "SO LUONG" << setw(2)
		 << setw(16) << "THANH TIEN" << setw(5) << endl;
	cout << setw(15) << hh.Ma_Hang << setw(4)
		 << setw(18) << hh.Ten_Hang << setw(6)
		 << setw(17) << hh.Don_Vi << setw(5)
		 << setw(16) << hh.Don_Gia << setw(5)
	  	 << setw(15) << hh.So_Luong << setw(2)
		 << setw(16) << hh.Thanh_Tien << setw(5) << endl;	 
}

void Sap_Xep_Thanh_Tien(HangHoa hh[], int n)
{
	for(int i = 0; i < n ;i++)
	{
		for(int j = i + 1 ; j < n; j++)
		{
			if(hh[i].Thanh_Tien < hh[j].Thanh_Tien)
			{
				HangHoa temp = hh[i];
						hh[i] = hh[j];
						hh[j] = temp;
			}
		}
	}
}

void Thanh_Tien_MAX(HangHoa hh[], int n)
{
	Sap_Xep_Thanh_Tien(hh, n);
	Xuat_1_TTMH(hh[0]);
}

void Them_DS_Mat_Hang (HangHoa hh[], int &n)
{
	cout << "Nhap thong tin hang hoa thu " << n << "\n";
		cin.ignore();
		cout << "Nhap MA HH : "; cin >> hh[n].Ma_Hang;
		cout << "Nhap TEN HH : "; cin >> hh[n].Ten_Hang;
		cout << "Nhap DON VI TINH : "; cin >> hh[n].Don_Vi;
		cout << "Nhap DON GIA : "; cin >> hh[n].Don_Gia;
		cout << "Nhap SO LUONG : "; cin >> hh[n].So_Luong;
	n++;	
}

void Xoa_MH_DVT_dv(HangHoa hh[], int &n, string dv)
{	
	for (int i = 0; i < n; i++)
	{
		if (dv == hh[i].Don_Vi )
		{
			hh[i] = hh[i+1];
			n--;
		}
	}
}

void Ghi_Tep (ofstream &file, HangHoa hh[], int n)
{
	for (int i = 0; i < n; i++)
	{
		file.write((char*)(&hh[i]),sizeof(HangHoa));
	}
}

void In_Tep (ifstream &file, int n)
{
	HangHoa hh[100];
	for (int i=0; i<n; i++)
	{
		file.read((char *)(&hh[i]), sizeof(HangHoa));
		cout << setw(15) << "MA HANG" << setw(4)
		 	 << setw(18) << "TEN HANG" << setw(6)
		 	 << setw(17) << "DON VI TINH" << setw(5)
		 	 << setw(16) << "DON GIA" << setw(5)
		 	 << setw(15) << "SO LUONG" << setw(2)
		 	 << setw(15) << "THANH TIEN" << setw(2) << endl;
		for(int i = 0; i < n ;i++)
		{
		 	cout << setw(15) << hh[i].Ma_Hang << setw(4)
			 	 << setw(18) << hh[i].Ten_Hang << setw(6)
			 	 << setw(17) << hh[i].Don_Vi << setw(5)
			 	 << setw(16) << hh[i].Don_Gia << setw(5)
				 << setw(15) << hh[i].So_Luong << setw(2) 
				 << setw(15) << hh[i].Thanh_Tien << setw(2) << endl;
		}
	}	 
	file.close();
}

void MENU()
{
    cout << "============================ MENU ============================\n";
	cout << "1.Nhap Thong Tin Cac Mat Hang" << endl;
	cout << "2.Tinh Cot Thanh Tien" << endl;
	cout << "3.In Thong Tin Cac Mat Hang" << endl;
	cout << "4.Sap Xep Cac Mat Hang Theo Thu Tu Tang Dan Ve So Luong" << endl;
	cout << "5.In Thong Tin Cac Mat Hang Co Thanh Tien Lon Nhat" << endl;
	cout << "6.Them Vao Danh Sach Mat Hang Co Thong Tin Mat Hang" << endl;
	cout << "7.Xoa Cac Mat Hang Co Don Vi Tinh La dv" << endl;
	cout << "8.Luu Danh Sach Cac Mat Hang Ra Tep product.dat" << endl;
    cout << "9.In Ra Man Hinh Danh Sach Cac Mat Hang Tu Tep product.dat" << endl;
    cout << "0.Thoat" << endl;
	cout << "\n\n";
}

int main()
{
    int n;
	string dv;
	HangHoa hh[1000];
    char Chon;
    int Lua_Chon; 
    do
    {
        MENU();
        cout << "Vui long nhap lua chon : ";
        cin >> Lua_Chon;
        switch (Lua_Chon)
        {
			case 0:
			{
				break;
			}
            case 1:
            {
				do
				{
					cout << "Nhap so luong TTMH la : ";
					cin >> n;
				} while (n < 0);
				system("cls");
                cout << "Nhap Thong Tin Cac Mat Hang" << endl;
                Nhap_TTMH(hh, n);
				system("cls");
                cout << "Ban Da Nhap Thanh Cong Thong Tin Cac Mat Hang" << endl;
                break;
            }
            case 2:
            {
				system("cls");
                cout << "Tinh Cot Thanh Tien" << endl;
                Thanh_Tien(hh, n);
				system("cls");
                cout << "Da Tinh Thanh Tien" << endl;
                break;
            }
            case 3:
            {
				system("cls");
                cout << "In Thong Tin Cac Mat Hang" << endl;
				system("cls");
                Xuat_TTMH(hh, n);
                break;
            }
            case 4:
            {
				system("cls");
                cout << "Sap Xep Cac Mat Hang Theo Thu Tu Tang Dan Ve So Luong" << endl;
                Sap_Xep_Tang(hh, n);
				system("cls");
                Xuat_TTMH(hh, n);
                break;
            }
            case 5:
            {
				system("cls");
                cout << "In Thong Tin Cac Mat Hang Co Thanh Tien Lon Nhat" << endl;
                Thanh_Tien(hh, n);
				system("cls");
                Thanh_Tien_MAX(hh, n);
                break;
            }
			case 6:
			{
				system("cls");
				cout << "Them Vao Danh Sach Mat Hang Co Thong Tin Mat Hang" << endl;
				system("cls");
				Them_DS_Mat_Hang(hh, n);
				break;
			}
			case 7:
			{
				system("cls");
				cout << "Xoa Cac Mat Hang Co Don Vi Tinh La dv"<< endl;
				cout << "Nhap vao dv can xoa : ";
				cin >> dv;
				Xoa_MH_DVT_dv(hh, n, dv);
				system("cls");
				cout << "Da xoa dv : " << dv << endl;
				break;
			}
			case 8:
			{
				system("cls");
				cout << "Luu Danh Sach Cac Mat Hang Ra Tep product.dat" << endl;
				ofstream file ("product.dat", ios::out|ios::binary);
	                if (!file) {
		                cout<<"\nKhong the tao tep tin " << endl;
		                exit(1);
	                }
	                Ghi_Tep(file, hh, n);
	                file.close();
					system("cls");
				cout << "Da luu danh sach ra tep product.dat" << endl;
				
				break;
			}
			case 9:
			{
				system("cls");
				cout << "In Ra Man Hinh Danh Sach Cac Mat Hang Tu Tep product.dat" << endl;
				ifstream file ("product.dat", ios::in|ios::binary);
				    if (!file) {
					    cout << "Tep Khong ton Tai !!!" << endl;
					    exit(1);
				    }
					system("cls");
				    In_Tep(file, n);
					
				break;
			}
		default:
            cout << "Ban nhap sai vui long nhap lai !!" << endl;
            break;
        }
        cout << "Ban co muon tiep tuc lua chon khong ? (y/n) : ";
        cin >> Chon;
        cout << endl;
        if (Chon == 'n')
        {
            cout << "DA THOAT MENU" << endl;
        }
    } while (Chon == 'y');
    return 0;
}