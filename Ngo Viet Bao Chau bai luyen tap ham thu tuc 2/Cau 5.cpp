#include<iostream>
#define N 1000
using namespace std;
void tinh(int &n){
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n <= 0 || n >= N);
}

void chan(int n){
	int chan = 0;
	for(int i = 0; i < n; i++){
		if(i%2==0){
			chan = chan + i;
		}
	}
	cout << "Tong cac so chan < n vua nhap vao la: " << chan;
}
int main(){
	int n;
	tinh(n);
	chan(n);
	return 0;
}
