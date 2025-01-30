#include<iostream>
#define max 100
using namespace std;
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap phan tu mang a["<< i <<"]: ";
		cin >> a[i];
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int perfect(int n){
	int tong = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
		tong = tong + i;
		}
	}
		if(tong == n){
		return 1;
		}else{
		return 0;
		}
	}
void perfection(int a[], int n){
	int check=0;
	for(int i = 0; i < n; i++){
		if(perfect(a[i]) == 1){
			check = a[i];
			break;
		}
	}
		if(check != 0){
		cout << check;
		}else{
			cout << "not found";
		}
	}
int main(){
	int n;
	int a[max];
	do{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
	}while (n <= 0 || n > max);
	cout << "-NHAP MANG-" << endl;
	nhap(a, n);
	cout << "\t\n-XUAT MANG-" << endl;
	xuat(a, n);
	cout << "\t\n-SO HOAN THIEN DAU TIEN CO TRONG MANG LA: ";
	perfection(a, n);
}
