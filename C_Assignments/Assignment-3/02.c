#include<stdio.h>

int main(){

	int a,mul;
	printf("Enter a number : ");
	scanf("%d",&a);
	int n = 1;
	while(n<=10){
	        mul = a*n;
		printf("%d X %d = %d\n",a,n,mul);
		n++;}

	return 0;}
