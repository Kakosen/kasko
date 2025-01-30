#include<iostream>
using namespace std;

int main(){
	float diemkiemtra,diemgiuaky,diemcuoiky,diemtrungbinh;
	cout << "Nhap diem kiem tra: " << endl;
	cin >> diemkiemtra;
	cout << "Nhap diem giua ky: " << endl;
	cin >> diemgiuaky;
	cout << "Nhap diem cuoi ky: " << endl;
	cin >> diemcuoiky;
	diemtrungbinh = (diemkiemtra + diemgiuaky + diemcuoiky)/3;
	if(diemtrungbinh >= 9.0){
		cout << "Hang A, xin chuc mung ban da la nguoi thanh cong";
	}else if(diemtrungbinh >= 7.0 && diemtrungbinh < 9.0){
		cout << "Hang B, B for failure";
	}else if(diemtrungbinh >= 5.0 && diemtrungbinh < 7.0){
		cout << "Hang C, C for Cut ra khoi nha";
	}else if(diemtrungbinh < 5.0){
		cout << "Hang F, F for may khong phai con tao";
	}
	
	return 0;
}
