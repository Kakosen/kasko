#include<iostream>
using namespace std;

bool tim_snt(int n){
	if(n < 2){
		return false;
	}else{
		for (int i = 2; i < n; i++){
			if(n % 2 == 0){
				return false;
			}
		}
		return true;
	}
}
int main(){
	int n;
	cin >> n;
	if(tim_snt(n)){
		cout << "n la so nguyen to";
	}else{
		cout << "n khong phai so nguyen to";
	}
}
