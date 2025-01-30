#include<iostream>
#define MAX 100
using namespace std;
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap mang a["<< i <<"]: ";
		cin >> a[i];
	}
}
void sap_xep(int a[], int n){
	int max;
	for(int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void xuat_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int main(){
	int n;
	int a[MAX];
	do{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
	}while(n <= 0 || n > MAX);
	cout << "\t====NHAP MANG====\n";
	nhap_mang(a, n);
	sap_xep(a, n);
	cout << "Ham da sap xep: "; //da fix
	xuat_mang(a, n);
	return 0;
}
