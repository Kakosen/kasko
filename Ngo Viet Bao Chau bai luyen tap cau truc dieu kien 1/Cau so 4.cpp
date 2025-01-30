#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout << "Nhap 4 so lan luot a, b, c, d: " << endl;
	cin >> a >> b >> c >> d;
	int max = a;
	if(b > max){
		max = b;
	}
	if(c > max){
		max = c;
	}
	if(d > max){
		max = d;
	}
	if(a == b && a == c && a == d){
		cout << "Khong co so lon nhat";
	}else{
		cout << "so lon nhat la: " << max;
	}
}
