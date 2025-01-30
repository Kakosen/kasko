#include<iostream>
using namespace std;

int uoc_so(int n){
	long tong;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			tong = tong + i;
		}
	}
	return tong;
}
int main(){
	int n;
	cout << "Nhap n(vui long nhap n > 0): ";
	cin >> n;
	if(n < 0){
		cout << "Vui long nhap lai";
	}
	cout << uoc_so(n);
}
