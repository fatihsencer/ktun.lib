#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){
	
	int n1=0,*array,sayac=0;
	
	array=(int *)malloc(0);
	
	while(true){	
		
		printf("Enter Number: "); scanf("%d",&n1);
		
		if(n1>=0){
		
			if(n1%3==0 && n1%5==0){	
			sayac++;
			realloc(array,sayac*sizeof(int));
			
			*(array+(sayac-1))=n1;
			}
		}
		else break;
	}		
	
	
	for(int i=0;i<sayac;i++){
		printf("%d ",*(array+i));
	}		 
	
}
