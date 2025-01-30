#include<iostream>
using namespace std;

void nam_nhuan(int year){
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
		cout << "Nam nay nhuan";
	}else{
		cout << "Nam nay khong nhuan";
	}
}
int main(){
	int year;
	cin >> year;
	nam_nhuan(year);
}
