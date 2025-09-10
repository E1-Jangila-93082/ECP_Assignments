#include<stdio.h>

int calc(int,int,int*);

int main(){
	
	int num1, num2, sum, prod;
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);

	prod = calc(num1,num2,&sum);
	printf("Sum = %d\n",sum);
	printf("Product = %d\n",prod);

return 0;}

int calc(int pn1, int pn2, int*sum){

	*sum = pn1 + pn2;
	return pn1*pn2;

}
