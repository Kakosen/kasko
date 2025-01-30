#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	do {
		cout << "Nhap n(N>0): ";
		cin >> n;
	} while (n <= 0);
	int i = n, nphay = 0, donvi;
	
	while(i != 0){
		donvi = i % 10;
		nphay = nphay * 10 + donvi;
		i = i / 10;
	}
	if (nphay == n){
		cout << n << " la so doi xung";
	}else{
		cout << n << " khong phai la so doi xung";
	}
	return 0;
}
