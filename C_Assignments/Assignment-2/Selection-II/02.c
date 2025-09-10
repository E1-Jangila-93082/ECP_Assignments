#include<stdio.h>

int main(){

	int x,y,a,b,c;
	float d;
	printf("Enter the first number :");	
	scanf("%d",&x);
	printf("Enter the second number :");	
	scanf("%d",&y);
	
	int num;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");	
	printf("Please enter your choice :");
	scanf("%d",&num);
	switch (num){
			case 1 : a = x + y;
			printf("Addition = %d\n",a);
			break;
			case 2 : b = x - y;
			printf("Subtraction = %d\n",b);
			break;
			case 3 : c = x * y;
			printf("Multiplication = %d\n",c);
			break;
			case 4 : if(y!=0){
				 d = (float)x / y;
				 printf("Division = %.2f\n",d);}
				 else
				 printf("INVALID! Anything divided by 0 is infinity.\n");
			break;
		default : printf("Please enter a valid choise.\n");
			break ;}
	
	

	return 0;}
