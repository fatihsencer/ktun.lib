#include<stdio.h>
#include<conio.h>

int addition(int x){
	
	int total;
	
	if(x<=0) total=0;
	else total=x+addition(x-1);
	
	return total;

}

int main(){
	
	int nb1;
	
	printf("Enter Number: "); scanf("%d",&nb1);
	
	printf("%d",addition(nb1));
	
	
}
