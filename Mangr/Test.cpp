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
    cout << "\n\t====XUAT PHAN TU CHAN====\n";
    return 0;
}
