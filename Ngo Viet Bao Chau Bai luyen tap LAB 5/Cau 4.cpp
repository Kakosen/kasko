#include<iostream>
using namespace std;

int main(){
	float dongia,soluong,thanhtien,giamgia;
	cout << "Nhap don gia va so luong cua ban: " << endl;
	cin >> dongia >> soluong;
	thanhtien = dongia * soluong;
	if(thanhtien > 100){
		giamgia = thanhtien * 0.03;
	}else{
		giamgia = 0;
	}
	float tongtien = thanhtien - giamgia;
	cout << "so tien can phai tra la: " << tongtien;
}
