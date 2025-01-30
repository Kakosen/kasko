#include<iostream>
using namespace std;
int sodaonguoc(int n){
	int nguoc = 0, ndao;
	while(n != 0){
		ndao = n % 10;
		nguoc = (nguoc * 10) + ndao;
		n = n / 10;
	}
	return nguoc;
}
bool sodoixung(int n){
	if (n == sodaonguoc(n))
		return true;
	else 
		return false;
}
int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (sodoixung(n)){
		cout << "Day la so doi xung";
	}
	else{
		cout << "Khong phai so doi xung";
	}
	return 0;
}
