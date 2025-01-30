#include<iostream>
using namespace std;

int tim_so(int n){
	if (n == 1 || n == 2)
		return 1;
	return tim_so(n - 1) + tim_so(n - 2);
}
int main(){
	int n;
	cin >> n;
	cout << "So fibonacy thu " << n << " la: " << tim_so(n);
	return 0;
}
