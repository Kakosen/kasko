#include<iostream>
#include<cmath>
using namespace std;
float hinhtron(float r){
	cout << "Duong kinh hinh tron la: " << r * r << endl;
	cout << "Chu vi hinh tron la: " << r * 2 * 3.14 << endl;
	cout << "Dien tich hinh tron la: " << r * r * 3.14 << endl;
}
int main(){
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	cout << hinhtron(r);
	return 0;
}
