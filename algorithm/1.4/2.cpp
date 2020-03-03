#include <stdio.h>
#include <conio.h>

int main(){
	
	char text[100],text2[100];
	int i,k,j,kontrol,sayac1=0,sayac=0;
	
	printf("Metin giriniz...\n-->"); gets(text);
	
	printf("Aramak istediginiz kelimeyi giriniz: "); gets(text2);
	
	for(sayac1=0;text2[sayac1]!=NULL;sayac1++);
	
	for(i=0;text[i]!=NULL;i++){
		for(j=i,k=0;text[j]==text2[k] && text2[k]!=NULL;j++,k++);

		if(k>0 && text2[k]==NULL){
			sayac++;
			printf("%d-%d arasinda.\n\n",i+1,i+sayac1);	
		}
		
	}
	printf("%d tane vardir.",sayac);
}
