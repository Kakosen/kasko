#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tong;
	tong = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0)
		tong = tong + i;
	}
	if(tong == n){
		cout << n << " la so hoan hao";
	}else{
		cout << n << " khong phai la so hoan hao";
	}
	return 0;
}
