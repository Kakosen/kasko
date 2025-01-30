#include<iostream>
using namespace std;
int main(){
	int n,on,rn,sum=0;
	cout << "Nhap so cua ban: ";
	cin >> n;
	on = n;
	while(on != 0){
		rn = on % 10;
		sum = sum + rn * rn * rn;
		on = on / 10;
	}
	if(sum == n){
		cout << n << " la mot so armstrong";
	}else{
		cout << n << " khong phai la mot so armstrong";
	}
	return 0;
}
