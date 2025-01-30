#include<iostream>
using namespace std;

int main(){
	int a,b;
	int chuvi;
	int dientich;
	cout << "Nhap hai gia tri chieu dai va chieu rong: ";
	cin >> a >> b;
	if(a > 0 && b > 0){
		chuvi = (a + b) * 2;
		dientich = a * b;
		cout << "Chu vi hinh chu nhat la: " << chuvi << endl;
		cout << "Dien tich hinh chu nhat la: " << dientich; 
	}else if(a <= 0 || b <= 0){
		cout << "khong the tinh chu vi va dien tich";
	}
	return 0;
}
