#include<stdio.h>
#include<string.h>
#define max 100

int length(char c[]){
	int dem = 0;
	for(int i = 0; c[i] != '\0'; i++){
		dem++;
	}
	return dem;
}

void noi(char c1[], char c2[]){
	int chieu1 = length(c1);
	int chieu2 = length(c2);
	int j=0;
	int i;
	for(i = chieu1; i < chieu1 + chieu2; i++){
		c1[i] = c2[j];
		j++;
	}
	c1[i] = '\0';
}

int main(){
	char c1[max];
	char c2[max];
	printf("Nhap vao chuoi 2: ");
	gets(c2);
	printf("\t\nNhap vao chuoi 1: ");
	gets(c1);
	printf("\t\nNoi hai chuoi:");
	noi(c1, c2);
	printf("%s",c1);
	
	return 0;
}
