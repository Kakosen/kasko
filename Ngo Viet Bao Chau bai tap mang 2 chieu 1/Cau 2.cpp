#include<iostream>
#define max_dong 100
#define max_cot 100
using namespace std;

void nhap_ma_tran(int a[][max_cot], int dong, int cot){
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << "Nhap vao phan tu a["<< i <<"]["<< j <<"]: ";
			cin >> a[i][j];
		}
	}
}

void xuat_ma_tran(int a[][max_cot], int dong, int cot){
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int tong_dong(int a[][max_cot], int dong, int cot){
	int tong = 0;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
		tong = tong + a[i][j];
		}
		cout << "Tong cac dong la: " << tong << endl;
		tong = 0;
	}
}

int tong_cot(int a[][max_cot], int dong, int cot){
	int tong = 0;
	for(int j = 0; j < cot; j++){
		for(int i = 0; i < dong; i++){
			tong = tong + a[i][j];
		}
		cout << "Tong cac cot la: " << tong << endl;
		tong = 0;
	}
}

int main(){
	int a[max_dong][max_cot];
	int dong;
	int cot;
	do{
	cout << "Nhap so dong: ";
	cin >> dong;
	}while(dong <= 0 || dong >= max_dong);
	do{
	cout << "Nhap so cot: ";
	cin >> cot;
	}while(cot <= 0 || cot >= max_cot);
	nhap_ma_tran(a, dong, cot);
	xuat_ma_tran(a, dong, cot);
	tong_dong(a, dong, cot);
	tong_cot(a, dong, cot);
}
