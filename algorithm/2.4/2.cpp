#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void quicksort(int dizi[100],int sol,int sag){
    int temp,pivot,i,j;
    if(sol<sag){
        pivot=sol;
        i=sol;
        j=sag;
        while(i<j){
            while(dizi[i]<=dizi[pivot]&&(i<sag)){
                i++;
            }
            while(dizi[j]>dizi[pivot]){
                j--;
            }
            if(i<j){
                temp=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;
            }
        }
		temp=dizi[pivot];
		dizi[pivot]=dizi[j];
		dizi[j]=temp;
		quicksort(dizi,sol,j-1);
		quicksort(dizi,j+1,sag);
	}
}

int main(){
	int dizi[100];
	srand(time(NULL));
	
	printf("-------\nNOT SORTED\n-------\n");
	
	for(int i=0;i<100;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\n-------\nSORTED\n-------\n");
	quicksort(dizi,0,50);
	
	for(int i=0;i<50;i++){
		printf("%d ",dizi[i]);
	}
	quicksort(dizi,50,100);
	for(int i=100;i>50;i--){
		printf("%d ",dizi[i]);
	}
}
