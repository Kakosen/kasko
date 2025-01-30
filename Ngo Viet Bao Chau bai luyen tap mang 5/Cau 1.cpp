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
}
