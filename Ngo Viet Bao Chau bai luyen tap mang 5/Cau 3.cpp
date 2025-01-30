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
void min(int a[], int n){
	int min=1e9;
	int check;
	for(int i = 0; i < n; i++){
		if(min > a[i]){
			min=a[i];
			check=i;
		}
	}cout << check;
}
int main(){
	int n;
	int a[max];
	do{
		cout << "Nhap so luong phan tu: " << endl;
		cin >> n;
	}while(n <= 0 || n > max);
	cout << "-NHAP-" << endl;
	nhap(a, n);
	cout << "\t\n-XUAT-" << endl;
	xuat(a, n);
	cout << "PHAN TU BE NHAT TRONG MANG LA: " << endl;
	min(a, n);
}
