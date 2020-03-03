#include <stdio.h>

int main(){
	
	struct ders{
		int ders_kodu;
		int vize;
		int final;
		float gecme_notu;
	};
	
	struct ogrenci_bilgiler{
		char ad[40];
		char soyad[40];
		int no;
		struct ders dersler[5];
	};
	
	struct ogrenci_bilgiler ogrenciler[5];
	
	for(int i=0;i<5;i++){
		printf("%d-> Ogrenci ad: ",i+1); scanf("%s",ogrenciler[i].ad);
		printf("%d-> Ogrenci soyad: ",i+1); scanf("%s",ogrenciler[i].soyad);
		printf("%d-> Ogrenci no: ",i+1); scanf("%d",&ogrenciler[i].no);
		for(int k=0;k<5;k++){
			printf("%d--> Ders Kodu:",k+1); scanf("%d",&ogrenciler[i].dersler[k].ders_kodu);
			printf("%d--> Ders Vize:",k+1); scanf("%d",&ogrenciler[i].dersler[k].vize);
			printf("%d--> Ders Final:",k+1); scanf("%d",&ogrenciler[i].dersler[k].final);
			ogrenciler[i].dersler[k].gecme_notu=(float)(ogrenciler[i].dersler[k].vize*2/5)+(float)(ogrenciler[i].dersler[k].final*3/5);
		}	
	}
	
	printf("\n\n-----Ogrenciler-----\n\n");
	
	for(int i=0;i<5;i++){
		printf("%s-%s-%d\n",ogrenciler[i].ad,ogrenciler[i].soyad,ogrenciler[i].no);
		printf("Gecme Notlari | ");
		for(int k=0;k<5;k++){
			printf("%d.Ders --> %f ",k+1,ogrenciler[i].dersler[k].gecme_notu);
		}
		printf("\n\n");
	}
	
	
	
	
	
	
	
	
	
	
	
}
