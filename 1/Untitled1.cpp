#include <iostream>
using namespace std;

int tongsochan(int n) {
    if (n <= 0)
        return 0;
    if (n % 2 == 0)
        return n + tongsochan(n - 2);
    return tongsochan(n - 1);
}

int main(){
	int n;
	cin >> n;
	cout << tongsochan(n);
	
	return 0;
}
