#include<stdio.h>
#include<math.h>
bool kiem(int x){
	if (x < 2){
		return false;
	}
	for(int i = 2; i <= sqrt(x); i++){
			if(x%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	FILE *thumuc;
	char s[50];
	thumuc = fopen("INPUT.txt", "r");
	
	if(thumuc == NULL){
		printf("Khong mo duoc file\n");
		return 1;
	}
	int so;
	while(fscanf(thumuc, "%d", &so) == 1){
		if(kiem(so)){
			printf("TRUE\n", so);
		}else{
			printf("FALSE\n", so);
		}
	}
	
	fclose(thumuc);
	return 0;
}
