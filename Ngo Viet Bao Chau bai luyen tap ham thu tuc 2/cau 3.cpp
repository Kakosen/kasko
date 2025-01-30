#include<iostream>
using namespace std;
void doi_cho(int x, int y){
	int tam = y;
	y = x;
	cout << "x sau khi doi cho la: " << tam << endl;
	cout << "y sau khi doi cho la: " << y ;
}
int main(){
	int x,y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	doi_cho(x,y);
}
