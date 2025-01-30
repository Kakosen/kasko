#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c;
	float x;
	float delta;
	cout << "nhap a, b, c" << endl;
	cin >> a >> b >> c;
	if(a == 0){
		x = -c/b;
		cout << "x la: " << x;
	}
	if(a != 0){
		delta = (b * b) - (4 * a * c);
		if(delta < 0){
			cout << "phuong trinh vo nghiem";
		}else if(delta == 0){
			cout << "phuong trinh co nghiem kep: " << -b/2*a;
		}else{
			cout << "phuong trinh co 2 nghiem phan biet" << endl;
			cout << "nghiem 1 la: " << (-b + sqrt(delta))/2*a << endl;
			cout << "nghiem 2 la: " << (-b - sqrt(delta))/2*a;
		}
	}
}
