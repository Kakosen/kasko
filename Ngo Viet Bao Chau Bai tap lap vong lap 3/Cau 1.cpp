#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So dao nguoc cua " << n << " la ";
	for(; n != 0; n = n / 10){
		cout << n % 10;
	}
	return 0;
}
