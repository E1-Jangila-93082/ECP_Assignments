#include<stdio.h>

int main(){

	typedef enum choise { EXIT, ADD, SUB, MUL, DIV }CHOOSE;
	CHOOSE ch;
	
	do{ 
	int num1,num2,res1,res2,res3,res4;
	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("Enter the second number :");
	scanf("%d",&num2);
	printf("0.EXIT\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
	printf("Choose your option :");
	scanf("%d",&ch);
	
	switch(ch){
		case EXIT : printf("Shutting down...\n");
		break;
		case ADD : res1 = num1 + num2;
			   printf("The addition of %d and %d is : %d\n",num1,num2,res1);
		break;
		case SUB : res2 = num1 - num2;
			   printf("The subtraction of %d and %d is : %d\n",num1,num2,res2);
		break;
		case MUL : res3 = num1 + num2;
			   printf("The multiplication of %d and %d is : %d\n",num1,num2,res3);
		break;
		case DIV : if(num2==0)
				printf("INVALID! Anything divided by 0 is infinity.\n");
			   else{	
			   res4 = num1/num2;
			   printf("The division of %d and %d is : %d\n",num1,num2,res4);}
		break;
		default : printf("INVALID! Please enter the valid choise.\n");
	 }
} while (ch != EXIT);
	
	

return 0;}
