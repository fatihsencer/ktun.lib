#include <stdio.h>

int main(){
	int vize,final,but,sonuc;
	char ders[20];

	printf("Ders ismini giriniz...: "); gets(ders);
	printf("Vize notunuzu giriniz...: "); scanf("%d",&vize);
	printf("Final notunuzu giriniz...: "); scanf("%d",&final);
	
	vize=vize*0.4;
	final=final*0.6;
	sonuc=vize+final;
	
	if(sonuc>=60)
		printf("%s dersinden %d ortalama ile gectiniz...",ders,sonuc);
	
	else
	{
		printf("But notunuzu giriniz...:"); scanf("%d",&but);
		but=but*0.6;
		sonuc=but+vize;
		
		if(sonuc>=60)
			printf("%s dersinden %d ortalama ile gectiniz...",ders,sonuc);
		
		else
			printf("%s dersinden %d ortalama ile kaldiniz...",ders,sonuc);
	}
	
}
