#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void selection(int *array);

int main(){
	
	srand(time(NULL));
	
	int *array,i=0,*temp;
	
	array = (int *)malloc(20*sizeof(int));
	
	temp = array;

	while(i<20){
		*(array+i)=rand()%100;
		i++;
	}
	
	printf("NOT SORTED\n");

	for(int i=0;i<20;i++){
		printf("%d ",*(array+i));
	}
	
	selection(array);
	
	printf("\n\nSORTED\n");
	
	for(int i=0;i<20;i++){
		printf("%d ",*(array+i));
	}
	
	free(array);
}

void selection(int *array){
	
	int *min,temp;
	
	int k=0,l;
	
	while(k<19){
		
		min = (array+k);
		
		l=k+1;
		
		while(l<20){
			
			if(*(array+l)>*min)	min=(array+l);
			
			l++;
		}
		
		temp=*min;
		
		*min=*(array+k);
		
		*(array+k)=temp;
		
		k++;
	}

}

