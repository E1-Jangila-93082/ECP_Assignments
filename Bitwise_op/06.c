#include<stdio.h>
void swap(int, int);

int main(){
	
	int num1,num2;
	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("Enter the second number :");
	scanf("%d",&num2);
	printf("Before swap : num1 = %d, num2 = %d\n",num1,num2);
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;
//	swap(num1,num2);
	printf("After swap : num1 = %d, num2 = %d\n",num1,num2);
return 0;}

void swap(int num1, int num2){
	
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;
}
