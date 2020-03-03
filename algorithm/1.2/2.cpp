#include <stdio.h>
#include <conio.h>

int main(){
	
	int i,sayi1,toplam=0,sayac=0;
	float ortalama;
	
	printf("Sayi giriniz...:"); scanf("%d",&sayi1);
	
	for(i=0;i<=sayi1;i+=2){
		toplam=toplam+i;
		sayac++;
	}
		
	ortalama=(float)toplam/sayac;
	printf("Sayiniza kadar cift olan sayilarin toplami = %d\n",toplam);
	printf("Sayiniza kadar cift olan sayilarin toplaminin ortalamasi = %f\n",ortalama);

	getch();
}
