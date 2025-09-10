#include<stdio.h>

int main(){

	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	if ( b == 0){
		printf("Error! anything divided by zero is infinity.\n");}
	else{
		printf("Division = %d\n",a/b);}
	


	return 0;}
