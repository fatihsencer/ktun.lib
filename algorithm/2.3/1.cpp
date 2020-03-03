#include <stdio.h>

int obeb(int x, int y);

int main(){
	
	int nbr1,nbr2;
	
	printf("Enter nuber 1: "); scanf("%d",&nbr1);
	printf("Enter nuber 2: "); scanf("%d",&nbr2);
	
	printf("OBEB(%d,%d) = %d",nbr1,nbr2,obeb(nbr1,nbr2));	
	
}

int obeb(int x, int y){
	if(y==0)	return x;
	
	return obeb(y, x % y);
}
