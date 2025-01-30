#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cout << "Nhap 3 so a, b, c: ";
	cin >> a >> b >> c;
	
	if(a > b && a > c){
		cout << "so lon nhat trong 3 so la: " << a;
	}else if(b > a && b > c){
		cout << "so lon nhat trong 3 so la: " << b;
	}else if(c > a && c > b){
		cout << "so lon nhat trong 3 so la: " << c;
	}
	return 0;
}

//int main(){
////	int a, b, c;
////	cin >> a >> b >> c;
////	int max = a;
////	if(b > max){
////		max = b;
////	}
////	if(c > max){
////		max = c;
////	}
//	//cach 2:
//	int max = a>b?a:b;
//	max = c > max ? c : max;
//	cout << "So lon nhat la: " << max;
//	return 0;
//}
