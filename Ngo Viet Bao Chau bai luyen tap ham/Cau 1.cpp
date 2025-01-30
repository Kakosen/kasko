#include<stdio.h>
#include<string.h>
#define max 100

int dem(char chuoi[]){
	int dem = 0;
	int tu = 0;
	int i = 0;
	while(chuoi[i] != '\0'){
		if(chuoi[i] == ' ' || chuoi[i] == '\t' || chuoi[i] == '\n'){
			tu = 0;
		}else{
			if(!tu){
				tu = 1;
				dem++;
			}
		}
		i++;
	}
	return dem;
}

int main(){
	char chuoi[max];
	printf("Nhap chuoi vao day: ");
	fgets(chuoi, max, stdin);
	int length = 0;
	while(chuoi[length] != '\0'){
		if(chuoi[length] == '\n'){
			chuoi[length] = '\0';;
			break;
		}
		length++;
	}
	printf("Chuoi cua ban la: ");
	puts(chuoi);
	int sotu = dem(chuoi);
	printf("so luong tu trong chuoi la: %d\n", sotu);
	return 0;
}
