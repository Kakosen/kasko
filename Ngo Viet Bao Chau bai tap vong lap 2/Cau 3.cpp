#include<iostream>
using namespace std;
int main(){
	int n;
	int gt;
	gt = 1;
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 1; i <= n; i++){
		gt = gt * i;
	}
	cout << gt;
	return 0;
}
