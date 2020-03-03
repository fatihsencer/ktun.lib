#include <stdio.h>

int asallikolcer(int);

int main(){
	
	int sayi;
	
	printf("Asal olcer\n\nSayi giriniz :"); scanf("%d",&sayi);
	
	if(sayi>1){	
		if(asallikolcer(sayi)==1) 
			printf("Sayiniz asallik testinden gecti. -SAYINIZ ASALDIR-");
		
		else if(asallikolcer(sayi)==0)
			printf("Sayiniz asallik testinden gecemedi. -SAYINIZ ASAL DEGILDIR-");
		}
	else
		printf("Sayiniz asallik testinden gecemedi. -SAYINIZ ASAL DEGILDIR-");
	
}

int asallikolcer(int x){
	
	for(int i=2;x>i;i++){
		if(x%i==0)
			return 0;
	}
	
	return 1;
}
