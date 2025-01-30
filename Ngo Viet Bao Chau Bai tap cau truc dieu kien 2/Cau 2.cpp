#include<iostream>
using namespace std;
int main(){
	float r;
	float chuvi;
	float dientich;
	cout << "Nhap ban kinh";
	cin >> r;
	if(r > 0){
		chuvi = 2 * 3.14 * r;
		dientich =  3.14 * r * r;
		cout << "chu vi hinh tron la: " << chuvi << endl;
		cout << "dien tich hinh tron la: " << dientich << endl;
	}else if(r <= 0){
		cout << "vui long nhap lai r (luu y: r phai lon hon 0)";
	}
	
	return 0;
}
