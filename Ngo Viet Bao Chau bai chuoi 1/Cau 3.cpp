#include<stdio.h>
#include<string.h>
#define max 100

void chep(char c1[], char c2[]){
	int i = 0;
	while(c2[i] != '\0'){
		c1[i] = c2[i];
		i++;
	}
}

int main(){
	char c1[max];
	char c2[max];
	printf("Nhap vao chuoi 2: ");
	gets(c2);
	chep(c1, c2);
	printf("Chuoi 1 la: %s", c1);
	return 0;
}
