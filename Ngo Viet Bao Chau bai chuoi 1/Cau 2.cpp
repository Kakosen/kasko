//xuat do dai chuoi
#include<stdio.h>
#include<string.h>
#define max 100

int dai(char c[]){
	int dem = 0;
	for(int i = 0; c[i] != '\0'; i++){
		dem++;
	}
	return dem;
}

int main(){
	char chuoi[max];
	printf("Nhap chuoi vao day: ");
	gets(chuoi);
	printf("Chuoi cua ban la: ");
	puts(chuoi);
	printf("\nDo dai cua chuoi la: %d", dai(chuoi));
	return 0;
}
