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
bool kiem(int x){
	if (x < 2){
		return false;
	}else{
		for(int i = 2; i < x; i++){
			if(x % i == 0){
				return false;
			}
		}return true;
	}
}
void chen(int a[], int &n, int x, int k){
	for(int i = n - 1; i >= k; i--){
		a[i + 1] = a[i];
	}
	a[k+1] = x;
	n++;
}
void chen_vao(int a[], int &n, int x){
	for(int i = 0; i < n; i++){
		if(kiem(a[i]) == true){
			chen(a, n, x, i);
			i++;
		}
	}
}
int main(){
	int n, x;
	int a[max];
	do{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
	}while (n <= 0 || n > max);
	cout << "-NHAP-" << endl;
	nhap(a, n);
	cout << "\t\n-XUAT-" << endl;
	xuat(a, n);
	cout << "\t\n-CHEN SO VAO SAU SO NGUYEN TO-";
	cout << "\t\nNhap vao gia tri can them vao sau so nguyen to: ";
	cin >> x;
	chen_vao(a, n, x);
	xuat(a, n);
}
