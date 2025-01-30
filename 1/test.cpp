//#include<iostream>
//using namespace std;
//int main(){
//	string name;
//	//cin.ignore();
//	fflush(stdin);
//	cout << "Nhap ten: ";
//	getline(cin, name);
//	cout << name;
//	return 0;
//
#include<iostream>
using namespace std;
//STRUCT
typedef struct sinhvien SINHVIEN;
struct sinhvien{
	//thuoc tinh
	string mssv;
	string ten;
	int namsinh;
	//phuong thuc
	void An(){
		cout << "Sinh vien an C" << endl;
	}
};

void Nhap(SINHVIEN &sv){
	fflush(stdin);
	cout << "Nhap mssv: ";
	getline(cin, sv.mssv);
	fflush(stdin);
	cout << "Nhap ten: ";
	getline(cin, sv.ten);
	cout << "Nhap nam sinh: ";
	cin >> sv.namsinh;
}
void xuat(SINHVIEN sv){
	cout << sv.mssv << " - " << sv.ten << " - " << sv.namsinh << endl;
}

int main(){
	SINHVIEN sv1;
	SINHVIEN sv2;
	Nhap(sv1);
	//Nhap(sv2);
//	sv.mssv = "123";
//	sv.ten = "Ngo Viet Bao Chau";
//	sv.namsinh = 2005; 	
	xuat(sv1);
	//sv1.An();
	return 0;
}
