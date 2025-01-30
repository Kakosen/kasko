#include<stdio.h>
#include<string.h>
#define max 100

void them(char chuoi[], int vitri, char phantu){
	int len = 0;
	while(chuoi[len] != '\0'){
		len++;
	}
	if(vitri < 0 || vitri > len){
		printf("Vi tri khong hop le\n");
		return;
	}
	for(int i = len; i >= vitri; i--){
		chuoi[i + 1] = chuoi[i];
	}
	chuoi[vitri] = phantu;
	chuoi[len + 1] = '\0';
}
int main(){
	char chuoi[max];
	int vitri;
	char phantu;
	printf("Nhap chuoi vao day: ");
    fgets(chuoi, max, stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    printf("Chuoi cua ban la: ");
    puts(chuoi);
    printf("Nhap vi tri can chen: ");
    scanf("%d", &vitri);
    printf("Nhap ky tu can chen: ");
    scanf(" %c", &phantu); 
    them(chuoi, vitri, phantu);
    printf("Chuoi sau khi chen la: %s\n", chuoi);
    return 0;
}
