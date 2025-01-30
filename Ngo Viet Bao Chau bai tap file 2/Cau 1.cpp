#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000

void inHoaChuCaiDau(char* str) {
    int i = 0;
    int capitalizeNext = 1;

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            capitalizeNext = 1;
        } else if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        }
        i++;
    }
}

int demTu(char* str){
	int count = 0;
	int wcount = 0;
	
	while(*str){
		if(isspace(*str)){
			wcount = 0;
		}
		else if(!wcount){
			wcount = 1;
			count++;
		}
		str++;
	}
	return count++;
}
int demDong(char* str){
	int count = 0;
	while(*str){
		if(*str == '\n'){
			count++;
		}
		str++;
	}
	return count + 1;
}

int main(){
	
	FILE *filevao;
	FILE *filera;
	char str[MAX];
	filevao = fopen("INPUT.txt", "r");
	filera = fopen("OUTPUT.txt", "w");
	if(filevao == NULL){
		printf("File khong ton tai!");
		return 1;
	}
	if(filera == NULL){
		printf("File khong ton tai!");
		return 1;
	}
	char buffer[MAX];
	char noidung[MAX * 10] = " ";
	printf("\nMo FILE INPUT.txt thanh cong:\n");
    while(fgets(buffer, MAX, filevao) != NULL){
        strcat(noidung, buffer);
        printf("%s", buffer);
    }
    fclose(filevao);
    
    int soTu = demTu(noidung);
    int soDong = demDong(noidung);
	
	inHoaChuCaiDau(noidung);
	fputs(noidung, filera);
	fclose(filera);
	
	printf("\n\nSo tu trong file: %d\n", soTu);
	printf("\nSo dong trong file: %d\n", soDong);
}

