#include <stdio.h>

int basamaktoplamator(int);

int main(){
	
	int sayi;
	
	printf("Sayi giriniz :"); scanf("%d",&sayi);
	
	printf("Sayinizin basamaklari toplami = %d",basamaktoplamator(sayi));
	
}

int basamaktoplamator(int x){
	
	int toplam=0;
	
	while(x>0){
		
		toplam+=x%10;
		x/=10;
	}
	return toplam;
}
