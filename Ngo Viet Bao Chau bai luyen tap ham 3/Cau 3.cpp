#include<iostream>
using namespace std;
bool kiemtra(int n){
	int tong = 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0){
			tong = tong + i;
		}
	}
	if(tong == n)
	return true;
	return false;
}
int main(){
	int n;
		cout << "Nhap n: " << endl;
		cin >> n;
		if (kiemtra(n)){
			cout << n << " La so hoan hao";
		}
		else{
			cout << n << " Khong phai so hoan hao";
		}
}
