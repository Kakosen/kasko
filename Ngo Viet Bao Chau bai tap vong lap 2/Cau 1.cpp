#include<iostream>
using namespace std;
int main(){
	int n;
	int dem;
	dem = 0;
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			cout << i << " ";
			dem++;
		}
	}
	cout << endl << "So lan dem: " << dem;
	return 0;
}
