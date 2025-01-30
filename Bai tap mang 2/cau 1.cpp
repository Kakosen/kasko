#include<iostream>
#define max 100
using namespace std;
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap vao mang a["<< i <<"]: ";
		cin >> a[i];
	}
}
void xuat_mang(int a[], int n){
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
    }while(n <= 0 || n > max);
	cout << "\t====NHAP MANG====\n";
    nhap_mang(a, n);
    cout << "\n\t====XUAT MANG====\n";
    xuat_mang(a, n);
    return 0;
}

