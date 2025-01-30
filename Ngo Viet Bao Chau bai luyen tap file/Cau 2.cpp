#include<stdio.h>
#include<math.h>
int main(){
	FILE *thumucvao;
	FILE *thumucra;
	thumucvao = fopen("INPUT2.txt", "r");
	thumucra = fopen("KETQUA.txt", "w");
	if(thumucvao == NULL){
		printf("File khong mo duoc");
	}
	if(thumucra == NULL){
		printf("File khong mo duoc");
		fclose(thumucvao);
		return 1;
	}
	char s[50];
	fgets(s, sizeof(s), thumucvao);
	
	int so;
	int max;
	int sodau = 1;
	while (fscanf(thumucvao, "%d", &so) == 1){
		if(sodau){
			max = so;
			sodau = 0;
		}else{
			if(so > max){
				max = so;
			}
		}
	}
	fprintf(thumucra, "Phan tu lon nhat la: %d\n", max);
	
	fclose(thumucvao);
	fclose(thumucra);
	printf("Ket qua da duoc ghi\n");
	return 0;
}
