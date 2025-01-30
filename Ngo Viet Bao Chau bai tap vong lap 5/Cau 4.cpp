#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int set = 1;
	while(n != 0){
		if((n % 10) % 2 == 0){
			set = 0;
			break;
		}
		n = n / 10;
	}
	if(set == 1){
		cout << "so nguyen duong co cac chu so la so le";
	}else{
		cout << "so nay khong phai la so nguyen duong co cac chu so toan la so le";
	}
	return 0;
}
