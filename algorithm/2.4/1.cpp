#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void selection_sort(int x[100]);
void insertion_sort(int x[100]);

int main(){
	
	srand(time(NULL));
	
	int array[100];
	
	printf("not sorted\n\n");
	
	for(int i=0;i<100;i++){
	
		array[i]=rand()%100;
	
		printf("%d ",array[i]);
	}
	
	printf("\n\nsorted\n\n");
	
	selection_sort(array);
	insertion_sort(array);
	
	for(int i=0;i<100;i++){
	
		printf("%d ",array[i]);
	
	}	
	
}

void selection_sort(int x[100]){
	
	int flag,i,j,temp;
	
	for(i=0;i<49;i++){
		
		flag = i;
		
		for(j=i+1;j<50;j++)
			if(x[flag]<x[j]) flag=j;	
					
		temp=x[i];
		
		x[i]=x[flag];
		
		x[flag]=temp;
	}
	
}

void insertion_sort(int x[100]){
	
	int nmbr,i,j;
	
	for(i=51;i<100;i++){
		
		nmbr=x[i];
		j=i-1;
		
		while(j>=50 && x[j]>nmbr){
			x[j+1]=x[j];
			j-=1;
		}	
		x[j+1]=nmbr;
	}

}
















