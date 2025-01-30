#include<iostream>
#define max 100
using namespace std;
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
	cout << "Nhap vao mang phan tu a["<<i<<"]: ";
	cin >> a[i];
	}
}
void xuat_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " " << endl;
	}
}
void chen(int a[], int n, int k, int x){
	for(int i = n - 1; i >= k; i--){
		a[i + 1] = a[i];
	}a[k] = x;
	++n;
	cout << "Mang sau khi chen: ";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int main(){
	int n, k, x;
	int a[max];
	do{
		cout << "Nhap so luong phan tu: " << endl;
		cin >> n;
		cout << "Nhap chu so va vi tri can thay the: " << endl;
		cin >> x >> k;
	}while(n <= 0 || n > max);
	cout << "-Nhap mang-" << endl;
	nhap(a, n);
	cout << "-Xuat mang-" << endl;
	xuat_mang(a, n);
	cout << "-Mang sau khi chen-" << endl;
	chen(a, n, k, x);
}
