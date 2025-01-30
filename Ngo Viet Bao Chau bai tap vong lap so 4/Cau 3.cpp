#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dan = 500;
	while(n > 0){
		int tong = 0.02 * dan;
		dan = dan + tong;
		n--;
	}
	cout << dan;
	return 0;
}
