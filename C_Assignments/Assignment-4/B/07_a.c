#include<stdio.h>

void calc(int,int);
int sum, prod;

int main(){
	
	int num1, num2;
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	calc(num1,num2);
	printf("Sum = %d\n",sum);
	printf("Product = %d\n",prod);

return 0;}

void calc(int pn1, int pn2){

	sum = pn1 + pn2;
	prod = pn1*pn2;

}
