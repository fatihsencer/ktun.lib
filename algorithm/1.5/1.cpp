#include <stdio.h>

int fonc(int);
int comb(int,int);

int main(){
	
	int n,r;
	printf("Kombinasyonunu heasplayici...\n");
	
	printf("N'i giriniz :"); scanf("%d",&n);	
	printf("R'yi giriniz :"); scanf("%d",&r);
	
	
	printf("Sonuc :%d",comb(n,r));

}

int fonc(int x){
	
	int sonuc=1;
	
	for(int i=1;i<=x;i++)
		sonuc*=i;
	
	return sonuc;
}

int comb(int x,int y){
	
	int sonuc;
	
	sonuc=fonc(x)/(fonc(y)*fonc(x-y));
	
	return sonuc;
}
