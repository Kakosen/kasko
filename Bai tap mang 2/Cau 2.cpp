#include<iostream>
#define max 100
using namespace std;
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap vao mang a["<< i <<"]: ";
		cin >> a[i];
	}
}
void Xuat_Phan_Tu_Chan(int a[], int n){
    int tong = 0;
	for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            tong = tong + a[i];
        }
    }
    cout << tong;
}
void Tinh_phan_tu_le(int a[], int n){
	int tong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			tong = tong + a[i];
		}
	}
	cout << tong;
}
int main(){
    int n;
    int a[max];
    do{
        cout << "Nhap so luong phan tu: ";
        cin >> n;
    }while(n <= 0 || n > max);
	cout << "\t====NHAP MANG====\n";
    nhap_mang(a, n);
    cout << "\t====TONG CHAN====\n";
    Xuat_Phan_Tu_Chan(a, n);
    cout << "\t====TONG LE====\n";
    Tinh_phan_tu_le(a, n);
    return 0;
}

