#include <stdio.h>
#include <conio.h>

int main(){
	int sayac=1;	char text[100];
	
	printf("Metin giriniz...\n-->"); gets(text);
	
	for(int i=0;text[i]!=NULL;i++)
		if(text[i]==' ') sayac++;

	printf("Metininiz %d kelimeden olusuyor.",sayac);

	getch();			
}
