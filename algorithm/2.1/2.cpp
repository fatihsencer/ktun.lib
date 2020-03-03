#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	FILE *fp1,*fp2;
	
	int sayi,sayac;
	
	fp1 = fopen("sayilar.txt","r");
	
	if(fp1==NULL){
		printf("Dosya acma hatasi");
		return 0;
	}
	
	fp2 = fopen("sayilar2.txt","w");
	
	if(fp2==NULL){
		printf("Dosya acma hatasi");
		return 0;
	}
	
	for(int i=0;i<100;i++){
		fscanf(fp1,"%d",&sayi);
		sayac=0;
		for(int k=2;k<sayi;k++) if(sayi%k==0) sayac=1;
		
		if(sayac==0 && sayi>1) fprintf(fp2,"%d ",sayi);	
	}
	
	fclose(fp1);
	fclose(fp2);
}
