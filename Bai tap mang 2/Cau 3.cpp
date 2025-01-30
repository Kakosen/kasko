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
void Xuat_SNT(int a[], int n){
    for(int i = 0;  i < n; i++){
        if(Kiem_Tra_SNT(a[i]) == true){
            cout << a[i] << " ";
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
	cout << "\t====NHAP MANG====\n";
    nhap_mang(a, n);
    cout << "\n\t====XUAT MANG====\n";
    xuat_mang(a, n);
    cout << "\n\t====SO NGUYEN TO====\n";
    Xuat_SNT(a, n);
    return 0;
}
