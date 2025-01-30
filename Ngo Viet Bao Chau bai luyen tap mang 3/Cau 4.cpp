#include<iostream>
#define max 100
using namespace std;
void nhap_mang(int a[],int b[], int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap vao phan tu a[" << i << "] : ";
		cin >> a[i];
	}
	for (int i = 0; i < m; i++){
		cout << "Nhap phan tu b["<< i <<"]: ";
		cin >> b[i];
	}
}
void Xuat_Mang_A(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
void Xuat_Mang_B(int b[], int m){
    for(int i = 0; i < m; i++){
        cout << b[i] << " ";
    }
}
void tron(int a[], int n, int b[], int m, int c[], int l){
	for(int i = 0; i < n; i++){
		c[l] = a[i];
		l++;
	}
	for(int i = 0; i < m; i++){
		c[l] = b[i];
		l++;
	}
	for(int l=0; l<m + n; l++){
		cout << c[l] << " ";
	}
}
int main(){
    int n, m, l;
    int a[max];
    int b[max];
    int c[max];
    do{
        cout << "Nhap so luong phan tu: ";
        cin >> n;
        cin >> m;
    }while(n <= 0 || n > max || m <= 0 || m > max);
        cout << "\t====NHAP MANG====\n";
    nhap_mang(a, b, n, m);
    cout << "\n\t====XUAT MANG A====\n";
    Xuat_Mang_A(a, n);
    cout << "\n\t====XUAT MANG B====\n";
    Xuat_Mang_B(b, m);
	cout << "\n\t====TRON MANG====\n";
	tron(a, n, b, m, c, l);
}
