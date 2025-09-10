#include<stdio.h>

void swap(int*,int*);

int main(){

	int a,b;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	printf("Before swap : num1 = %d, num2 = %d\n",a,b);
	swap(&a,&b);
	printf("After swap : num1 = %d, num2 = %d\n",a,b);
	
	

return 0;}

void swap(int*num1,int*num2){

	int temp;
	temp = *num1; 
	*num1 = *num2;
	*num2 = temp;
}
