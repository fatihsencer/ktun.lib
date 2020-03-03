#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){
	int matris[10][10];
	int i,k,j,deger,toplam=0;
	srand(time(NULL));
	
	//random sayi belirleme...	
	for(i=0;i<10;i++){
		for(k=0;k<10;k++){
			matris[i][k]=rand()%100;
		}
	}
	
	printf("\n     10x10 Random Matris\n\n");
	printf("-----------------------------\n\n");
	
	//matrisi ekrana yazdirma...
	for(i=0;i<10;i++){
		for(k=0;k<10;k++){
			printf("%.2d ",matris[i][k]);
		}
	printf("\n\n");	
	}

	printf("-----------------------------\n\n");
	
	//Asal olanlari bulma...
	printf("Matriste Asal Olan Sayilar...\n\n");
	printf("-----------------------------\n\n");
	for(i=0;i<10;i++){
		for(k=0;k<10;k++){
		deger=1;	
			for(j=2;j<matris[i][k];j++){
				if(matris[i][k]%j==0){
					deger=0;
					break;
				}
				else;
			}
		if(deger==1 && matris[i][k]>1){ // matris[i][k] > 1 kýsmý, en küçük asal sayi 2 den baþladýðý için...
			printf("%.2d ",matris[i][k]);
			toplam=toplam+matris[i][k];
			}
		}
	}
	printf("\n\nAsal Sayilerin Toplami --> %d",toplam);
	getch();
}
