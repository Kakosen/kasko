#include<iostream>
using namespace std;

int main(){
	int diem;
	cout << "Nhap diem tu 1 den 10: ";
	cin >> diem;
	switch(diem){
		case 0:{
			cout << "cuc ki kem, de nghi hoc lai";
			break;
		}
		case 1:{
			cout << "qua kem";
			break;
		}
		case 2:{
			cout << "kem";
			break;
		}
		case 3:{
			cout << "can phai hoc them";
			break;
		}
		case 4:{
			cout << "Diem qua yeu";
			break;
		}
		case 5:{
			cout << "Trung binh qua mon";
			break;
		}
		case 6:{
			cout << "Tren trung binh";
			break;
		}
		case 7:{
			cout << "Hoc kha";
			break;
		}
		case 8:{
			cout << "Hoc kha, con co the tien bo them";
			break;
		}
		case 9:{
			cout << "Hoc sinh gioi";
			break;
		}
		case 10:{
			cout << "Xuat sac";
			break;
		}
	}

	return 0;
}
