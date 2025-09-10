#include<stdio.h>

int fact_rec(int);

int main(){

	int num,fact;
	printf("Enter the number : ");
	scanf("%d",&num);
	fact = fact_rec(num);	
	printf("Factorial of %d is = %d",num,fact);
	printf("\n");
return 0;}

int fact_rec(int n){
	
	if(n==0 || n==1)
	return 1;
	else
	return n*fact_rec(n-1);
}
