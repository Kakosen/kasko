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

void xuat_duong_cheo_chinh(int a[][max_cot], int dong, int cot){
	for(int i = 0; i < dong; i++){
		cout << a[i][i] << " ";
	}
}

void xuat_duong_cheo_phu(int a[][max_cot], int dong, int cot){
	for(int i = 0; i < dong; i++){
		cout << a[i][dong - i -1] << " "; 
	}
}

int main(){
	//cach 1
	//int a[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
	//cach 2
	//int a[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//cach 3
	//int a[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
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
	cout << endl;
	xuat_duong_cheo_chinh(a, dong, cot);
	xuat_duong_cheo_phu(a, dong, cot);
	return 0;
}
