#include<iostream>
#include<cmath>
using namespace std;
int tinh(int m, int y){
	if(m == 4 || m == 6 || m == 9 || m == 11){
		cout << "Thang co 30 ngay ";
	}
	else if(m == 2){
		if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
			cout << "Thang co 29 ngay vi nam nay nhuan";
		}else{
			cout << "Thang co 28 ngay vi nam nay khong nhuan";
		}
	}
	else{
		cout << "Thang co 31 ngay";
	}
}

int main(){
	int m,y;
	cout << "Nhap thang:";
	cin >> m;
	cout << "Nhap nam: ";
	cin >> y;
	tinh(m,y);
}
