
#include <stdio.h>

int demKhoangTrang(char *chuoi) {
    int dem = 0;
    while (*chuoi) {
        if (*chuoi == ' ') {
            dem++;
        }
        chuoi++;
    }
    return dem;
}

int main() {
    char chuoi[] = "Ðây là m?t ví d? v? d?m kho?ng tr?ng trong chu?i C";
    int soKhoangTrang = demKhoangTrang(chuoi);

    printf("S? kho?ng tr?ng trong chu?i: %d\n", soKhoangTrang);
    return 0;
}

