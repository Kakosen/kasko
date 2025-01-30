#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap so nguyen n: " << endl;
	cin >> n;
	if(n > 0){
		cout << "n la so duong" << endl;
	}else if(n < 0){
		cout << "n la so am" << endl;
	}else{
		cout << "n khong am khong duong" << endl;
	}
	if(n % 2 == 0){
		cout << "n cua ban la so chan" << endl;
	}else if(n % 2 != 0){
		cout << "n cua ban la so le";
	}
	
	return 0;
}
