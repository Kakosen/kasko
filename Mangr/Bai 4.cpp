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
void dem(int a[], int n){
	int am = 0, duong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < 0)
			am = am + 1;
		else
			duong = duong + 1;
	}
	cout << "So phan tu am: " << am << endl;
	cout << "so phan tu duong: " << duong;
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
	cout << "\n\t====DEM SO AM DUONG====\n";
	dem(a, n);
    return 0;
} 
