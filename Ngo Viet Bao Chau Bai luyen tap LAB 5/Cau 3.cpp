#include<iostream>
using namespace std;

int main(){
	char kytu;
	int CHUINHOA,chuinthuong;
	cout << "Nhap vao ky tu bang chu cai cua ban con cua toi thi khoi quan tam: " << endl;
	cin >> kytu;
	chuinthuong = (kytu == 'a' || kytu == 'e' || kytu == 'i' || kytu == 'o' || kytu =='u');
	CHUINHOA = (kytu == 'A' || kytu == 'E' || kytu == 'I' || kytu == 'O' || kytu == 'U');
	if(CHUINHOA || chuinthuong){
		cout << "ky tu bang chu cai cua ban la nguyen am";
	}else{
		cout << "ky tu bang chu cai cua ban la phu am";
	}
	
	return 0;
}
