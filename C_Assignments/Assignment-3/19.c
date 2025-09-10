#include<stdio.h>

int main(){

	int min,max;
	printf("Enter the minimum range :");
	scanf("%d",&min);
	printf("Enter the maximum range :");
	scanf("%d",&max);
	for(int i=1; i<=10; i++){
		for(int j=min; j <= max; j++){
		printf("%4d",i*j);}
	printf("\n");}


	return 0;}
