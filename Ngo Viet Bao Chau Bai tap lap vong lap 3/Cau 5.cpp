#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
    cout << "Nhap n: ";
    cin >> n;
    if(n < 2){
    	cout << n << " khong phai la so nguyen to";
	}
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			dem++;
		}
	}
	if(dem == 0){
		cout << n << " la so nguyen to";
	}else{
		cout << n << " khong phai la so nguyen to";
	}
}
