#include<iostream>
#define max 100;
using namespace std;

int main(){
	//tao mot cai mang dinh truoc
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	//tao them mot cai mang de sao chep sang
	int b[10]; //cung do dai voi mang a
	//mot vong lap de sao chep tu a sang b
	for(int i = 0; i < 10; i++){
		b[i] = a[i];
	}
	//xuat mang moi ra
	for(int i = 0; i < 10; i++){
		cout << b[i] << " ";
	}
}
