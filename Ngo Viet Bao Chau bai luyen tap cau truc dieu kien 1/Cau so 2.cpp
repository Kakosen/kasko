#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Nhap hai so a va b: ";
	cin >> a;
	cin >> b;
	int tong,hieu,tich,thuong;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	cout << "Tong cua hai so la: " << tong << endl;
	cout << "Tich cua hai so la: " << tich << endl;
	cout << "Hieu cua hai so la: " << hieu << endl;
	if(b == 0){
		cout << "Khong the chia duoc";
	}else if(b != 0){
		float(thuong) = (float)a / b;
		cout << "Thuong cua hai so la " << thuong;
	}
	
	return 0;
}
