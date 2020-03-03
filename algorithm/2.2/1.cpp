#include <stdio.h>

unsigned int lrs(unsigned int sayi,int rot);
void binary(int sayi);

int main(){
	
	unsigned int x;
	int rot;
	
	printf("Sayi giriniz:"); scanf("%d",&x);
	printf("Kac kere kaydirmak istiyorsunuz? :"); scanf("%d",&rot);
	
	printf("current = %d - ",x);
	binary(x);
	
	printf("\n");
	
	x=lrs(x,rot);
	
	printf("rotated = %d - ",x);
	binary(x);

}

unsigned int lrs(unsigned int sayi,int rot){
	
	for(int i=0;i<rot;i++){
		if(sayi & (	1 << sizeof(unsigned int)*8-1)){
			sayi <<= 1;
			sayi |= 1; // 0.index olduðu için kaydýrmaya gerek yok.
		}
		else{
			sayi <<= 1;
		}
	}
	return sayi;
}

void binary(int sayi){
	
	for(int i=sizeof(int)*8-1 ; i>=0 ; i--){
		
		if(sayi >> i & 1 == 1) putchar('1');
		else putchar('0');
		
		if(i%4==0) putchar(' ');
	}
}
