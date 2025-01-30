#include<iostream>
using namespace std;
int main()
{
    int songuyen3chuso;
    cout << "Nhap vao so nguyen 3 chu so: ";
    cin >> songuyen3chuso;
    int x = songuyen3chuso/100;
    int y = songuyen3chuso/10;
    int kytu2 = y%10;
    int z = songuyen3chuso%100;
    int kytu3 = z%10;
	cout << "Hang tram la: " << x << endl;
	cout << "Hang chuc la: " << kytu2 << endl;
	cout << "Hang don vi la: " << kytu3;
 

    return 0;
}
