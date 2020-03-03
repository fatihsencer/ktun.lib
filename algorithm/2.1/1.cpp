#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	srand(time(NULL));
	
	FILE *fp1;
	
	fp1 = fopen ("sayilar.txt", "w");
	
	if(fp1 == NULL){
		printf("Dosya acma hatasi");
		return 0;
	}
	
	for(int i=0;i<100;i++){
		fprintf(fp1,"%d ",rand()%1000);
	}
	
	fclose(fp1);
	
}
