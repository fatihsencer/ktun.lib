#include <stdio.h>
#include <conio.h>

int main(){
	int deger1,deger2;
	printf("1.Degeri Giriniz: ");
	scanf("%d",&deger1);
	printf("2.Degeri Giriniz: ");
	scanf("%d",&deger2);
	
	if (deger1>deger2){
		printf("1.Girdiginiz deger buyuk.");
	}
	else
	if (deger1==deger2){
		printf("Girdiginiz degerler birbirine esit");
	}
	else
	if (deger1<deger2){
		printf("2.Girdiginiz deger buyuk");
	}
	else
	getch();
	
	
	
}
