#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 10000

int doi_xung(char chuoi[]){
	int i = 0, r = strlen(chuoi) - 1;
	while(i < r){
		if(chuoi[i] != chuoi[r]){
			return 0;
		}
			++i;
			--r;
	} 
	return 1;
}

int main(){
	char chuoi[max];
	printf("Nhap chuoi vao day: ");
	gets(chuoi);
	if(doi_xung(chuoi)){
		printf("%s doi xung \n", chuoi);
	}else{
		printf("%s khong doi xung\n", chuoi);
	}
	return 0;
}
