#include <stdio.h>
#include <conio.h>

int main(){
	char metin[100];	int k;
	
	printf("Metninizi giriniz...\n-->"); gets(metin);
	
	for(k=0;metin[k]!=NULL;k++){
		
		if(65<=metin[k] && metin[k]<=90){
			metin[k] = metin[k] + 32;
		}
		else if(97<=metin[k] && metin[k]<=122){
			metin[k] = metin[k] - 32;
		}
	}
	printf("%s",metin);
	
	getch();
}
