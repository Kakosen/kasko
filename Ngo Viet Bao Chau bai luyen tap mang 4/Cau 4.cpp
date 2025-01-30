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
void xoa(int a[], int &n, int k){
	for(int i = k; i < n; i++){
		a[i] = a[i + 1];
	}
	n--;
}
bool Kiem_Tra_SNT(int x){
    if(x < 2){
        return false;
    }else{
        for(int i = 2 ; i < x; i++){
            if(x % i == 0){
                return false;
            }
        }
        return true;
    }
}
void xoa_SNT(int a[], int &n){
	for(int i = 0; i < n; i++){
		if(Kiem_Tra_SNT(a[i]) == true){ 
			xoa(a, n, i);
			i--;
		}
	}
}
int main(){
    int n;
    int a[max];
    do{
        cout << "Nhap so luong phan tu: ";
        cin >> n;
    }while(n <= 0 || n > max);
    cout << "-NHAP MANG-" << endl;
    nhap(a, n);
    cout << "-XUAT MANG-" << endl;
    xuat_mang(a, n);
    cout << "\t\n-MANG SAU KHI XOA SNT-" << endl;
    xoa_SNT(a, n);
	xuat_mang(a, n);
}
