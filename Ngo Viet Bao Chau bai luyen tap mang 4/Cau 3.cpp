#include<iostream>
#define max 100
using namespace std;
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
	cout << "Nhap vao mang phan tu a["<< i <<"]: ";
	cin >> a[i];
	}
}
void xuat_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
void xoa(int a[], int n, int k){
	for(int i = k+1; i < n; i++){
		a[i-1] = a[i];
	}
	--n;
	cout << "Mang sau khi xoa la: ";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int main(){
	int i,n,k;
	int a[max];
	do{
		cout << "Nhap so luong phan tu: " << endl;
		cin >> n;
		cout << "Nhap vi tri can xoa:  " << endl;
		cin >> k;
	}while(n <= 0 || n > max);
	cout << "-Nhap mang-" << endl;
	nhap(a, n);
	cout << "-Xuat mang-" << endl;
	xuat_mang(a, n);
	cout << "\t\n-Mang sau khi xoa-" << endl;
	xoa(a, n, k);
}
