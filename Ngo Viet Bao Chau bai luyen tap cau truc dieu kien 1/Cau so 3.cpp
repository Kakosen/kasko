#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout << "Nhap hai so a va b: ";
	cin >> a >> b;
	if(a > b){
		cout << "a lon hon b";
	}else if(a < b){
		cout << "a be hon b";
	}else{
		cout << " a bang b";
	}
	
	return 0;
}
