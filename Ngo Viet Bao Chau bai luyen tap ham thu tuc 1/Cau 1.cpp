#include<iostream>
using namespace std;

float so_sanh(float a, float b, float c){
	float max = -1e9;
	if(a > max){
		max = a;
	}
	if(b > max){
		max = b;
	}
	if(c > max){
		max = c;
	}
	return max;
}
int main(){
	float a,b,c;
	cout << "nhap a, b, c: ";
	cin >> a >> b >> c;
	cout << "so lon nhat la: " << so_sanh(a, b, c);
}

