#include<iostream>
using namespace std;
int main(){
	int n;
	float tong;
	tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 1; i <= n; i++){
		tong = tong + 1.0/i;
	}
	cout << tong;
	return 0;
}
