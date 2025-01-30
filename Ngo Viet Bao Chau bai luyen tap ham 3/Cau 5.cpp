#include<iostream>
#include<cmath>
using namespace std;
bool kiemtrasont(int n){
	if(n < 2){
		return false;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int a, b;
		cout << "Nhap a va b (a < b va a > 0): ";
		cin >> a >> b;
	if(a > 0 && b > 0){
		for(int i = a; i <= b; i ++){
			if(kiemtrasont(i)){
				cout << i << " ";
			}
		}
	}else{
		cout << "Nhap a va b la so duong";
	}
	return 0;
}
