#include <iostream>

using namespace std;

int main(){
    int x,y;
    cout << "Nhap 2 so x va y: " << endl;
    cin >> x >> y;
    cout << "Nhap vao\n x=: " << x << "\n y=" << y << endl;
    swap(x, y);
    cout << "Sau khi hoan doi\n x= " << x << "\n y= " << y;

    return 0;
}
