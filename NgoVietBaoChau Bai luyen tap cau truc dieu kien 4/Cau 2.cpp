#include<iostream>
using namespace std;
int main(){
	int x,y;
	char pheptoan;
	cout << "Nhap x va y: ";
	cin >> x >> y;
	cout << "Nhap phep toan (nhap 1 trong 4 phep cong, tru, nhan, chia): ";
	cin >> pheptoan;
	switch(pheptoan){
		case '+':{
			cout << x + y;
			break;
		}
		case '*':{
			cout << x * y;
			break;
		}
		case '-':{
			cout << x - y;
			break;
		}
		case '/':{
			if(y != 0){
				cout << (float)x / y;
			}else{
				cout << "Khong the chia duoc cho so 0";
			}
			break;
		}
	}
	return 0;
}
