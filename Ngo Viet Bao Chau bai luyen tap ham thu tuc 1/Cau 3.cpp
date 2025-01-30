#include<iostream>
using namespace std;

void tam_giac(int a, int b, int c){
	cout << a + b + c;
}
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	tam_giac(a, b, c);
}
