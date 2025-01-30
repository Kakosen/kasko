#include<iostream>
#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)
#define max 100;
using namespace std;
void nhap_mang(int a[]; int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap so phan tu a["<< i <<"]: ";
		cin >> a[i];
	}
}
void dao_nguoc(int a[]; int n){
	for(int i = 0; i < n; i++){
		SWAP(int, a[i], a[n-i-1]);
	}
}
void xuat_mang(int a[]; int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
void show_array(int array[], int length){
    for(short i = 0; i < length; i++)  cout << array[i] <<' ';   
    cout << endl;
int main(){
	int n;
	int a[max];
	do{
        cout << "Nhap so luong phan tu: ";
        cin >> n;
    }while(n <= 0 || n > MAX);
        cout << "\t====NHAP MANG====\n";
    nhap_mang(a, n);
    cout << "\n\t====XUAT MANG====\n";
    xuat_mang(a, n);
    int size1 = sizeof a[i] / sizeof(int);
    reverse(a[i], size1);
    show_array(a[i], size1);
}
