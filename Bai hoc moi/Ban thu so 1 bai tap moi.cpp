#include<iostream>
using namespace std;
int main(){
	int a = 5; // tinh giai thua cua 5: 1 * 2 * 3 * 4 * 5
	int gt_a = 1;
	for(int i = 1; i <= a; i++){
		gt_a = gt_a * i;
	}
	cout << "giai thua cua a: " << gt_a << endl;
}
