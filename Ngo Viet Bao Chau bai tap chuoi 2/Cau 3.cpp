////////////CHUYEN DOI SANG CHU HOA
#include<stdio.h>
#include<string.h>
#define max 100

void thuong_sang_hoa(char chuoi[]){
	for(int i = 0; chuoi[i] != '\0'; i++){
		if(chuoi[i] >= 'a' && chuoi[i] <= 'z'){
			chuoi[i] = chuoi[i] - 32;
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
	printf("Chuyen tu thuong sang hoa: ");
	thuong_sang_hoa(chuoi);
	return 0;
}


