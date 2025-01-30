#include <iostream>
using namespace std;

// Hãy ki?m tra s? nguyên duong n có toàn ch? s? l? hay không
bool KiemTra_SoToanLe(int N)
{
    while ( N > 0)
    {
        int t = N % 10;

        if (t % 2 == 0)
            return false;

        N = N / 10;
    }
    return true;
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    bool toanLe = KiemTra_SoToanLe(N);
    if (toanLe == true)
        cout << "Toan Le";
    else
        cout << "Khong toan le" << endl;
        system("pause");
}
