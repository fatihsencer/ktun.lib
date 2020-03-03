#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int sayi1,i,tektoplam=0,sayac=0;
	float aritort,geoort;
	double cifttoplam=1,sayac2=0;
	
	printf("10 tane sayi giriniz...: \n");
	
	for(i=0;i<10;i++){
		scanf("%d",&sayi1);
		if(sayi1%2==1){
			tektoplam+=sayi1;
			sayac++;
		}
		else if(sayi1%2==0){
			cifttoplam*=sayi1;
			sayac2++;	
		}
		else;
	}
	aritort=(float)tektoplam/sayac;
	geoort=pow(cifttoplam,(1/sayac2));
	
	printf("Tek sayilarinizin aritmetik ortalamasi...: %f\n\n*********************\n\nCift sayilariniz geometrik ortalamasi...: %f",aritort,geoort);
	getch();
	
}
