////Viet hoa chu cai dau tien
#include<stdio.h>
#include<string.h>
#define max 100

void chuyen(char chuoi[]){
	for(int i = 0; i < strlen(chuoi); i++){
		if(i == 0 || (i > 0 && chuoi[i - 1] == 32)){    ////32 la khoang trang trong ascii
			if(chuoi[i] >= 'a' && chuoi[i] <= 'z'){
				chuoi[i] = chuoi[i] - 32;
			}
		}
	}
}

int main(){
	char chuoi[max];
	printf("Nhap chuoi vao day: ");
	gets(chuoi);
	printf("Chuoi cua ban la: ");
	puts(chuoi);
	printf("Chuyen tu thuong sang hoa o dau moi ky tu: ");
	chuyen(chuoi);
	return 0;
}
