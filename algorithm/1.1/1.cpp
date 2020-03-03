#include <stdio.h>
#include <conio.h>

int main(){
	int sayi1,sayi2,toplam,carpim,fark;
	float bolum;
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	bolum=(float)sayi1/sayi2;
	carpim=sayi1*sayi2;
	printf("Birinci sayi + Ikinci sayi: %d\nBirinci sayi - Ikinci sayi: %d\nBirinci sayi * Ikinci sayi: %d\nBirinci sayi / Ikinci sayi: %f",toplam,fark,carpim,bolum);	
	
	getch();
}
