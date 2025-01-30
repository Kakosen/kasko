#include<iostream>
using namespace std;
int main(){
	int n, sum=0;
	cout << "nhap n: ";
	cin >> n;
	while(n>=10){
		int r=n%10;
		if(r>=(n/10)%10){
			sum=1;
			break;
		}
		n/=10;
	}
	if(sum==0){
		cout << "so giam";
	}
	else{
		cout << "so ko giam";
	}
}
