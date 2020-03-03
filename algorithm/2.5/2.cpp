#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int *array,*array2,sayac=0;
	
	array=(int *)malloc(100*sizeof(int));
	array2=(int *)malloc(sizeof(int));
	
	for(int i=0;i<100;i++)	*(array+i)=rand()%100;
	
	for(int i=0;i<100;i++){
		
		if(*(array+i) & 1 << 4);
		
		else{
			*(array2+sayac)=*(array+i);
		
			realloc(array2,(sayac+1)*sizeof(int));
			
			sayac++;
				
			}
	}
	
	for(int i=0;i<100;i++)	printf("%d ",*(array+i));
	
	printf("\n\n\n");

	for(int i=0;i<sayac;i++)	printf("%d ",*(array2+i));
	
	free(array);
	free(array2);
	
}
