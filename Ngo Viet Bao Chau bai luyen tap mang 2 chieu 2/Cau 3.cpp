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
bool check_chan(int a[][max_cot], int dong, int cot){
	int dem = 0;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			if(a[i][j] % 2 != 0){
				dem = dem + 1;
			}
		}
	}if(dem == 0){
		cout << "Mang toan so chan";
	}else{
		cout << "Mang khong hoan toan so chan";
	}
}
int main(){
	int a[max_dong][max_cot];
	int dong;
	int cot;
	int x;
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
	check_chan(a, dong, cot);
	cout << endl;
	return 0;
}
