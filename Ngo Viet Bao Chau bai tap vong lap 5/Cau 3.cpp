#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout << "Nhap so nguyen duong thu n: ";
	cin >> n;
	if (n < 0){
		cout << "Xin hay nhap lai n" << endl;
	}else{
		if(n == 0){
			cout << "0" << endl;
		}	
		if(n == 1){
			cout << "1" << endl;
		}
		if(n >= 2){
			long long fn, f0 = 0, f1 = 1;
			for(size_t i = 2; i <= n; i++){
				fn = f0 + f1;
				f0 = f1;
				f1 = fn;
			}
			
			cout << fn << endl;
		}
	}
	
	return 0;
}
