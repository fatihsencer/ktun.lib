#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void sort_ver2(int *pointer, int size);

int main(){
	
	int *array,nb1,sayac=0;
	
	array=(int *)malloc(0);
	
	while(true){
		
		printf("Enter the Number:"); scanf("%d",&nb1);
		
		if(nb1>=0){
			
			sayac++;
			
			realloc(array,sayac*sizeof(int));
			
			*(array+(sayac-1))=nb1;	
		}
		
		else break;
	}
	
	sort_ver2(array,sayac);
	
	for(int i=0;i<sayac;i++){
		printf("%d ",*(array+i));
	}
	
	free(array);
				
}

void sort_ver2(int *array, int flag){
int *min;

for(int i=0;i<flag-1;i++){
	
	min=array+i;
	
	for(int j=i+1;j<flag;j++){
		
		if(*min>*(array+j)){
			min=(array+j);
		}
		else;
	}
		
	int temp=*min;
		
	*min=*(array+i);
		
	*(array+i)=temp;
		
	}
}
