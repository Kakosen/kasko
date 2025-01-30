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
void kiem_tra_so_lon(int a[], int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	cout << max;
}
void kiem_tra_so_be(int a[], int n){
	int min = a[0];
	for(int i = 0; i < n; i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	cout << min;
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
    cout << "\n\t====XUAT SO LON NHAT====\n";
    kiem_tra_so_lon(a, n);
    cout << "\n\t====XUAT SO BE NHAT====\n";
    kiem_tra_so_be(a, n);
    return 0;
}
