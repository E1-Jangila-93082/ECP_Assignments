#include<stdio.h>

int main(){

	int b,i,pow=1;
	printf("Enter the base :");
	scanf("%d",&b);
	printf("Enter the index :");
	scanf("%d",&i);

	for( int a=1 ; a <= i ; a++){
		pow *= b;}
	printf("Result : %d\n",pow);
	
	

	return 0;}
