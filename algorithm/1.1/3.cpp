#include <stdio.h>
#include <conio.h>

int main(){
	int sayi1,sayi2,sayi3;
	float ort;
	
	printf("1.degeri giriniz: ");
	scanf("%d",&sayi1);
	printf("2.degeri giriniz: ");
	scanf("%d",&sayi2);
	printf("3.degeri giriniz: ");
	scanf("%d",&sayi3);
	
	ort=(float)(sayi1+sayi2+sayi3)/3;
	printf("Sayilarinizin ortalamasi: %f",ort);

	getch();
}
