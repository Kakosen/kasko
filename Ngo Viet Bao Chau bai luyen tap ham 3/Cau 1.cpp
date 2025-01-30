#include<iostream>
using namespace std;
void ham_tinh_so_tiep_theo(int n, int sotieptheo){
	sotieptheo = n + 1;
	cout << sotieptheo;
}
int main(){
	int n;
	int sotieptheo;
	cout << "Nhap so n: ";
	cin >> n;
	ham_tinh_so_tiep_theo(n, sotieptheo);
}
