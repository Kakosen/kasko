#include<iostream>
using namespace std;

int main(){
	int luongnhanvien,thunhapthucsu;
	cout << "nhap luong vao: ";
	cin >> luongnhanvien;
	if(luongnhanvien >= 15000000){
		thunhapthucsu = luongnhanvien*0.3;
		cout << "Luong rong cua ban la: " << thunhapthucsu;
	}else if(luongnhanvien >= 7000000 && luongnhanvien < 15000000){
		thunhapthucsu = luongnhanvien*0.2;
		cout << "Luong rong cua ban la: " << thunhapthucsu;
	}else{
		cout << "Luong rong cua ban la: " << luongnhanvien;
	}
	
	return 0;
}
