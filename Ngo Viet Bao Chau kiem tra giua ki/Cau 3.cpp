#include<iostream>
using namespace std;
#define max 100

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

float trung(int a[], int n){
	int tong = 0, dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			tong = tong + a[i];
			dem++;
		}
	}
	return dem ? (float)tong / dem : 0;
}

void thay(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			a[i] = x;
		}
	}
}

bool kiem(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int so;
	cout << "1. NHAP VA XUAT MOT MANG SO NGUYEN GOM N PHAN TU" << endl;
	cout << "2. TINH VA HIEN THI TRUNG BINH CONG CUA CAC PHAN TU LE CO TRONG MANG" << endl;
	cout << "3. THAY THE PHAN TU LE TRONG MANG BANG PHAN TU X NHAP TU BAN PHIM" << endl;
	cout << "4. KIEM TRA VA THONG BAO LEN MAN HINH MANG DO CO DAI DIEN CHO MOT TAP HOP HAY KHONG?" << endl;
	cout << "Nhap chuc nang: " << endl;
	cin >> so;
	switch(so){
		case 1:{
			int n;
			cout << "Nhap so luong phan tu co trong mang: ";
			cin >> n;
			int a[max];
			nhap(a, n);
			cout << "Mang cua ban la: ";
			xuat(a, n);
			break;
		}
		case 2:{
			int n;
			cout << "Nhap so luong phan tu co trong mang: ";
			cin >> n;
			int a[max];
			nhap(a, n);
			float b = trung(a, n);
			cout << "Trung binh cong cua cac phan tu le la: " << b;
			break;
		}
		case 3:{
			int n, x;
			cout << "Nhap so luong phan tu co trong mang: ";
			cin >> n;
			int a[max];
			nhap(a, n);
			cout << "Nhap phan tu x de thay the cac phan tu le: ";
			cin >> x;
			thay(a, n, x);
			cout << "Mang sau khi thay the la: ";
			xuat(a, n);
			break;
		}
		case 4:{
			int n;
			cout << "Nhap so luong phan tu co trong mang: ";
			cin >> n;
			int a[max];
			nhap(a, n);
			if(kiem(a, n)){
				cout << "Mang dai dien cho tap hop";
			}else{
				cout << "Mang khong dai dien cho tap hop";
			}
			break;
		}
	}
}
