//BAI 3 4 5
#include<stdio.h>
#include<string.h>
#define max 100

void xoa_dau(char chuoi[]){
	int in = 0, i = 0;
	while(chuoi[in] == ' '){
		in++;
	}
	while(chuoi[in] != '\0'){
		chuoi[i++] = chuoi[in++];
	}
	chuoi[i] = '\0';
}

void xoa_cuoi(char chuoi[]){
	int in = 0;
	while(chuoi[in] != '\0'){
		in++;
	}
	in--;
	while(in >= 0 && chuoi[in] == ' '){
		in--;
	}
	chuoi[in + 1] = '\0';
}

void xoa_giua(char chuoi[]){
	int i = 0, j = 0;
	while(chuoi[i] != '\0'){
		if(chuoi[i] != ' ' || (j > 0 && chuoi[j - 1] != ' ')){
			chuoi[j++] = chuoi[i];
		}
		i++;
	}
	chuoi[j] = '\0';
}

int main(){
	char chuoi[max];
	int so;
	printf("nhap chuoi vao day: ");
	fgets(chuoi, max, stdin);
	int len = 0;
	while(chuoi[len] != '\0'){
		len++;
	}
	if(len > 0 && chuoi[len - 1] == '\n'){
		chuoi[len - 1] = '\0';
	}
	printf("Chuoi cua ban la: ");
	puts(chuoi);
	
	printf("Chon chuc nang:\n");
	printf("1. Xoa dau cach o dau chuoi\n");
	printf("2. Xoa dau cach o cuoi chuoi\n");
	printf("3. Xoa dau cach o giua chuoi\n");
	printf("Nhap chuc nang: ");
	scanf("%d", &so);
	switch(so){
		case 1:
            xoa_dau(chuoi);
            printf("Chuoi sau khi xoa dau cach o dau: %s\n", chuoi);
            break;
        case 2:
            xoa_cuoi(chuoi);
            printf("Chuoi sau khi xoa dau cach o cuoi: %s\n", chuoi);
            break;
        case 3:
            xoa_giua(chuoi);
            printf("Chuoi sau khi xoa dau cach o giua: %s\n", chuoi);
            break;
        default:
            printf("Lua chon khong hop le\n");
            break;
    }
    return 0;
}
