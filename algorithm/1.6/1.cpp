#include <stdio.h>

struct isci_bilgiler {			//Isci yapisini olusyuran struct
		char adi[30];
		char soyadi[30];
		int yas;
		double aylikucret;
	};

struct isci_bilgiler bilgialma();	//Isci bildiren fonksiyon on bilgilendirmesi

int main(){
	
	struct isci_bilgiler isci1;
	
	isci1=bilgialma();
	
	printf("\n----isci Bilgileri---\n\n");
	
	printf("Isim --> %s\n",isci1.adi);
	
	printf("Soy Isim --> %s\n",isci1.soyadi);
	
	printf("Yas --> %d\n",isci1.yas);
	
	printf("Aylik Ucret --> %lf",isci1.aylikucret);
	
}

struct isci_bilgiler bilgialma(){	//Isci bilgisini alan fonksiyon
	
	struct isci_bilgiler isci;
	
	printf("Isim: "); gets(isci.adi);

	printf("Soy Isim: "); gets(isci.soyadi);

	printf("Yas: "); scanf("%d",&isci.yas);

	printf("Aylik Ucret: "); scanf("%lf",&isci.aylikucret);

	return isci;
} 
