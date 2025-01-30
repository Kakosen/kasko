#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define pi 3.14
using namespace std;
class fn{
	public:
	void dientich(int); //hinh tron
	void dientich(int,int); //hinh chu nhat
	void dientich(float ,int,int); //hinh tam giac
};
void fn::dientich(int a){
	cout << "Dien tich hinh tron la: " << pi * a * a;
}
void fn::dientich(int a, int b){
	cout << "Dien tich hinh chu nhat la: " << a * b;
}
void fn::dientich(float t, int a, int b){
	cout << "Dien tich tam giac la: " << t * a * b;
}

int main(){
	int nhap;
	int a,b,r;
	fn obj;
	cout << "Chon 1 trong cac chuc nang sau." << endl;
	cout << "1. Tinh dien tich hinh tron." << endl;
	cout << "2. Tinh dien tich hinh chu nhat." << endl;
	cout << "3. Tinh dien tich tam giac." << endl;
	cin >> nhap;
	switch(nhap){
		case 1:
			cout << "Nhap r la ban kinh hinh tron: ";
			cin >> r;
			obj.dientich(r);
			break;
		case 2:
			cout << "Nhap a la chieu dai va b la chieu rong cua hinh chu nhat: ";
			cin >> a >> b;
			obj.dientich(a,b);
			break;
		case 3:
			cout << "Nhap 2 canh cua hinh tam giac( a va b ): ";
			cin >> a >> b;
			obj.dientich(0.5,a,b);
			break;
		case 4:
			exit(0);
	}
return 0;
}
