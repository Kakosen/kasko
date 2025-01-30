#include<iostream>
using namespace std;
int main(){
	int tong,n;
	cout << "Nhap n: ";
	cin >> n;
	tong = 0;
	for(int i = 1; i <= n; i++){
		tong = tong + i*(i+1);
	}
	cout << tong;
	return 0;
}
