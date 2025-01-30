#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Nhap hai so a va b: ";
	cin >> a >> b;
	if(a % b == 0){
		cout << "a la boi so cua b";
	}else{
		cout << "a khong phai boi so cua b";
	}
	
	return 0;
}
