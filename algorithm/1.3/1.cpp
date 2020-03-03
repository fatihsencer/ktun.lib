#include <stdio.h>
#include <conio.h>

int main(){
	int matris1[4][3];
	int matris2[3][4];
	int carp[4][4];
	int i,j,toplam=0;
	
	printf("1.Matris Degerlerini Giriniz...\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("(%dx%d) -> ",i+1,j+1);
			scanf("%d",&matris1[i][j]);
			}
		}
	
	printf("\n2.Matris Degerlerini Giriniz...\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("(%dx%d) -> ",i+1,j+1);
			scanf("%d",&matris2[i][j]);
			}
		}
	printf("\n---------------------------\n");
	printf("2 matrisin carpimi");
	printf("\n---------------------------\n\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			for(int k=0;k<3;k++){
			toplam+=matris1[i][k]*matris2[k][j];
			}
			carp[i][j]=toplam; 
			toplam=0;
			printf("%.2d ",carp[i][j]);
		}
	printf("\n\n");
	}
	
	getch();
}
