#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));

	unsigned int nr1;
		
	FILE *fp1,*fp2;
	
	fp1 = fopen("sayilar0.txt","w");
			
	if(fp1==NULL){
		printf("Dosya acma hatasi");
		return 0;
	}
	
	fp2 = fopen("sayilar1.txt","w");
	
	if(fp2==NULL){
		printf("Dosya acma hatasi");
		return 0;
	}
	
	for(int i=0;i<100;i++){
		
		nr1=rand()%100;
		
		if(nr1 & 1 << 4){
			
			nr1 &= ~(1 << 2);

			fprintf(fp2,"%d ",nr1);
			}
			
		else{
			nr1 |= 1 << 3;
			
			fprintf(fp1,"%d ",nr1);
			}
	}
	fclose(fp1); fclose(fp2);
}
