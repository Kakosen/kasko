#include<iostream>
using namespace std;
int main(){
	int n;
	int tong = 0;
	while(n != 0){
		cout << "Nhap n: ";
		cin >> n;
		tong = tong + n;
	}
	cout << tong;
	return 0;
}
