#include<iostream>
using namespace std;
int main(){
	int a,b;
	float x;
	cout << "Nhap 2 bien a va b: ";
	cin >> a >> b;
	if(a == 0 && b == 0){
		cout << "the thi chiu roi, cai nay vo so nghiem";
	}else if(a == 0){
		cout << "chung ta khong the lam gi khi no khong co nghiem";
	}else{
		x = (float)-b/a;
		cout << "cai nay co nghiem ne, nghiem la: " << x;
	}

	return 0;
}
