////////////DEM KHOANG TRANG TRONG CHUOI
#include<stdio.h>
#include<string.h>
#define max 100
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
int main(){
	char chuoi[max];
	printf("Nhap chuoi vao day: ");
	gets(chuoi);
	printf("Chuoi cua ban la: ");
	puts(chuoi);
	int khoang_trang = demKhoangTrang(chuoi);
	printf("So khoang trang trong chuoi la: %d\n", khoang_trang);
	return 0;
}

