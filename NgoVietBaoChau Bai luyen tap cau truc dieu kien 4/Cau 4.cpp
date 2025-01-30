#include<iostream>
using namespace std;
int main(){
	int chucnang,c,f,chieudai,chieurong;
	cout << "Vui long chon va nhap 1 trong 3 chuc nang sau: " << endl;
	cout << "1. In ra man hinh dong chu ""Xin chao cac ban""" << endl;
	cout << "2. Chuyen doi nhiet do tu C sang F" << endl;
	cout << "3. Tinh chu vi va dien tich hinh tron" << endl;
	cout << "Nhap vao day: ";
	cin >> chucnang;
	switch(chucnang){
		case 1:{
			cout << "XIN CHAO CAC BAN";
			break;
		}
		case 2:{
			cout << "Vui long nhap nhiet do (don vi C): ";
			cin >> c;
			f = (c*1.8)+32;
			cout << "Nhiet do chuyen doi tu c sang f la: " << f;
			break;
		}
		case 3:{
			cout << "Nhap chieu dai va chieu rong: ";
			cin >> chieudai >> chieurong;
			cout << "Chu vi hinh chu nhat la: " << (chieudai + chieurong) * 2 << endl;
			cout << "Dien tich hinh chu nhat la: " << chieudai * chieurong;
			break;
		}
		default:{
			cout << "Vui long nhap lai";
			break;
		}
	}
}
