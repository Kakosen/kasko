#include<stdio.h>
#include<string.h>
#define max 100

int check_thuong(char c) {
    return (c >= 'a' && c <= 'z');
}

int check_hoa(char c) {
    return (c >= 'A' && c <= 'Z');
}

char chuyen_hoa(char c) {
    if (check_thuong(c)) {
        return c - 32;
    }
    return c;
}

char chuyen_thuong(char c) {
    if (check_hoa(c)) {
        return c + 32;
    }
    return c;
}

void chuyen(char chuoi[]) {
    int i = 0;
    while (chuoi[i] != ' ' && chuoi[i] != '\0') {
        chuoi[i] = chuyen_hoa(chuoi[i]);
        i++;
    }
    while (chuoi[i] != '\0') {
        if (chuoi[i] == ' ') {
            i++; 
            continue;
        }
        chuoi[i] = chuyen_thuong(chuoi[i]);
        i++;
    }
}
int main(){
	char chuoi[max];
	printf("Nhap chuoi vao day: ");
	fgets(chuoi, max, stdin);
	printf("Chuoi cua ban la: ");
	puts(chuoi);
	printf("Chuyen doi: ");
	chuyen(chuoi);
	puts(chuoi);
	return 0;
}
