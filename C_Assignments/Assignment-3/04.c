#include<stdio.h>

int main(){

	int a,fact=1;
	printf("Enter the number :");
	scanf("%d",&a);
	int i = 1;
	while (i<=a){
		 printf(" %d *",i);
    		 fact = fact*i;
		 i++;} 

		printf("\b= %d\n",fact);


	return 0;}
