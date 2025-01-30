#include <iostream>
using namespace std;
#define MAX 100 
void Nhap_Mang(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap vao phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}
void Xuat_Mang(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
void Xuat_Phan_Tu_Chan(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }
}
void tinh_tong(int a[], int n){
	int tong = 0;
	for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
    		tong = tong + a[i];
        }
    }
    cout << tong;
}
int main(){
    int n;
    int a[MAX];
    do{
        cout << "Nhap so luong phan tu: ";
        cin >> n;
    }while(n <= 0 || n > MAX);
    
    cout << "\t====NHAP MANG====\n";
    Nhap_Mang(a, n);
    cout << "\n\t====XUAT MANG====\n";
    Xuat_Mang(a, n);
    cout << "\n\t====TONG SO CHAN====\n";
    tinh_tong(a, n);
} 
