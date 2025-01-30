////////chuyen doi chu hoa sang chu thuong 
#include<stdio.h>
#include<string.h>
#define max 100

void hoa_sang_thuong(char chuoi[]){
	for(int i = 0; chuoi[i] != '\0'; i++){
		if(chuoi[i] >= 'A' && chuoi[i] <= 'Z'){
			chuoi[i] = chuoi[i] + 32;
		}
	}
	printf(chuoi);
}

int main(){
	char chuoi[max];
	printf("Nhap chuoi vao day: ");
	gets(chuoi);
	printf("Chuoi cua ban la: ");
	puts(chuoi);
	printf("Chuyen do tu hoa sang chu thuong: ");
	hoa_sang_thuong(chuoi);
	return 0;
}
