#include<iostream>
using namespace std;
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

int tim(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
}

void xoa(int a[], int n, int x){
	int p;
	while((p = tim(a, n, x)) != -1){
		for(int i = p; i < n - 1; i++){
			a[i] = a[i + 1];
		}
		n--;
	}
}

int xuat_hien(int a[], int n){
	int max	= 0, res = a[0];
	for(int i = 0; i < n; i++){
		int dem = 1;
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				if(a[i] == a[j]){
					dem++;
				}
			}
			if(dem > max){
				max = dem;
				res = a[i];
			}
		}
	}
	return res;
}

bool check_snt(int x){
	if(x < 2) return false;
	for(int i = 2; i <= x/2; i++){
		if(x % i == 0){
			return false;
		}
	}
	return false;
}

void xoa_snt(int a[], int &n){
	for(int i = 0; i < n; i++){
		if(check_snt(a[i])){
			for(int j = i; j < n - 1; j++){
				a[j] = a[j + 1];
			}
			--n;
			--i;
		}
	}
}
int main(){
	int n, so;
	int a[100];
	cout << "Nhap so luong phan tu co trong mang: ";
	cin >> n;
	nhap(a, n);
	cout << "1. NHAP MANG, XUAT MANG" << endl;
	cout << "2. TIM PHAN TU X TREN MANG" << endl;
	cout << "3. XOA TAT CA PHAN TU CO GIA TRI X KHOI MANG" << endl;
	cout << "4. TIM PHAN TU CO TAN SUAT XUAT HIEN NHIEU NHAT" << endl;
	cout << "5. XOA SO NGUYEN TO" << endl;
	cout << "Chon chuc nang: " << endl;
	cin >> so;
	switch(so){
		case 1:{
			cout << "Mang sau khi nhap la: ";
			xuat(a, n);
			break;
		}
		case 2:{
			int x;
			cout << "Nhap phan tu can tim: ";
			cin >> x;
			int p = tim(a, n, x);
			if(p != -1){
				cout << "Phan tu " << x << " xuat hien tai vi tri " << p << endl;
			}else{
				cout << "Khong tim thay phan tu " << x << " trong mang" << endl;
			}
			break;
		}
		case 3:{
			int x;
			cout << "Nhap phan tu can xoa: ";
			cin >> x;
			xoa(a, n, x);
			cout << "Mang sau khi xoa la: ";
			xuat(a, n);
			break;
		}
		case 4:{
			int mode = xuat_hien(a, n);
			cout << "Phan tu xuat hien nhieu nhat la: " << mode;
			break;
		}
		case 5:{
			xoa_snt(a, n);
			cout << "Mang sau khi xoa SNT la: ";
			xuat(a, n);
			break;
		}
		default:;
			cout << "Lua chon khong hop le";
	}
}
