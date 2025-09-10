#include<stdio.h>

int main(){

	int a,fact=1;
	printf("Enter the number :");
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		fact = fact*i;}
	printf("Factorial of %d is : %d\n",a,fact);

	return 0;}
