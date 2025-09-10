#include<stdio.h>

int main(){

	int a,n1=0,n2=1,fib=1;
	printf("Enter the number of iteration :");
	scanf("%d",&a);

	printf(" %d %d",n1,n2);

	for(int i=3 ; i<=a ; i++){
	
		fib = n1 + n2;
		printf(" %d",fib);
		n1 = n2;
		n2 = fib;}

	printf("\n");

	return 0;}
