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
void max(int a[][max_cot], int dong, int cot){
	int m = 0;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			if(m < a[i][j]){
				m = a[i][j];
			}
		}
	}cout << m;
}
void min(int a[][max_cot], int dong, int cot){
	int n=1e9;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			if(n > a[i][j]){
				n = a[i][j];
			}
		}
	}cout << n;
}

int main(){
	int a[max_dong][max_cot];
	int dong;
	int cot;
	do{
		cout << "Nhap so dong: ";
		cin >> dong;
	}while(dong <= 0 || dong > max_dong);
	do{
		cout << "Nhap so cot: ";
		cin >> cot;
	}while(cot <= 0 || cot > max_cot);
	nhap_ma_tran(a, dong, cot);
	xuat_ma_tran(a, dong, cot);
	cout << "-So to nhat-" << endl;
	max(a, dong, cot);
	cout << "\t\n-So nho nhat-" << endl;
	min(a, dong, cot);
	cout << endl;
	return 0;
}
