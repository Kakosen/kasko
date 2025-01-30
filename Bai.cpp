//file trong ngon ngu C
#include<stdio.h>

int main(){
	FILE *file;
	file = fopen("test.txt", "w");
	if(file == NULL){
		printf("file khong ton tai");
	}else{
		char chuoi[50] = " lmao lmao lmao";
		//fputc
		for(int i = 0; chuoi[i] = '\0'; i++){
			fputc(chuoi[i], file);
		}
		fputs(chuoi, file);
		fputs("n", file);
		printf("Doc file thanh cong\n");
		fclose(file);
	}
	return 0;
}
