#include<iostream>
using namespace std;
int main(){
	float tiengui = 1000;
	float n;
	int dem = 0;
	float tienlai = 1.5/100;
	while(tiengui < 2000){
		 n=tienlai*tiengui;
		 tiengui = tiengui + n; 
		 dem++;
	}
	cout << dem;
	return 0;
}
