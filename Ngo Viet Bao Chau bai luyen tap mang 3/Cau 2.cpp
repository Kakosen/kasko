#include<iostream>
#define max 100
using namespace std;
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap vao phan tu a["<< i <<"]: ";
		cin >> a[i];
	}
}
void xuat_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int vi_tri_x(int a[], int n, int x){
	for(int i = n - 1; i >= 0; i--){
		if(a[i] == x)
			return i;
	}
	return -1;
}
int main(){
	int n;
	int a[max];
	int x;
	int ketqua;
	do{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
	}while(n <= 0 || n > max);
	cout << "\t====NHAP MANG====\n";
    nhap_mang(a, n);
    cout << "\n\t====XUAT MANG====\n";
    xuat_mang(a, n);
    cout << "\n\t====VI TRI CUA X====\n";
	cin >> x;
	ketqua = vi_tri_x(a, n, x);
	cout << ketqua;
}
