#include<stdio.h>

int main(){

	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	
	if(a>0)
	printf("%d is a positive number.\n",a);
	else if(a<0)
	printf("%d is a negative number.\n",a);
	else
	printf("The given number is Zero.\n");

	return 0;}
